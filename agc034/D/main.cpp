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


// // // 
// // void solve(long long N, std::vector<long long> RX, std::vector<long long> RY, std::vector<long long> RC, std::vector<long long> BX, std::vector<long long> BY, std::vector<long long> BC){

// }
// 
// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    //     // long long N;
    scanf("%lld",&N);
    std::vector<long long> RX(N);
    std::vector<long long> RY(N);
    std::vector<long long> RC(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&RX[i]);
        scanf("%lld",&RY[i]);
        scanf("%lld",&RC[i]);
    }
    std::vector<long long> BX(N);
    std::vector<long long> BY(N);
    std::vector<long long> BC(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&BX[i]);
        scanf("%lld",&BY[i]);
        scanf("%lld",&BC[i]);
    }
    // solve(N, std::move(RX), std::move(RY), std::move(RC), std::move(BX), std::move(BY), std::move(BC));
    //     // return 0;
}
