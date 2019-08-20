#include <iostream>
using namespace std;



class Animal {
public:
	//void speak() {
	virtual void speak() {
		cout << "??????";
	}
	virtual~Animal(){}
};

class Cat :public Animal {
public:
	//void speak() {
	virtual void speak() {
		cout << "RrrrrRRrrrrr";
	}

	virtual~Cat() {};
};

class HouseCat :public Cat {
	public:
		//void speak() {
		virtual void speak() {
			cout << "Meeouw";
		}
		~HouseCat() {};
};











int main() {
	//Animal *pAnimal = new Cat;
	Animal *pAnimal = new HouseCat;
	pAnimal->speak();
	delete pAnimal;

	
	
	
	
	
	
	
	
	
	
	return 0;
}