#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    //******************************************************************************************************************************
    // Q1. Convert +ve Decimal number to Binary ?

    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int lastBit = n & 1;
        ans = (lastBit * pow(10, i)) + ans;
        i++;
        n = n >> 1;
    }
    cout << ans << endl;

    //******************************************************************************************************************************
    // Q2. Convert -ve Decimal number to Binary ?

    int n;
    cin >> n;
    long ans = 0, i = 0;
    while (i <= 16)
    { //  we can not print all 32 bits because long donot have capacity to store .
        int lastBit = n & 1;
        ans = (lastBit * pow(10, i)) + ans;
        i++;
        n = n >> 1;
    }
    cout << ans << endl;

    //******************************************************************************************************************************
    // Q3. Convert Binary  number to Decimal ?

    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << ans << endl;

    return 0;
}