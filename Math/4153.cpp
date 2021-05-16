#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int a, b, c;
    while (true)
    {
        std::cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) return;
        if(a * a + b * b == c * c) std::cout<<"right"<<"\n";
        else if(a * a + c * c == b * b ) std::cout<<"right"<<"\n";
        else if(b * b + c * c == a * a ) std::cout<<"right"<<"\n";
        else std::cout<<"wrong"<<"\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}