#pragma once
#include "Target.h"
#include "ServiceB.h"
class AdapterB : public Target
{
private:
	ServiceB *service;

public:
	AdapterB(ServiceB *serviceB) : service(serviceB) {}
	void runService();
};

