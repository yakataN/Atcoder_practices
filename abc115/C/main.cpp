// 17min

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
    
    ll n,k;
    cin >> n >> k;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];

    sort(h.begin(), h.end());
    // vector<ll> ruisekiwa;
    // ruisekiwa.push_back(0);

    // rep(i,n) ruisekiwa.push_back(ruisekiwa[i] + h[i]);

    // rep(i,n+1) {
    //     cout << ruisekiwa[i] << endl;
    // }
    ll ans = INF;
    for (int i = 0; i+k-1<n ; i++) {
        // ll tmp = ruisekiwa[i+k] - ruisekiwa[i];
        ll tmp = h[i+k-1] - h[i];
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}
