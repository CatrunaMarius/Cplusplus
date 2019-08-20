#include "Cat.h"


namespace marius {
	
	void saySomething() {
		cout << "hello there\n";
	}
	
	
	Cat::Cat()
	{
	}

	void Cat::speak() {
		std::cout << "meouwww";
	}

	Cat::~Cat()
	{
	}
}