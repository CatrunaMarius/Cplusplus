#pragma once
#include <iostream>
using namespace std;

template<class T>
class ring {
private:
	int m_size;
	int m_pos;
	T *m_values;

public:
	class iterator;

public:
	ring(int size) :m_pos(0),m_size(size), m_values(NULL) {//constructor.
		m_values = new T[size];
	}
	~ring() {//distructor

		delete[] m_values;

	}
	int size() {
		return m_size;
	}

	void add(T value) {
		m_values[m_pos++] = value;

		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	T &get(int pos) {
		return m_values[pos];
	}
};

template<class T>
class ring<T>::iterator {
public:
	void print() {
		cout << "hello from iterator" <<T()<< endl;
	}
};