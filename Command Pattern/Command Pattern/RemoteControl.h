#pragma once

#include "Command.h"
#include <memory>
class RemoteControl
{
private:
	std::unique_ptr<Command> command;

public:
	void setCommand(std::unique_ptr<Command> cmd);
	void pressButton();
};

