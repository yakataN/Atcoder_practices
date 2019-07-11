#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> lpair;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define rREP(i,m,n) for(ll i = (m); i >= (n); i--)
#define print(x) cout << (x) << endl;
#define printa(x,n) for(ll i = 0; i < n; i++){ cout << (x[i]) << " ";};

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    int w = n-k;
    int i = 1;
    COMinit();

    while (true) {
        if (i > k || i-1 > w) break;
        ll ans = (COM(i, k-i) * COM(i+1, w-(i-1)))%MOD;

        // 計算例
        cout << ans << endl;

        i++;
    }
}
