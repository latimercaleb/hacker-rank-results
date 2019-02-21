// https://www.hackerrank.com/challenges/c-tutorial-functions/problem
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c,int d)
    {
    int max = a;
    int numbers[] = {a,b,c,d};
    for(int i =0; i < 4; i++)
        {
        if(numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
