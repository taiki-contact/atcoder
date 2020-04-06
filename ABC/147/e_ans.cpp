#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define rep(i, n) for(ll i = 0; i < n; i++)
#define exrep(i, a, b) for(ll i = a; i <= b; i++)
#define out(x) cout << x << endl
#define exout(x) printf("%.10f\n", x)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define pb push_back
#define re0 return 0
const ll mod = 1000000007;
const ll INF = 1e16;

const ll N = 81;

bool dp[N][N][2*N*N];

int main() {
    ll h, w;
    cin >> h >> w;

    vvl a(h, vl(w)), b(h, vl(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }
    rep(i, h) {
        rep(j, w) {
            cin >> b[i][j];
        }
    }
    
    dp[0][0][abs(a[0][0] - b[0][0])] = true;
    rep(i, h) {
        rep(j, w) {
            rep(k, 2*N*N) {
                if(!dp[i][j][k]) {
                    continue;
                }
                if(i < h-1) {
                    ll x = abs(a[i+1][j] - b[i+1][j]);
                    dp[i+1][j][abs(k + x)] = true;
                    dp[i+1][j][abs(k - x)] = true;
                }
                if(j < w-1) {
                    ll x = abs(a[i][j+1] - b[i][j+1]);
                    dp[i][j+1][abs(k + x)] = true;
                    dp[i][j+1][abs(k - x)] = true;
                }
            }
        }
    }


    for(int val = 0; val < 2*N*N; val++){
        if(dp[h-1][w-1][val]){
            cout << val << endl;
            break;
        }
    }


    //out(ans);
    re0;
}
