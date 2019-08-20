#include <iostream>
#include <string>
#include<map>
using namespace std;


class Person {
private:
	string name;
	int age;

public:
	//steiman / ceva defold in cazul in care nu se gasesti numel /age/ambel.
	//constructor
	Person() :name(""), age(0) {}
	
	
	//copy constructor
	Person(const Person &other) {
		cout << "copy constructor running" << endl;
		name = other.name;
		age = other.age;
	}

	   	
	
	// pentru a putea crea mai multe persoane /functie
	Person(string name,int age):
		name(name),age(age){}
	
		//metoda
	void print() const {
		//cout << name << ": " << age << endl;
		cout << name << ": "<<age << flush;
	}
	bool operator<(const Person &other)const {
		//return name < other.name;
		if (name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}
	}
};


int main() {
	/*string test1 = "mike";
	string test2 = "bob";

		bool test = test1 < test2;*/

		map< Person,int> people;
	/*people[0] = Person("mike", 40);
	people[1] = Person("viki", 30);
	people[2] = Person("raj", 20);*/

	people[Person("mike", 40)]=40;
	people[Person("mike", 444)] = 123;
	people[Person("viki", 30)]=30;
	people[Person("raj", 20)]=20;

	/*people.insert(make_pair(55, Person("bob", 45)));
	people.insert(make_pair(55, Person("sue", 37)));*/



	for (map<Person,int>::iterator it = people.begin(); it != people.end(); it++) {
		
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	
	}




	return 0;
}