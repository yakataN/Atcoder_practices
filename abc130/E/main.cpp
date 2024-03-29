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


const long long MOD = 1000000007;

ll dp[2010][2010];

void solve(long long N, long long M, std::vector<long long> S, std::vector<long long> T){
    rep(i,2010) {
        dp[0][i] = 1;
    }
    REP(i,1,N+1) {
        REP(j,1, M+1) {
            if (S[i] == T[j]) {
                dp[i][j] = dp[i-1][j-1]+1;
            }
        }
    }

    ll count = 0;
    REP(i,1,N) {
        REP(j,1,N) {
            count += dp[i-1][j-1];
        }
    }
    cout << count << endl;
}

// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
    }
    std::vector<long long> T(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&T[i]);
    }
    solve(N, M, std::move(S), std::move(T));
    // return 0;
}
