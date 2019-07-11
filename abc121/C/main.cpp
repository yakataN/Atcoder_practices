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
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " ";} 


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll n,m;
    cin >> n >> m;

    // lpair pairs[n];
    vector<pair<ll, ll> > pairs(n);
    rep(i,n) {
        ll a,b;
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
    }

    sort(pairs.begin(), pairs.end());
    ll cnt = m;
    ll money = 0;
    rep(i,n) {
        // cout << i << " " << pairs[i].first << " " << pairs[i].second << endl;
        if (cnt >= pairs[i].second) {
            cnt -= pairs[i].second;
            money += pairs[i].first * pairs[i].second;
        }
        else
        {
            money += pairs[i].first * cnt;
            cnt = 0;
            break;
        }
    }
    cout << money << endl;

}