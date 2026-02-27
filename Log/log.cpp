#include <iostream>
#include <string>
#include "log.h"

void initLog() {
	std::cout << "Initialiting Log" << std::endl;
}

void logInt(int log) {
	std::cout << log;
}


void logString(std::string log) {
	std::cout << log;
}

void logFloat(float log) {
	std::cout << log;
}

void logNewLine() {
	std::cout << "\n";
}

void logChar(char log) {
	std::cout << log;
}

void newLine(int repeats) {
	for (int i = 0; i < repeats; i++) {
		std::cout << "\n";
	}
}