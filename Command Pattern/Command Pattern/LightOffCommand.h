#pragma once
#include <memory>
#include "Command.h"
#include "Light.h"
class LightOffCommand : public Command
{
private:
	std::unique_ptr<Light> light;

public:
	LightOffCommand(Light* light) : light(light) {}
	void execute();
};

