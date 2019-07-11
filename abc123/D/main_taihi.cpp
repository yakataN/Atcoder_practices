#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

using Abc_condition = vector<int>;

void solve(long long X, long long Y, long long Z, long long K, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){
    sort(A.begin(), A.end(), std::greater<int>() );
    sort(B.begin(), B.end(), std::greater<int>() );
    sort(C.begin(), C.end(), std::greater<int>() );
    vector< vector<int> >  v;
    v[0][0] = 0;
    v[0][1] = 0;
    v[0][2] = 0;
    v[1][0] = 0;
    v[1][1] = 0;
    v[1][2] = 0;
    v[2][0] = 0;
    v[2][1] = 0;
    v[2][2] = 0;

    vector<int> res;
    for (int i=0; i<K;i++) {
        int max_num;
        int l,m,n;;
        l = A[v[0][0]] * B[v[0][1]] * C[v[0][2]];
        l = A[v[1][0]] * B[v[1][1]] * C[v[1][2]];
        l = A[v[2][0]] * B[v[2][1]] * C[v[2][2]];
        if (l >= m) {
            if (l>=n) {
                max_num = l;
                
                v[0][0] += 1;
            }
            else
            {
                max_num = n;
            }
            
        }
        else if (m >= n)
        {
            max_num = m;
        }
        else
        {
            max_num = n;
        }

    }
}

// Generated by 1.1.4 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    long long Z;
    scanf("%lld",&Z);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(X);
    for(int i = 0 ; i < X ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(Y);
    for(int i = 0 ; i < Y ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(Z);
    for(int i = 0 ; i < Z ; i++){
        scanf("%lld",&C[i]);
    }
    solve(X, Y, Z, K, std::move(A), std::move(B), std::move(C));
    return 0;
}