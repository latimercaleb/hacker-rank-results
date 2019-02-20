// https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    char stairCharacter = '#';
    for(int i= 0; i< n; i++){
        int whitespaceAmt = n-i-1;
        int charAmt = i + 1;
        int whitespaceCount = 0;
        int charAmtCount = 0;
        while (whitespaceCount < whitespaceAmt) {
            cout << ' ';
            whitespaceCount ++;
        }
        while (charAmtCount < charAmt){
            cout << stairCharacter;
            charAmtCount ++;
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
