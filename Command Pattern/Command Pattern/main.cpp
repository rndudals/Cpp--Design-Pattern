#include <iostream>
#include <memory>
#include "Light.h"
#include "Command.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "RemoteControl.h"
using namespace std;

int main() {
	Light light;

	RemoteControl remote;

	remote.setCommand(std::make_unique<LightOnCommand>(&light));
	remote.pressButton();

	remote.setCommand(std::make_unique<LightOffCommand>(&light));
	remote.pressButton();

	return 0;
}