#pragma once
#include <memory>

class Prototype {
public:
	virtual ~Prototype() = default;
	virtual std::unique_ptr<Prototype> clone() const = 0;
	virtual void print() const = 0;
};