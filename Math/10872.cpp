#include <iostream>

int solve(int n)
{
    if(n == 0)
        return 1;
    return n * solve(n - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    int n; 
    std::cin>>n;
    n = solve(n);
    std::cout<< n;
    return 0;
}