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



void solve(long long N, long long M, std::vector<long long> l, std::vector<long long> r, std::vector<long long> a){

}

// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> l(M);
    std::vector<long long> r(M);
    std::vector<long long> a(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
        scanf("%lld",&a[i]);
    }
    solve(N, M, std::move(l), std::move(r), std::move(a));
    // return 0;
}
