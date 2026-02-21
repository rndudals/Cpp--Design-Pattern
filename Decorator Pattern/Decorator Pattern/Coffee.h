#pragma once
#include <string>

class Coffee {
public:
	virtual std::string getDescription() const = 0;
	virtual double cost() const = 0;
	virtual ~Coffee(){}
};