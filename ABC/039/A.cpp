#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>


using namespace std;


int main() {
    int a, b, c, ans;

    cin >> a >> b >> c;

    ans = a * b * 2 + b * c * 2 + c * a * 2;

    cout << ans;
    return 0;
}
