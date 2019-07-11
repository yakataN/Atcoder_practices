#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<assert.h>
#include<numeric>
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

int h, w;
void dfs(int x, int y, vector<string>& map, vector<vector<bool>>& memo) {
    if (map[x][y] == '#' || memo[x][y] == true || x < 0 || x >= h || y < 0 || y >= w) return;

    cout << "now_at: " << x << " " << y << endl;

    memo[x][y] = true;
    dfs(x+1, y, map, memo);
    dfs(x, y+1, map, memo);
    dfs(x-1, y, map, memo);
    dfs(x, y-1, map, memo);
}

// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    int sx;
    int sy;
    int gx;
    int gy;
    cin >> h >> w;
    vector<string> map;
    rep(i, h) {
        string str;
        cin >> str;
        map.push_back(str);
        if (map[i].find('s') != std::string::npos) {
            sx = i;
            sy = map[i].find('s');
        }
        if (map[i].find('g') != std::string::npos) {
            gx = i;
            gy = map[i].find('g');
        }
    }
    cout << "input" << endl;
    
    vector<vector<bool>> memo;
    dfs(sx, sy, map, memo);
    if (memo[gx][gy]) {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        /* code */
    }
    
}
