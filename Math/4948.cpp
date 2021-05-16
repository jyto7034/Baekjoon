#include <iostream>

bool arry[246913] = {
    false,
    true,
};

void solve()
{
    while (true)
    {
        int n;
        std::cin >> n;
        if (n == 0)
            return;
        int cnt = 0;
        for (int i = n + 1; i <= n * 2; i++)
        {
            if (i >= 246913)
                break;
            if (arry[i] == false)
                ++cnt;
        }

        std::cout << cnt << "\n";
    }
}

int main()
{
    for (int i = 2; i <= 246913; i++)
        for (int j = 2; i * j <= 246913; j++)
            arry[i * j] = true;
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}