#include <iostream>

using namespace std;

int main(){
    int n, a, b, max, min;
    cin >> n >> a >> b;
    if (a < b){
        max = a;
    }
    else{
        max = b;
    }
    if (a + b < n){
        min = 0;
    }
    else{
        min = a + b - n;
    }
    
    cout << max << " "<< min;
    return 0;
}
