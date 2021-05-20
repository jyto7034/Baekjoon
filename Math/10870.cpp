#include <iostream>

int solve(int n)
{
    if (n > 1)
        return solve(n - 1) + solve(n - 2);
    else
        return n;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL); 
    int n;
    std::cin >> n;
    std::cout << solve(n);
    return 0;
}