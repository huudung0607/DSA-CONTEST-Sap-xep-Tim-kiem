#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y){
        return x.second < y.second;
    });
    int cnt = 1;
    int end_R = v[0].second;
    for(int i = 1; i < n; i++){
        if(end_R <= v[i].first){
            ++cnt;
            //cap nhat end_R
            end_R = v[i].second;
        }
    }
    cout << n - cnt << endl;
}
