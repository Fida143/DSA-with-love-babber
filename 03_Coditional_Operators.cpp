#include <iostream>
using namespace std;

int main()
{

// **************************************************************************************************************************
    // Q1. Find given input is in Lower Case, Upper Case or a Numeric value ?

    char ch;
    cout << "Enter any character " << endl;
    cin >> ch;
    if (ch >= 97 && ch <= 123)
    {
        cout << "Character is in lower case" << endl;
    }
    else if (ch >= 64 && ch <= 90)
    {
        cout << "Character is in upper case" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "Character is numeric" << endl;
    }

// **************************************************************************************************************************
    // Q2. Print all number from 1 - N ?

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }

// **************************************************************************************************************************
    // Q3. Find sum of all number from 1-N ?

    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << " Value of Sum is : " << sum;

// **************************************************************************************************************************
    // Q4. Find sum of all even number between 1-N ?

    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "The Sum total of Even Number from 1-N is : " << sum;

// **************************************************************************************************************************
    // Q5. Find number is Prime or not ?

    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
        i++;
    }
    cout << "Prime";

// **************************************************************************************************************************
    //   Q6 Draw Pattern    * * * *
    //                      * * * *
    //                      * * * *
    //                      * * * *

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

// **************************************************************************************************************************
    //   Q7 Draw Pattern    1 1 1 1
    //                      2 2 2 2
    //                      3 3 3 3
    //                      4 4 4 4

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }


// **************************************************************************************************************************
    //   Q8 Draw Pattern    1 1 1 1
    //                      2 2 2
    //                      3 3
    //                      4

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}