#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
typedef pair<int,int> P;

int main(){
    int n;
    cin >> n;
    vector<P> plot(n);
    rep(i,n)cin >> plot[i].first >> plot[i].second;

    int left_down;
    int right_up;
    int right_down;
    int left_up;

    int min_dist= 1e9*2;
    rep(i,n){
        int dist = abs(plot[i].first -1)+abs(plot[i].second-1);
        if(dist < min_dist){
          left_down = i;
          min_dist = dist;  
        } 
    }
    min_dist = 1e9*2;
    rep(i,n){
        int dist = abs(plot[i].first -1e9)+abs(plot[i].second-1e9);
        if(dist < min_dist) {
            right_up = i;
            min_dist = dist; 
        }
    }

    min_dist = 1e9*2;
    rep(i,n){
        int dist = abs(plot[i].first -1e9)+abs(plot[i].second-1);
        if(dist < min_dist) {
            right_down = i;
            min_dist = dist; 
        }
    }

    min_dist = 1e9*2;
    rep(i,n){
        int dist = abs(plot[i].first -1)+abs(plot[i].second-1e9);
        if(dist < min_dist){
            left_up = i;
            min_dist = dist; 
        }
    }

    int dist1 = abs(plot[left_down].first -plot[right_up].first)+abs(plot[left_down].second-plot[right_up].second);
    int dist2 = abs(plot[left_up].first -plot[right_down].first)+abs(plot[left_up].second-plot[right_down].second);
    int ans = max(dist1,dist2);
    cout << ans << endl;

    return 0;
}