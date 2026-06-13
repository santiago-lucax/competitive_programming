#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int l, r, d, u; cin >> l >> r >> d >> u;
    cout << (l == r ? (r == d ? (d == u ? "Yes\n" : "No\n") : "No\n") : "No\n");
}

int main() {
    fastio;
    int t; cin >> t;
    while (t--) solve();

    return 0;
}
