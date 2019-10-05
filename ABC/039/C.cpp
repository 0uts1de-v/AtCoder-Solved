#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>


using namespace std;


int main() {
    string s, ans;
    cin >> s;

    int mi = s.find("WWBWBWBWW");

    switch (mi % 12) {
        case 0:
            ans = "Mi";
            break;
        case 2:
            ans = "Re";
            break;
        case 4:
            ans = "Do";
            break;
        case 5:
            ans = "Si";
            break;
        case 7:
            ans = "La";
            break;
        case 9:
            ans = "So";
            break;
        case 11:
            ans = "Fa";
            break;
        default:
            break;
    }

    cout << ans;
    return 0;
}
