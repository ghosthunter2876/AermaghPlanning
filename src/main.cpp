#include <iostream>

int main()
{
    const char helloText[16] = { "Hello, World!\n\0" };

    std::cout << helloText << std::endl;

    return 0;
}