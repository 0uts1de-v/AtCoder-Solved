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
    double ans;
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double a, b, c, s;
    a = sqrt(pow(abs(xb - xc), 2) + (pow(abs(yb - yc), 2)));
    b = sqrt(pow(abs(xc - xa), 2) + (pow(abs(yc - ya), 2)));
    c = sqrt(pow(abs(xa - xb), 2) + (pow(abs(ya - yb), 2)));
    s = (a + b + c) / 2;

    ans = sqrt(s * (s - a) * (s - b) * (s - c));

    cout <<fixed << setprecision(3)<< ans << endl;
    return 0;
}
