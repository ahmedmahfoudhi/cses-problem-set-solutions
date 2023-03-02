#include<bits/stdc++.h>
using namespace std;

bool intersect(pair<int,int> a, pair<int,int> b){
    return !(b.first >= a.second || b.second <= a.first);
}

void solve(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i<n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, [](pair<int, int> f, pair<int, int> s)
         { return f.second < s.second; });
    int l = 0, r = 0, ans = 0;
    for (int i = 0; i < n; ){
        int j = i + 1;
        ans++;
        while(j < n && intersect(a[i],a[j])){
            j++;
        }
        i = j;
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