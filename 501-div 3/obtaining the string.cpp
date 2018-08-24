#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    int n, d = 9;
    cin >> n;
    string s, t, s1, t1;
    cin >> s >> t;
    if(s == t){
        cout << 0;
        return 0;
    }
    s1 = s;
    t1 = t;
    sort(s1.begin(), s1.end());
    sort(t1.begin(), t1.end());
    vector <int> v;
    if(s1 == t1){
        for(int i = 0; i < n; i ++){
           if(s[i] != t[i]){
              for(int j = i + 1; j < n; j ++){
                 if(s[j] == t[i]){
                    swap(s[j-1], s[j]);
                    v.push_back(j);
                    break;
                 }
              }
              i --;
           }
       }
       cout << v.size() << endl;
       for(int i = 0; i < v.size(); i ++){
           cout << v[i] << " ";
       }
    }
    else{
        cout << -1;
    }
    return 0;
}
