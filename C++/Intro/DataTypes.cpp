// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int var1;
    long var2;
    long long var3;
    char var4;
    float var5;
    double var6;
    scanf("%d %ld %lld %c %f %lf",&var1,&var2,&var3,&var4,&var5,&var6);
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n",var1,var2,var3,var4,var5,var6);
    return 0;
}
