#include<iostream>
#include<memory>
#include "Image.h"
#include "ProxyImage.h"

int main() {

	std::unique_ptr<Image> image 
		= std::make_unique<ProxyImage>("cat.png");

	std::cout << "이미지 아직 로딩 안됨\n";

	image->display(); // 여기서 실제 로딩 발생
	image->display(); // 두 번째는 로딩 없이 출력

	return 0;
}