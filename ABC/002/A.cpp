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
    long long int x, y, ans;
    cin >> x >> y;

    if (x > y) {
        ans = x;
    } else {
        ans = y;
    }

    cout << ans << endl;
    return 0;
}
