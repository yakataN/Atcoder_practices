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
    ll n;
    cin >> n;
    long long k;
    cin >> k;
    vector<long long> v;
    for(int i = 0 ; i < n ; i++){
        ll num;
        cin >> num;
        v.emplace(num);
    }
    vector<vector<ll>> ans_list;
    rep(i, min(k,n)) {
        // 個数
        vector<ll> tmp_ans;
        rep(j, i) {
            tmp_ans.emplace(v[j]);
            tmp_ans.emplace(v[i-j]);
        }
        
    }
}
