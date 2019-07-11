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
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; ++i )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;

ll dp[100010][3];
int main(){
    int n;
    cin >> n;
    ll ary[n][3];
    rep(i,n) rep(j,3) cin >> ary[i][j];

    rep(i, n) {
        dp[i+1][0] = max(dp[i][1], dp[i][2]) + ary[i][0];
        dp[i+1][1] = max(dp[i][0], dp[i][2]) + ary[i][1];
        dp[i+1][2] = max(dp[i][1], dp[i][0]) + ary[i][2];
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
}
