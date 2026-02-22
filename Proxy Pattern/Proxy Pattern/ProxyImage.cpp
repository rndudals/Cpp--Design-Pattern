#include "ProxyImage.h"


ProxyImage::ProxyImage(const std::string& filename)
	: filename_(filename)
{}

void ProxyImage::display()
{
	if (!realImage_) {
		realImage_ = std::make_unique<RealImage>(filename_);
	}
	realImage_->display();
}
