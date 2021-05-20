#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
ll k, n;
std::vector<ll> lines;
bool check(ll num){
    ll result = 0;
    for(ll i = 0; i < lines.size(); i++)
        result += lines[i] / num;
    if(result >= n) return true;
    return false;
}
ll solve(ll lo, ll hi){
    ll mid = ((unsigned int)lo + (unsigned int)hi) >> 1;
    if(check(mid)){
        if(mid + 1 >= hi)
            return mid;
        return solve(mid, hi);
    }
    else{
        return solve(lo, mid);
    }return -1;
}
int main()
{
    std::ios::sync_with_stdio(false); std::cout.tie(NULL); std::cin.tie(NULL);
    std::cin >> k >> n;
    while (k-- > 0){
        ll a;
        std::cin >> a;
        lines.push_back(a);
    }
    std::cout << solve(1, 2147483648);
    return 0;
}