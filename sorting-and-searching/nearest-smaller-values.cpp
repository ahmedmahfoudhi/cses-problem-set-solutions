#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n; ++i){
        cin >> a[i];
    }
    int ans[n + 1] = {};
    ans[0] = -1;
    for (int i = 1; i < n; ++i){
        if(a[i] > a[i-1]){
            ans[i] = i-1;
        }else{
            int j = i-1;
            while(ans[j] != -1 && a[ans[j]] >= a[i]){
                j = ans[j];
            }
            ans[i] = ans[j];
        }
    }
    for (int i = 0; i < n; ++i){
        cout << ans[i] + 1 << ' ';
    }
    cout << '\n';
}

int main(){
    solve();
}