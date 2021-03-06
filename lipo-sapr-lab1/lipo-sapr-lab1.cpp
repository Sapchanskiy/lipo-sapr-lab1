

#include "pch.h"
#include <cstdlib>
#include <iostream>
#include "Helloer.h"

int main(int argc, char* argv[]) {
	
	if (argc == 2) {
		Helloer hello(argv[1]);
		std::cout << hello.printMessage() << std::endl;
	}
	
	else if (argc == 1) {
		Helloer emptyHello;
		std::cout << emptyHello.printMessage() << std::endl;
	}
}
