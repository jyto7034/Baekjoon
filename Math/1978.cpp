#include <iostream>
#include <vector>

bool arry[1001] = {
    false,
};

void solve()
{
    for(int i = 2; i < 1001; i++){
        for(int j = 1; j < 1001; j++){
            if(i * j < 1001 && i * j != i)
                arry[i * j] = true;
        }
    }
    int tc;
    std::vector<int> nums;
    std::cin>>tc;
    while (tc-- > 0)
    {
        int a;
        std::cin >> a;
        nums.push_back(a);
    }
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
        if(arry[nums[i]] == false && nums[i] != 0 && nums[i] != 1)
            result++;
    std::cout<< result;    
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);
    solve();
    return 0;
}