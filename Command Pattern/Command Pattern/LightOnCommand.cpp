#include "LightOnCommand.h"

void LightOnCommand::execute()
{
	light->switchOn();
}
