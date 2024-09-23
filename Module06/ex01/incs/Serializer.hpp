#ifndef SRIALIZER_HPP
# define SRIALIZER_HPP

# include <iostream>

struct Data
{
	int val;
	char flag;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &other);
		Serializer& operator=(const Serializer &other);
		~Serializer();

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif