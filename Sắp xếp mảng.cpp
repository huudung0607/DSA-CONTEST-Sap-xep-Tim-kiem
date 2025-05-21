#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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
    int left = -1, right = -1;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            left = i; break;
        }
    }
    for(int i = n - 1; i > 0; i--){
        if(a[i] < a[i - 1]){
            right = i; break;
        }
    }
    if(left == -1){
        cout << "28tech\n"; return 0;
    }
    reverse(a + left, a + right + 1); // lat doan [l, r]
    if(is_sorted(a, a + n)){ // kiem tra mang tang dan
        cout << "28tech\n";
    }
    else{
        cout << "29tech\n";
    }
}
