//      ﷽

//       وَأَنْ لَيْسَ لِلْإِنْسَانِ إِلَّا مَا سَعَى

//       فَالجُهدُ يُثمِرُ إنْ تَضافَرَ صَفوُهُ، والعَزمُ يَرفعُ صَرحَ كُلِّ بُنيانِ.

//#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define Wl3_ElNor       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define int             long long
#define all(a)          a.begin(),a.end()
#define all_r(a)        a.rbegin(),a.rend()
#define ef              else if
#define retv(x)         return void(cout << (x) << '\n')
#define sp              " "
#define SetPre(n, x)    cout << fixed << setprecision(n) << x << '\n'
#define Mod             1'000'000'007
#define INF             2'000'000'000
#define sz(s)           (int)(s).size()

// constexpr int dx[] = {0, 0, 1, -1};
// constexpr int dy[] = {1, -1, 0, 0};
// constexpr char di[] = {'R', 'L', 'D', 'U'};
// const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
// const int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
// const int N = 1e6 + 5;

int n, tot;
const int maxSum = 125250 / 2 + 5;
int dp[502][maxSum];

int rec(int idx, int sum) {
    if (idx > n) return !sum;
    auto &ret = dp[idx][sum];
    if (~ret) return ret;
    ret = rec(idx + 1, sum);
    if (sum - idx >= 0) ret = (ret + rec(idx + 1, sum - idx)) % Mod;
    return ret;
}


void Erz3(int testcase) {
    cin >> n;
    tot = n * (n + 1) / 2;
    if (tot & 1) retv(0);
    memset(dp, -1, sizeof dp);
    int inv = (Mod + 1) / 2;
    cout << 1LL * rec(1, tot / 2) * inv % Mod << '\n';
}

signed main() {
    Wl3_ElNor
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;
    // cin >> T;
    for (int testcase = 1; testcase <= T; ++testcase)
        Erz3(testcase);

    return 0;
}
