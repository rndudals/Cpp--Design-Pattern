#include "RealImage.h"

void RealImage::loadFromDisk() const 
{
	std::cout << "Loading " << filename_ << "...\n";
}

RealImage::RealImage(const std::string& filename)
	: filename_(filename)
{
	loadFromDisk();
}

void RealImage::display()
{
	std::cout << "Displaying " << filename_ << '\n';
}


