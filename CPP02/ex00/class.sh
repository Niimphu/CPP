#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <header_file.hpp>"
    exit 1
fi

header_file="$1"
cpp_file="${header_file%.hpp}.cpp"

# Check if header file exists
if [ ! -f "$header_file" ]; then
    echo "Header file not found: $header_file"
    exit 1
fi

# Check if header guards are missing
if ! grep -q "#ifndef ${header_file%.hpp}_H" "$header_file"; then
    echo "#ifndef ${header_file%.hpp}_H" >> "$header_file"
    echo "# define ${header_file%.hpp}_H" >> "$header_file"
    echo "#endif" >> "$header_file"
fi

# Check if <iostream> is included
if ! grep -q "#include <iostream>" "$header_file"; then
    sed -i '1s;^;#include <iostream>\n\n;' "$header_file"
fi

# Extract class name
class_name=$(awk '/class [a-zA-Z_]+ {/{print $2; exit}' "$header_file")

# Add constructor and destructor prototypes
sed -i "/class $class_name {/a\
public:\
    $class_name();\
    ~$class_name();\
" "$header_file"

# Create the corresponding .cpp file
cat > "$cpp_file" <<EOF
#include "$header_file"

${class_name}::${class_name}() {
    // Constructor definition
}

${class_name}::~${class_name}() {
    // Destructor definition
}
EOF

# Create setter and getter prototypes and definitions
while IFS= read -r line; do
    if [[ $line == *"private:"* ]]; then
        while IFS= read -r line; do
            [[ $line == *"static "* ]] && continue  # Skip static members
            member_var=$(echo "$line" | awk -F ' ' '{print $2}' | sed 's/;//')
            member_type=$(echo "$line" | awk -F ' ' '{print $1}')
            setter_name="set${member_var^}"
            getter_name="get${member_var^}"
            echo "void $setter_name( const $member_type );" >> "$header_file"
            echo "void $getter_name( void );" >> "$header_file"
            cat >> "$cpp_file" <<EOF
void ${class_name}::$setter_name( const $member_type $member_var ) {
    // $setter_name definition
}

$member_type ${class_name}::$getter_name( void ) {
    // $getter_name definition
    return $member_var;
}
EOF
        done
    fi
done < "$header_file"

echo "Modifications completed. Generated: $cpp_file"
