//  https://www.hackerrank.com/challenges/time-conversion/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include<iomanip>
using namespace std;

int main(){
    string time;
    cin >> time;
    char delim = ':';
    stringstream newTime;
    newTime << time;
    int hours,minutes,seconds;
    string ampm;
    newTime >> hours;
    newTime >> delim;
    newTime>> minutes;
    newTime >> delim;
    newTime>> seconds;
    newTime>> ampm;
    if(ampm == "PM"){
        switch(hours){
            case 1:hours = 13;
            break;
            case 2:hours = 14;
            break;
            case 3:hours = 15;
            break;
            case 4:hours = 16;
            break;
            case 5:hours = 17;
            break;
            case 6:hours = 18;
            break;
            case 7:hours = 19;
            break;
            case 8:hours = 20;
            break;
            case 9:hours = 21;
            break;
            case 10:hours = 22;
            break;
            case 11:hours = 23;
            break;
        }
    }
    else if(ampm == "AM" && hours == 12 ){
        hours = 0;

    }
    cout <<  setw(2)<< setfill('0') << hours << ":" << setw(2)<< setfill('0') << minutes << ":" << setw(2)<< setfill('0') << seconds << endl;
    return 0;
}
