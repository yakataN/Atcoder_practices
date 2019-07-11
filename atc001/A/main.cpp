#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

int h, w;
vector<string> maze(501);
bool visited[501][501], flag;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void dfs(int x,int y) {
    if (x<0 || x>=h || y<0 || y>=w || maze[x][y] == '#' || visited[x][y]) return;
    // ここを逆にすると、maze[-1][0]などになりREを起こす
    if (maze[x][y] == 'g') flag = true;

    visited[x][y] = true;
    rep(i,4) dfs(x+dx[i], y+dy[i]);
}

int main() {
    cin>>h>>w;
    rep(i, h) cin>>maze[i];
    rep(i,h) rep(j,w) if (maze[i][j] == 's') dfs(i,j);
    // puts(flag?"Yes":"No");
    if (flag) {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
}

