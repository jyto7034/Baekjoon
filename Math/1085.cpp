#include <iostream>
#include <algorithm>
#include <vector>

void solve()
{
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    std::cout << std::min({w - x, h - y, x, y});
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}