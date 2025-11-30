#pragma once
#include "Prototype.h"

class ConcreteTypeA : public Prototype
{
private:
	int num_;
public:
	ConcreteTypeA(int num) : num_(num) {}
	std::unique_ptr<Prototype> clone() const override;
	void print() const override;
};

