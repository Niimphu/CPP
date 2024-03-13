#include "Serializer.hpp"

int	main(void) {
	Data*			stuff = new Data();
	unsigned long	serializedValue = Serializer::serialize(stuff);
	Data*			deserializedValue = Serializer::deserialize(serializedValue);
	std::cout << "original: " << stuff << std::endl;
	std::cout << "serialized: " << serializedValue << std::endl;
	std::cout << "deserialized: " << deserializedValue << std::endl;
	delete stuff;
}
