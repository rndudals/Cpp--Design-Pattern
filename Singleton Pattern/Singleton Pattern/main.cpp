#include <iostream>
#include "Singleton.h"
using namespace std;

int main() {
	Singleton::getInstance().sayHello();

	auto &s1 = Singleton::getInstance();

	auto &s2 = Singleton::getInstance();

	std::cout << (&s1 == &s2) << std::endl;

	return 0;
}