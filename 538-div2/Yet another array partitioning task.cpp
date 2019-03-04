#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, m, k, x;
    cin >> n >> m >> k;
    vector <pair <ll, ll>> v;
    for(int i = 0; i < n; i ++){
       cin >> x;
       v.push_back({x,i});
    }
    sort(v.begin(), v.end(), greater <pair<ll, ll>>());
    /*for(int i = 0; i < n ; i ++){
        cout << v[i].first << " " << v[i].second << endl;
    }*/
    ll s = 0;
    vector <ll> in;
    for(int i = 0; i < m*k; i ++){
        s += v[i].first;
        in.push_back(v[i].second);
    }
    cout << s << endl;
    sort(in.begin(),in.end());
    for(int i = 1; i < k; i ++){
        cout << in[(i*m)-1]+1 << " ";
    }
    return 0;
}
