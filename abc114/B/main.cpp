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
    string s;
    cin >> s;
    int min_num = 10000;
    for (int i=0;i+2 < s.length(); i++ ) {
        int tmp_num = (s[i]-'0') * 100 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
        min_num = min(min_num, abs(753 - tmp_num));
        // cout << "tmp_num: " << tmp_num << " min_num: " << min_num << endl;
    }
    cout << min_num << endl; 
}
