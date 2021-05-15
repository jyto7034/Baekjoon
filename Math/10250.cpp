#include <iostream>

void solve()
{
    int x = 0, y = 0, n = 0, tc = 0;
    std::cin >> tc;
    while (tc-- > 0)
    {
        std::cin >> y >> x >> n;
        x = n / y + 1;
        if(n % y == 0)
            x--;
        if (n % y != 0)
            y = n % y;
        if (x < 10)
            std::cout << y * 10 << x << std::endl;
        else
            std::cout << y << x << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}