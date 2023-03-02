#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    multiset<int> ms;
    while(k){
        ms.insert((ll)0);
        k--;
    }
    pair<ll, ll> movies[n];
    for(int i = 0; i<n; ++i){
        cin >> movies[i].first >> movies[i].second;
    }
    sort(movies, movies + n, [](pair<ll, ll> a, pair<ll, ll> b)
         {
            if(a.second != b.second)
                return a.second < b.second;
            return a.first > b.first;
         });
    int ans = 0;
    for (int i = 0; i < n; ++i){
        auto ptr = ms.lower_bound(-movies[i].first);
        if(ptr != ms.end()){
            ms.erase(ptr);
            ans++;
            ms.insert(-movies[i].second);
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    int tests = 1;
    // cin >> tests;
    while(tests--){
        solve();
    }
}