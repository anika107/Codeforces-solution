#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, k, c = 0;
    cin >> n >> k;
    ll f, s, t;
    f = 2*n;
    s = 5*n;
    t = 8*n;
   // cout << f/k << " " << floor(f/k);
    if(((double)f/(double)k) > floor((double)f/(double)k)){
       c += (f/k)+1;
    }
    else{
       //cout << 5;
       c += (f/k);
    }

    if(((double)s/(double)k) > floor((double)s/(double)k)){
       c += (s/k)+1;
    }
    else{
       c += (s/k);
    }

    if(((double)t/(double)k) > floor((double)t/(double)k)){
       c += (t/k)+1;
    }
    else{
       c += (t/k);
    }
    cout << c;
    return 0;
}
