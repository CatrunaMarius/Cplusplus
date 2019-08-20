#include <iostream>
#include <SDL.h>
#include "Screen.h"
using namespace std;
using namespace marius;
int main(int argc, char * argv[])
{
	Screen screen;
	
	if (screen.init() == false) {
		cout << "error initialising SDL" << endl;
	}


	
	while (true) {
		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}