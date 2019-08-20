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
	Person() :name(""), age(0) {}
	
	
	
	Person(const Person &other) {
		cout << "copy constructor running" << endl;
		name = other.name;
		age = other.age;
	}

	   	
	
	// pentru a putea crea mai multe persoane 
	Person(string name,int age):
		name(name),age(age){}
	
		
	void print() {
		cout << name << ": "<<age << endl;
	}
};


int main() {

	map<int, Person> people;

	/*people[0] = Person("mike", 40);
	people[1] = Person("viki", 30);
	people[2] = Person("raj", 20);*/

	people[50] = Person("mike", 40);
	people[32] = Person("viki", 30);
	people[1] = Person("raj", 20);

	people.insert(make_pair(55, Person("bob", 45)));
	people.insert(make_pair(55, Person("sue", 37)));



	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		
		cout << it->first << ": " << flush;
		
		it->second.print();
	}




	return 0;
}