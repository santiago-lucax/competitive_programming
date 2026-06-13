#include <stdio.h>

void solve() {
    int n; scanf("%d", &n);
    int ans = 400 % n;
    if (ans == 0) printf("%d\n", 400 / n);
    else printf("-1\n");
}

int main() {
    int t = 1; // (void)scanf("%d", &t);
    while (t--) solve();
    return 0;
}
