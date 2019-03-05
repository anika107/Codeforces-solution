#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    vector <ll> v;
    ll n, x, s, c = 0;
    cin >> n >> s;
    while(n --){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll d = v.size()/2;
    if(n == 1){
        cout << abs(s-v[0]);
        return 0;
    }
    if(v[d] < s){
        for(int i = d; v[i] < s; i ++){
            c += s - v[i];
        }
    }
    else{
        for(int i = d; v[i] > s; i --){
            c += v[i] - s;
        }
    }
    cout << c;
    return 0;
}
