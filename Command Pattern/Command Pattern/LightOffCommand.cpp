#include "LightOffCommand.h"
void LightOffCommand::execute()
{
	light->switchOff();
}