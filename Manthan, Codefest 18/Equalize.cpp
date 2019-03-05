#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll l, c = 0;
    cin >> l;
    string a, b;
    cin >> a >> b;
    for(int i = 0;i < l; i ++){
        if(a[i] != b[i] && a[i] != a[i+1] && a[i+1] != b[i+1] && i <= l-2){
            i ++;
        }
        if(a[i] != b[i])
            c ++;
    }
    cout << c;
    return 0;
}
