#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    ll sum = a[0], ans = sum;
    for(int i = 1; i<n; ++i){
        sum = max(sum + a[i], a[i]);
        ans = max(ans, sum);
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