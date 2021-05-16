#include <iostream>
#include <vector>

void solve()
{
    int num = -1;
    std::cin >> num;
    for (int i = 2; i < 10000000; i++)
        while (true && num != 0)
            if (num % i == 0){
                std::cout << i << std::endl;
                num /= i;
            }
            else
                break;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}