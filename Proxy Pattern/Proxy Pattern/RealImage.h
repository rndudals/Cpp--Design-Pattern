#pragma once

#include "Image.h"
#include <string>
#include <iostream>

class RealImage : public Image
{
public:
	RealImage(const std::string& filename);
	void display() override;

private:
	std::string filename_;

	void loadFromDisk() const;
};

