#include <iostream>
#include "Computer.h"

int main() {

	Computer gamingPC = Computer::Builder()
		.setCPU("i9")
		.setRAM(32)
		.setStorage(2000)
		.setGPU("RTX 4090")
		.build();

	gamingPC.print();


	Computer officePC = Computer::Builder()
		.setCPU("i5")
		.setRAM(16)
		.build();

	officePC.print();

	return 0;
}