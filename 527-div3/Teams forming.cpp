#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, s = 0, a[2000];
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n-1; i += 2){
        s = s + (a[i+1] - a[i]);
    }
    cout << s;
    return 0;
}
