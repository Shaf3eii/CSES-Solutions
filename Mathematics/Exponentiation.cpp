//      ﷽
 
//       وَأَنْ لَيْسَ لِلْإِنْسَانِ إِلَّا مَا سَعَى
 
//       فَالجُهدُ يُثمِرُ إنْ تَضافَرَ صَفوُهُ، والعَزمُ يَرفعُ صَرحَ كُلِّ بُنيانِ.
 
//#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define Wl3_ElNor       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define i64             long long
#define int             long long
#define all(a)          a.begin(),a.end()
#define all_r(a)        a.rbegin(),a.rend()
#define vi              vector<int>
#define ef              else if
#define retv(x)         return void(cout << (x) << '\n')
#define sp              " "
#define SetPre(n, x)    cout << fixed << setprecision(n) << x << '\n'
#define Mod             1'000'000'007
#define INF             2'000'000'000
#define sz(s)           (int)(s).size()
#define debug(x)        cout << #x << ": " << (x) << "\n";
#define EPS             1e-9
#define PI              acos(-1)
 
// constexpr int dx[] = {0, 0, 1, -1};
// constexpr int dy[] = {1, -1, 0, 0};
// constexpr char di[] = {'R', 'L', 'D', 'U'};
//const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
//const int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
// const int N = 1e5+ 5;
 
long long fastPower(long long base, long long power, long long mod) {
    long long res = 1;
    while (power) {
        if (power & 1) {
            res = ((res % mod) * (base % mod)) % mod;
            power -= 1;
        } else {
            base = ((base % mod) * (base % mod)) % mod;
            power >>= 1;
        }
    }
    return res;
}
 
void Erz3(int testcase) {
    int base, power;
    cin >> base >> power;
    cout << fastPower(base, power, 1e9 + 7) << '\n';
}
 
signed main() {
    Wl3_ElNor
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;
    cin >> T;
    for (int testcase = 1; testcase <= T; ++testcase)
        Erz3(testcase);
 
    return 0;
}