#include <bits/stdc++.h>

using namespace std;
int main(){
    int  n, s, c = 0, t = 1;
    vector <int> ar;
    scanf("%d",&n);
    for(int i = 0; i < n; i ++){
        cin >> s;
        ar.push_back(s);

    }
    sort(ar.begin(),ar.end());
    for(int i = 0; i < n; i ++){
        t = ar[i]+5;
        c = max(c,upper_bound(ar.begin(), ar.end(), t)-ar.begin()-i);
    }
    cout << c;
    return 0;
}

