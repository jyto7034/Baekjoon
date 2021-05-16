#include <iostream>

bool arry[1000001] = {
    false,
    true,
};

void solve()
{
    int start = 0, end = 0;
    std::cin >> start >> end;
    for (int i = 2; i < end; i++)
        for (int j = 2; i * j <= end; j++)
            arry[i * j] = true;

    for (int i = start; i <= end; i++)
        if (arry[i] == false)
            std::cout << i << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}