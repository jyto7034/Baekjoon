#include <iostream>
#include <vector>

bool arry[10001] = {
    true,
    true,
};

void calc()
{
    for (int i = 2; i < 10001; i++)
        for (int j = 1; j < 10001; j++)
            if (i * j < 10001 && i * j != i)
                arry[i * j] = true;
}

void solve()
{
    calc();
    int start = 0, end = 0, result = 0, min = 0;
    std::cin >> start >> end;
    for (int i = start; i <= end; i++)
        if (arry[i] == false){
            if (result == 0)
                min = i;
            result += i;
        }
    if (result == 0)
        std::cout << -1;
    else{
        std::cout << result << std::endl;
        std::cout << min;
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