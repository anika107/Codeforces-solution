#include <bits/stdc++.h>

using namespace std;

vector <int> adj[200005];
vector <int> ans;
int a[200005];
int b[200005];
int visited[200005];
bool cmp(int x, int y){
    return b[x] < b[y];
}

void bfs(){
    queue <int> q;
    q.push(1);
    memset(visited, 0, sizeof(visited));
    while(!q.empty()){
        //queue <int> temp;
        //while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            visited[x] = 1;
            for(int i= 0 ; i < adj[x].size(); i ++){
                if(visited[adj[x][i]] == 0){
                    visited[adj[x][i]] = 1;
                    q.push(adj[x][i]);
                }
            }
        // = temp;
    }
}
int main(){
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n-1; i ++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        b[a[i]] = i;

    }
    for(int i = 1; i <= n; i ++){
        sort(adj[i].begin(), adj[i].end(), cmp);
    }
    bfs();
    for(int i = 0; i < n; i ++){
        if(a[i] != ans[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
