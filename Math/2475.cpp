#include <iostream>
#include <cmath>

int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << int((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2))) % 10;
    return 0;
}