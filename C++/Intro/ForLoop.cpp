//
#include <iostream>
#include <cstdio>
#include<map>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    map <int,string> numbers;
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";

    for(int n = a; n <=b; n++)
        {
        if((n>=1) && (n<=9))
            {
            cout << numbers[n] << endl;
        }
        else if((n%2 == 0) && (n > 9))
            {
            cout << "even" <<endl;
        }
        else
            {
            cout << "odd" <<endl;
        }
    }
    return 0;
}
