// https://www.hackerrank.com/challenges/arrays-introduction/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    int myData[size];
    for(int i = 0; i < size; i++)
        cin >> myData[i];
    for(int i = (size-1); i >=0; i--)
        cout << myData[i] << " ";
    return 0;
}
