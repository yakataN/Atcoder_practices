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
    
    int n;
    cin >> n;
    ll ary[n];
    rep(i,n) cin >> ary[i];

    ll sum = 0;
    rep(i,n) sum += ary[i];
    sum /= 2;
    ll sum02 = 0;
    for (int i=1; i<n; i+=2) {
        sum02 += ary[i];
    }

    ll first_mountain = sum - sum02;
    vector<ll> ans;
    ans.push_back(first_mountain*2);

    rep(i, n-1) {
        first_mountain = ary[i] - first_mountain;
        ans.push_back(first_mountain*2);
    }
    rep(i,n-1) {
        cout << ans[i] << " ";
    }
    cout << ans[n-1] << endl;
}
