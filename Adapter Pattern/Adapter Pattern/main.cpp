#include <iostream>
#include "ServiceA.h"
#include "ServiceB.h"
#include "Target.h"
#include "AdapterA.h"
#include "AdapterB.h"

using namespace std;

int main() {

	ServiceA serviceA;
	ServiceB serviceB;

	Target *adapterA = new AdapterA(&serviceA);
	Target *adapterB = new AdapterB(&serviceB);

	adapterA->runService();
	adapterB->runService();

	return 0;
}