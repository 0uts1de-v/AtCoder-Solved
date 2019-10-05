#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>


using namespace std;


int main() {
    int n, t, a, ans;
    cin >> n >> t >> a;
    int h[n];
    double temperature[n];
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        temperature[i] = t - h[i] * 0.006;
    }
    double dt[n], tmp = 1000;
    for (int j = 0; j < n; ++j) {
        dt[j] = abs(a - temperature[j]);
    }

    for (int k = 0; k < n; ++k) {
        if (dt[k] < tmp) {
            tmp = dt[k];
            ans = k + 1;
        }
    }


    cout << ans;
    return 0;
}
