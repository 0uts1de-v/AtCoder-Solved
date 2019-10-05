#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <cfloat>

using namespace std;

//start of 0uts1de's library

int cin_int_arr(vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_int_arr(vector<int>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_double_arr(vector<double>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cin >> arr.at(i);
    }
    return 0;
}

int cin_double_arr(vector<double>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cin >> arr.at(i);
    }
    return 0;
}


int cout_int_arr(vector<int>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_int_arr(vector<int>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_double_arr(vector<double>& arr){
    for (int i = 0; i < arr.size(); ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}

int cout_double_arr(vector<double>& arr, int n){    //overload
    for (int i = 0; i < n; ++i){
        cout << arr.at(i) << endl;
    }
    return 0;
}


int max_int_arr(std::vector<int>& arr){    //data mode
    int maxVal = INT_MIN;       //min of int
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            maxVal = arr.at(i);
        }
    }
    return maxVal;
}

int max_int_arr(std::vector<int>& arr, int mode){    //overload index mode
    int maxVal = INT_MIN;       //min of int
    int maxIndex = 0;
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            maxVal = arr.at(i);
            maxIndex = i;
        }
    }
    return maxIndex;
}

double max_double_arr(std::vector<double>& arr){    //data mode
    double maxVal = -DBL_MAX;       //min of double
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            maxVal = arr.at(i);
        }
    }
    return maxVal;
}

int max_double_arr(std::vector<double>& arr, int mode){    //overload index mode
    double maxVal = -DBL_MAX;       //min of double
    int maxIndex = 0;
    for (int i = 0; i < arr.size(); ++i){
        if (arr.at(i) > maxVal){
            maxVal = arr.at(i);
            maxIndex = i;
        }
    }
    return maxIndex;
}

//end of 0uts1de's library

int main(){
    long long int k, a, b;
    long long int bis = 1, yen = 0;
    cin >> k >> a >> b;
    auto k2 = k;
    
    if (bis < a){
        k -= a - 1;
        bis = a;
    }
    while (k > 1){
        bis -= a;
        ++yen;
        --k;
        bis += b;
        --yen;
        --k;
    }
    bis += k;
    
    if (bis < k2 + 1) bis = k2 + 1;
    
    cout << bis << endl;
    return 0;
}
