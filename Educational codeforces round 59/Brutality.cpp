#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, k, t = 0;
    vector <ll> v;
    cin >> n >> k;
    v.resize(n);
    for(ll &i : v){
        cin >> i;
    }
    string s;
    cin >> s;
    for(ll i = 0, j = 0; i < n; i = j){
        while(j != n && s[i] == s[j]){
            j ++;
        }
        sort(v.begin()+i, v.begin()+j);
        reverse(v.begin()+i, v.begin()+j);
        ll mn = min(i+k,j);
        for(ll h = i; h < mn; h ++){
            t += v[h];
        }
    }
    cout << t;

    return 0;
}
