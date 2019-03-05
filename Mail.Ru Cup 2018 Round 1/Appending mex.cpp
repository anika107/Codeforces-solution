#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, x;
    vector <ll> v;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> x;
        v.push_back(x);
    }
    ll c = 1;
    if(v[0] != 0){
        cout << 1;
        return 0;
    }
    ll m = v[0];
    for(int i = 1; i < v.size(); i ++){
       if(v[i] <= m+1){
         m = max(m, v[i]);
         continue;
       }
       else{
          cout << i+1;
          return 0;
       }


    }
    cout << -1;
    return 0;
}
