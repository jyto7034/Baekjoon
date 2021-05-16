#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    std::vector<int> x{x1, x2, x3};
    std::vector<int> y{y1, y2, y3};
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());
    if (x[0] == x[1])
        std::cout << x[2] << " ";
    else
        std::cout << x[0] << " ";
    if (y[0] == y[1])
        std::cout << y[2];
    else
        std::cout << y[0];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}