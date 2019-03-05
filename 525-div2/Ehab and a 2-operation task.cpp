#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector <int> v, s;
    v.push_back(0);
    for(int i = 0 ;i  < n; i ++){
        cin >> x;
        v.push_back(x+100000);
    }
    cout << n+1 << endl;
    cout << "1 " << n << " 100000" << endl;
    for(int i = 1; i <= n; i ++){
        cout << "2 " << i << " " << v[i]-i+1 << endl;
    }
    return 0;
}
