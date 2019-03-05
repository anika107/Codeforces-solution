#include <bits/stdc++.h>

using namespace std;

bool check_palinedrome(string s){
    for(int i = 0, j = s.size()-1; s[i] != '\0'; i ++, j --){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    string s, k;
    while(t --){
        cin >> s;
        if(check_palinedrome(s) == false){
            cout << s << endl;
            continue;
        }
        k = s;
        sort(s.begin(), s.end());
        if(s == k){
            cout << -1 << endl;

        }
        else{
           cout << s << endl;
        }
    }
    return 0;
}
