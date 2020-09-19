#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    else{
        ll ten_n =1;
        ll nine_n=1;
        ll eight_n=1;

        rep(i,n)ten_n = (ten_n*10)%mod;
        rep(i,n)nine_n = (nine_n*9)%mod;
        rep(i,n)eight_n = (eight_n*8)%mod;

        ll ans = ten_n - ((2*nine_n)%mod) + eight_n;

        if(ans <0)cout << ans + mod << endl;
        else cout << ans <<endl;
    
        return 0;
    }
}