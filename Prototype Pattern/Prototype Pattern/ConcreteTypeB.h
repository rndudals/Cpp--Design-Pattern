#pragma once
#include "Prototype.h"
#include <string>
#include <iostream>

class ConcreteTypeB : public Prototype
{
private:
	std::string st_;
public:
	ConcreteTypeB(std::string st) : st_(std::move(st)) {}
	std::unique_ptr<Prototype> clone() const override;
	void print() const override;
};

