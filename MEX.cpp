#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mark[1000005];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int x : a) mark[x] = 1;
    for(int i = 1; i <= 1000001; i++){
        if(mark[i] == 0){
            cout << i << endl; return 0;
        }
    }
}
