#include <bits/stdc++.h>

using namespace std;
int main(){
    int h1, h2, m1,m2, t1, t3, t2, h3, m3;
    string s1, s2;
    cin >> s1 >> s2;
    h1=(s1[0]-'0')*10+(s1[1]-'0');
    m1=(s1[3]-'0')*10+(s1[4]-'0');
    h2=(s2[0]-'0')*10+(s2[1]-'0');
    m2=(s2[3]-'0')*10+(s2[4]-'0');

    t1 = (60-m1)+((h2-h1+1)*60)+m2;
    t1 = t1/2;
    t2 = t1/60;
    t3 = t1%60;
    //int f = (m1+t2)/60;
    m3 = (m1+t3)%60;
    h3 = h1+t2+((m1+t3)/60);
    //cout << t << " " << t1 << " " << t2 << endl;
    //cout << setprecision(2) << h1+t1 << ":" << setprecision(2) << m1+t2;
    printf("%02d:%02d",h3-1, m3);
    return 0;
}
