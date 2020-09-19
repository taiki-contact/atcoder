#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll ans;
    ans = max(b*d,a*c);
    ans = max(ans,a*d);
    ans = max(ans,b*c); 
    
    // vector<ll> input(4);
    // rep(i,4) cin >> input[i];
    // ll ans;
    // rep(i,3){
    //     for(int j = i+1; j<4; j++){
    //        ans = max(input[i]*input[j],ans); 
    //     }
    // }
    cout << ans << endl;

    return 0;
}