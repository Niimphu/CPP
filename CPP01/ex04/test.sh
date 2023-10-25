#!/bin/bash

url="https://gist.githubusercontent.com/MattIPv4/045239bc27b16b2bcf7a3a9a4648c08a/raw/2411e31293a35f3e565f61e7490a806d4720ea7e/bee%2520movie%2520script"

curl -s "$url" > example

if [ $? -eq 0 ]; then
    echo "Web page content fetched successfully and saved to 'example'."
else
    echo "Failed to fetch web page content."
fi

make

./loser example bee "FUCKING LOSER"

echo "Output saved to 'example.replace'"
