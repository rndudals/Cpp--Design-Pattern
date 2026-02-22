#pragma once
#include <memory>
#include <string>
#include "Image.h"
#include "RealImage.h"

class ProxyImage : public Image
{
public:
	ProxyImage(const std::string& filename);
	void display() override;


private:
	std::string filename_;
	std::unique_ptr<RealImage> realImage_;
};

