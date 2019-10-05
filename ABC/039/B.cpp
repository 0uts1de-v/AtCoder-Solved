#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>


using namespace std;


int main() {
    int x, n;
    cin >> x;

    n = int(sqrt(x));
    n = int(sqrt(n));

    cout << n;
    return 0;
}
