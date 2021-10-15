#include <iostream>
using namespace std;
int main()
{
    int x=1;
    int y=2;
    std::cout  << [] (auto a, auto b) { return a+b; }(x,y);
    return 0;
}