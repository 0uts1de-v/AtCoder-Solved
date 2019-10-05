#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; ++i){
        cin >> l[i];
    }
    sort(l.begin(), l.end(), greater<int>());
    int max = l[0];
    int others = 0;
    for (int i=1; i<n; ++i){
        others += l[i];
    }
    if (max < others){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
