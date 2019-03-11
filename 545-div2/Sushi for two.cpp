#include <bits/stdc++.h>

using namespace std;

int a[100005];
vector <int> v;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int c = 1, mx = 0;
    for(int i = 0; i < n-1; i ++){
        if(a[i] == a[i+1]){
            c ++;
        }
        else{
            v.push_back(c);
            c = 1;
        }
    }
    v.push_back(c);
    for(int i = 0; i < v.size()-1; i ++){
        //cout << mx << " " << min(v[i],v[i+1]) << endl;
        mx = max(mx, min(v[i],v[i+1]));

    }
    cout << mx*2;
    return 0;
}
