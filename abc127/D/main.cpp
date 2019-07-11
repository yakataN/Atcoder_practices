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


// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    int n,m;
    cin >> n >> m;
    priority_queue<pair<ll, ll> > que;
    rep(i, n) {
        ll a;
        cin >> a;
        que.emplace(a, 1);
    }
    rep(i, m) {
        ll b, c;
        cin >> b >> c;
        que.emplace(c, b);
    }
    ll ans = 0;
    ll count = n;
    while(count) {
        auto p = que.top(); que.pop();
        ans += p.first * min(p.second, count);
        count -= min(p.second, count);
    }
    cout << ans << endl;
}