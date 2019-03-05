#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    for(int i = 0; i < t; i ++){
        cin >> s;
        int u = 0, d = 0, l = 0;
        for(int i = 0; i < s.size(); i ++){
            if(isupper(s[i])) u ++;
            if(islower(s[i])) l ++;
            if(isdigit(s[i])) d ++;
        }
        if(u == 0 && l == 0 && d == 0){
            cout << s << endl;
            continue;
        }
        else if(u == 0 && l == 0){
            s[0] = 'a';
            s[1] = 'A';
        }
        else if(d == 0 && l == 0){
            s[0] = '1';
            s[1] = 'a';
        }
        else if(u == 0 && d == 0){
            s[0] = '1';
            s[1] = 'A';
        }
        else{
            if(u == 0 && l >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(islower(s[i])){
                        s[i] = 'A';
                        break;
                    }
                }
            }
            else if(u == 0 && d >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(isdigit(s[i])){
                        s[i] = 'A';
                        break;
                    }
                }
            }
            else if(d == 0 && l >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(islower(s[i])){
                        s[i] = '1';
                        break;
                    }
                }
            }
             else if(d == 0 && u >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(isupper(s[i])){
                        s[i] = '1';
                        break;
                    }
                }
            }
            else if(l == 0 && u >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(isupper(s[i])){
                        s[i] = 'a';
                        break;
                    }
                }
            }
            else if(l == 0 && d >= 2){
                for(int i =0; i < s.size(); i ++){
                    if(isdigit(s[i])){
                        s[i] = 'a';
                        break;
                    }
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
