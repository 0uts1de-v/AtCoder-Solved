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
    vector<int> a(3), b(3), town(4, 0);
    string ans = "YES";
    for (int i = 0; i < 3; ++i){
        cin >> a.at(i) >> b.at(i);
    }
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 3; ++j){
            if (a.at(j) == i + 1 || b.at(j) == i + 1){
                ++town.at(i);
            }
        }
        if (town.at(i) > 2){
            ans = "NO";
        }
    }
    cout << ans << endl;
    return 0;
}
