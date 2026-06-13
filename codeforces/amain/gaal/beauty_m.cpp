#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int m; cin >> m;
            if (m == 1) {
                x = j;
                y = i;
            }
        }
    }

    int steps = (max(x, 3) - min(x, 3)) + (max(y, 3) - min(y, 3));
    cout << steps << "\n";
}

int main() {
    fastio;
    int t = 1;
    while (t--) solve();
    return 0;
}
