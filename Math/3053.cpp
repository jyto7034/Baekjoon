#include <iostream>
#define M_PI 3.14159265358979323846

void solve()
{
    int r;
    std::cin >> r;
    double a = M_PI * r * r;
    double b = 2 * r * r;
    printf("%.6f\n", a);
    printf("%.6f", b);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}