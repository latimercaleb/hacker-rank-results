// https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum1,sum2;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
         if(a_i == a_j)
             sum1+= a[a_i][a_j];
       }
    }
    int downdex = n-1;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
           if(a_j == downdex){
          sum2+= a[a_i][a_j];
               downdex--;
           }
       }
    }
    int sln = abs(sum1-sum2);
    cout << sln;
    return 0;
}
