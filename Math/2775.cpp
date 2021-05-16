#include <iostream>
#include <vector>

int merge(const std::vector<int> &arr, int cutIndex)
{
    int result = 0;
    for (int i = 0; i < cutIndex + 1; i++)
        result += arr.at(i);
    return result;
}

std::vector<int> calc(std::vector<int> arr, int Roomid, int floorid)
{
    if (floorid == -1)
        return arr;
    std::vector<int> _arr;
    for (int i = 0; i < Roomid; i++)
        _arr.push_back(merge(arr, i));
    return calc(_arr, Roomid, --floorid);
}

void solve()
{
    int tc;
    int floorid = 0, Roomid = 0;
    std::cin >> tc;
    while (tc-- > 0)
    {
        std::vector<int> zero_vector;
        std::cin >> floorid >> Roomid;
        for (int i = 1; i <= Roomid; i++)
            zero_vector.push_back((i * (i + 1)) / 2);
        if (floorid < 2)
        {
            if (floorid == 1)
                std::cout << zero_vector[Roomid - 1] << std::endl;
            else
                std::cout << Roomid << std::endl;
        }
        else
        {
            auto a = calc(zero_vector, Roomid, floorid - 2);
            std::cout << a[a.size() - 1] << std::endl;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    int a = 10;
    solve();
    return 0;
}