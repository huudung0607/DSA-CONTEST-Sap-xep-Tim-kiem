#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n; cin >> n;
    int a[n + 5], b[n + 5];
    map<int, int> pos;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
        pos[a[i]] = i; // luu lai vi tri
    }
    sort(b + 1, b + n + 1);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]){
            ++cnt;
            //tim vi tri can swap voi a[i]
            int old_value = a[i];
            int j = pos[b[i]];
            //dua a[j] ve dung vi tri 
            swap(a[i], a[j]);
            //cap nhat lai vi tri cua a[i] va a[j]
            pos[old_value] = j;
            pos[a[i]] = i;
        }
    }
    cout << cnt << endl;
}

