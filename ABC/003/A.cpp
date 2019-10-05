#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
#include <ios>
#include <iomanip>


using namespace std;


int main() {
    double n, ans;
    cin >> n;

    ans = ((((1 + n) * n) / 2.0) / n) * 10000;

    cout << fixed << ans << endl;
    return 0;
}
