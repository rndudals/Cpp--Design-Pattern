#include <iostream>
#include "ConcreteTypeA.h"
#include "ConcreteTypeB.h"

using namespace std;

int main() {

	ConcreteTypeA originalA(42);
	ConcreteTypeB originalB("Hello");

	auto copyA = originalA.clone();
	auto copyB = originalB.clone();

	originalA.print();
	copyA->print();

	originalB.print();
	copyB->print();
	return 0;
}