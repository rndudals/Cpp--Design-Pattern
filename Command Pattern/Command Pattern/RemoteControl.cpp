#include "RemoteControl.h"
#include "Command.h"

void RemoteControl::setCommand(std::unique_ptr<Command> cmd)
{
	command = std::move(cmd);
}

void RemoteControl::pressButton()
{
	command->execute();
}
