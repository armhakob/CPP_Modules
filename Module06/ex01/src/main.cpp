#include "Serializer.hpp"

int main() 
{
	Data data = {42, 'A'};
	Data* ptr = &data;

	uintptr_t serializedPtr = Serializer::serialize(ptr);
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout << "Original pointer: " << ptr << std::endl;
	std::cout << "Serialized pointer: " << serializedPtr << std::endl;
	std::cout << "Deserialized pointer: " << deserializedPtr << std::endl;
}