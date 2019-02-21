// https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double n;
    long long sum;
    cin >> n;
    vector<double> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        sum+=arr[arr_i];
    }
    cout << sum;
    return 0;
}
