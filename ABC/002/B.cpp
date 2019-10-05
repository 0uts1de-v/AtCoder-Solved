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
    string w;
    cin >> w;

    for (int i = 0; i < w.size(); ++i) {
        while (w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o') {
            w.erase(i, 1);
        }
    }

    cout << w << endl;
    return 0;
}
