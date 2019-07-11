#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define rREP(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " ";} cout<<endl;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, d;
    cin >> n >> d;
    int points[n][d];

    rep(i, n) rep(j, d) cin >> points[i][j];

    int cnt = 0;
    rep(i,n) {
        for (int j=i+1; j<n; j++) {
            float sum = 0;
            rep(k, d) {
                sum += pow((float)(points[i][k] - points[j][k]), 2.0);
            }
            sum = sqrt(sum);
            if (sum == (float)(int) sum) {
                cnt ++;
            }
        }
    }
    cout << cnt << endl;
}
