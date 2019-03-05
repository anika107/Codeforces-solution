#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k,x, mn = 0;
    cin >> n >> k;
    vector <int> v;
    vector <int> ::iterator it;
    for(int i = 0; i < n; i ++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    it = unique(v.begin(), v.begin()+n);
    v.resize(distance(v.begin(), it));
    k --;
    cout << v[0] << endl;
    for(int i = 1; i < v.size(); i ++){
        if(k == 0){
            break;
        }
        cout << v[i]-v[i-1] << endl;
        k --;
    }
    while(k != 0){
        cout << 0 << endl;
        k --;
    }
    return 0;
}
