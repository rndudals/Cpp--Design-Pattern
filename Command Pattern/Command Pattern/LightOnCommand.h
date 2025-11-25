#pragma once
#include <memory>
#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command
{
private:
	std::unique_ptr<Light> light;

public:
	LightOnCommand(Light* light) : light(light) {}
	void execute();
};

