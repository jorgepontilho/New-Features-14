#include <iostream>
#include <string>
using namespace std;

auto f() { 
    string x ="Teste";
    return x;
} 

int main()
{
    decltype(f()) x = f();
    std::cout  << x;
    return 0;
}