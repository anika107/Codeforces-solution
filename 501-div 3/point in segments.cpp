#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector <int> s1;
    vector <int> s2;
    vector <int> s;
    while(n --){
        int x, y;
        cin >> x >> y;
        s1.push_back(x);
        s2.push_back(y);

    }
    int flag =0;
    for(int i = 1; i <= m; i ++){
        for(int j = 0; j < s1.size(); j ++){
            if(i >= s1[j] && i <= s2[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            s.push_back(i);
        }
        flag = 0;
    }
    if(s.empty()){
        cout << 0;
    }
    else{
        cout << s.size() << endl;
        for(int i = 0 ;i < s.size(); i ++){
            cout << s[i] << " ";
        }
    }
    return 0;
}
