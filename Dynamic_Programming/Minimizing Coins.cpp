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
const int N = 1e6 + 5;

int dp[N];
int n, x;
vector<int> coins;


int ways(int sum) {
    if (sum > x) return INF + 2;
    if (sum == x) return 0;
    if (~dp[sum]) return dp[sum];
    dp[sum] = INF;
    for (int i = 0; i < n; ++i) {
        dp[sum] = min(dp[sum], ways(sum + coins[i]) + 1);
    }
    return dp[sum];
}


void Erz3(int testcase) {
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        coins.push_back(k);
    }
    memset(dp, -1, sizeof(dp));
    int ans = ways(0);
    cout << (ans != INF ? ans : -1) << '\n';
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
