#pragma once
#include "Target.h"
#include "ServiceA.h"

class AdapterA : public Target
{
private:
	ServiceA* service;

public:
	AdapterA(ServiceA* serviceA) : service(serviceA) {}
	void runService();
};

