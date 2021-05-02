#include <bits/stdc++.h>

using namespace std;

int main() {
    double r, x, y;
    cin >> r >> x >> y;

    double dis = sqrt(x*x + y*y);
    int ans = ceil(dis / r);
    if (dis < r) ans = 2;
    cout << ans << endl;
}