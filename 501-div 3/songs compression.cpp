#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, m, x, y, s1 = 0, s2 = 0;
    vector <int> v;
    scanf("%lld %lld", &n, &m);
    while(n --){
        scanf("%lld %lld", &x, &y);
        s1 += x;
        s2 += y;
        v.push_back(x-y);
    }
    sort(v.begin(), v.end());
    ll h = s1-m;
    if(s2  > m){
        puts("-1");
        return 0;
    }
    ll c = 0;
    for(int i = v.size()-1; i >= 0; i --){
        if(s1 <= m){
            printf("%lld", c);
            return 0;
        }
        s1 -= v[i];
        c ++;
    }
    printf("%d", v.size());
    return 0;
}
