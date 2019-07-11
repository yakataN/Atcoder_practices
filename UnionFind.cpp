#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct UnionFind {
    // 各点は親を保存する
    vector<int> par;

    // parをn個の-1で初期化
    // これはその島が持っている頂点数を表す
    UnionFind(int n): par(n, -1) { }
    void init(int n) { par.assign(n, -1); }

    int root(int x) {
        if (par[x] < 0) {
            return x;
        }
        return par[x] = root(par[x]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool merge(int x, int y) {
        if (root(x) == root(y)) return false;
        if (par[x] > par[y]) swap(x,y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x) {
        return -par[root(x)];
    }
};


int main() {
    int N,M;
    UnionFind uf(N);
    cin >> N >> M;
    vector<int> x,y,z;
    for (int i=0; i<M; i++) {
        cin >> x[i] >> y[i] >> z[i];
        --x[i], --y[i];
    }
    for (int i=0; i<M;i++) uf.merge(x[i], y[i]);
    // uniqueな要素を格納する
    set<int> se;
    for (int i=0; i<N; i++) se.insert(uf.root(i));
    int ans = (int)se.size();
    cout << ans << endl;

}