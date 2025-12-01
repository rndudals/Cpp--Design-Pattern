#include "Singleton.h"
#include <iostream>
Singleton& Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

void Singleton::sayHello()
{
    std::cout << "Hello Singleton!" << std::endl;
}
