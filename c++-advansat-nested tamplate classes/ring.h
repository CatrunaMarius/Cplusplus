#pragma once
#include <iostream>
using namespace std;

template<typename T>
class ring
{
public:
	class iterator;
};

template<typename T>
class ring <T>::iterator {
public:
	void print() {
		cout << "hello from iterator: " <<T()<< endl;
	}
};

//inainte de template

//void ring::iterator::print() {
//
//			cout << "hello from iterator" << endl;
//	
//}