#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int p, q, x, y; cin >> p >> q >> x >> y;
    int in_p = x >= p ? (x <= (p + 100) ? 1 : 0) : 0;
    int in_q = y >= q ? (y <= (q + 100) ? 1 : 0) : 0;
    cout << (in_p && in_q ? "Yes\n" : "No\n");
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
    return 0;
}
