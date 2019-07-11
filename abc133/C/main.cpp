#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
// const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define rREP(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " ";} cout<<endl;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l, r;
    cin >> l >> r;

    if (r-l+1 >= 2019) {
        cout << 0 << endl;
    }
    else {
        int mod = 2019;
        int min_num = 1e7;
        REP(i, l, r+1) {
            REP(j, i+1, r+1) {
                int tmpint = (i % mod) * (j % mod);
                min_num = min(min_num, tmpint % mod);
            }
        }
        cout << min_num << endl;
    }
    
}
