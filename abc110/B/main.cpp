#include <bits/stdc++.h>
#include <algorithm>
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

int n,m;
int x[110];
int y[110];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> n >> m >> x[0] >> y[0];
    rep(i,n) cin >> x[i+1];
    rep(j,m) cin >> y[j+1];

    sort(x, x+n);
    sort(y, y+n);

    if (x[n-1] < y[0]) {
        cout << "No War" << endl;
    }
    else
    {
        cout << "War" << endl;
    }
    

























}
