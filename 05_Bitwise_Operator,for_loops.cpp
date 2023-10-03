#include <iostream>
using namespace std;

int main()
{

    // *********************************************************************************************************************************
    // Q1.Find Bitwise values of a = 4 and b = 6 ?

    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl; // Output -  a&b 4
    cout << " a|b " << (a | b) << endl; // Output -  a|b 6
    cout << " ~a " << (~a) << endl;     // Output -  ~a -5
    cout << " a^b " << (a ^ b) << endl; // Output -  a^b 2

    // *********************************************************************************************************************************
    // Q2.Find Bitwise values of 17>>1 , 17>>2 , 19<<1 ,19<<2 ?

    cout << " 17>>1 " << (17 >> 1) << endl;
    cout << " 17>>2 " << (17 >> 2) << endl;
    cout << " 19<<1 " << (19 << 1) << endl;
    cout << " 19<<2 " << (19 << 2) << endl;

    // *********************************************************************************************************************************
    // Q3.Find all Increment and Decrement value of i= 7 ?

    int i = 7;

    cout << " i++ " << (i++) << endl; //  7
    cout << " ++i " << (++i) << endl; //  9
    cout << " i-- " << (i--) << endl; //  9
    cout << " --i " << (--i) << endl; //  7

    // *********************************************************************************************************************************
    // Q4.Find Output of given code ?

    int a, b = 1;
    a = 10;
    if (++a) // Condition != 0 it means it treated as true.
    {
        cout << b; //  OUTPUT :- 1
    }
    else
    {
        cout << ++b;
    }

    // *********************************************************************************************************************************
    // Q5.Find Output of given code ?

    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1 - In6ide if "; // OUTPUT:- Stage1 - Inside if
    }
    else
    {
        cout << "Stage2 - Inside else";
    }

    cout << "a=" << a << "b=" << b; // OUTPUT:- a=0 b=3

    // *********************************************************************************************************************************
    // Q6.Find Output of given code ?

    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2) //  ++b tak pahucha hi nahi
    {
        cout << "Stage1 - In6ide if "; // OUTPUT:- Stage1 - Inside if
    }
    else
    {
        cout << "Stage2 - Inside else";
    }
    cout << "a=" << a << "b=" << b; // OUTPUT:- a=0 b=2

    // *********************************************************************************************************************************
    // Q7.Find Output of given code ?

    int number = 3;
    cout << (25 * (++number)); // OUTPUT:- 100

    // *********************************************************************************************************************************
    // Q8.Find Output of given code ?

    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b; // OUTPUT:- 1
    cout << c; // OUTPUT:- 3

    // *********************************************************************************************************************************
    // Q9. Print counting from 1-N using for loop ?

    int n;
    cout << "Enter value of N " << endl;
    cin >> n;
    cout << "Printing starts from 1-" << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    // *********************************************************************************************************************************
    // Q10. Find Sum of all numbers from 1-N using for loop ?

    int n;
    int sum = 0;
    cout << "Enter value of N " << endl;
    cin >> n;

    cout << "Printing starts from 1-" << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }
    cout << sum; // OUTPUT:- 15 for N=5

    // *********************************************************************************************************************************
    // Q11. Find fibonacci series till N using for loop ? // 0 1 1 2 3 5 8 13 21 34 55 89 ...

    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }

    // *********************************************************************************************************************************
    // Q12. Find N is Prime or Not ?

    int n;
    cin >> n;
    bool a = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 0;
            break;
        }
    }
    if (a)
    {
        cout << n << " is Prime";
    }
    else
    {
        cout << n << " is Not Prime ";
    }

    // *********************************************************************************************************************************
    // Q13. Find Output of Given code ?

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " "; //  OUTPUT:- 1 3 5
        i++;
    }

    // *********************************************************************************************************************************
    // Q14. Find Output of Given code ?

    for (int i = 0; i <= 5; i--)
    {
        cout << i << " "; // OUTPUT :- 0 0 0 0 0 .... INFINITE LOOP
        i++;
    }

    // *********************************************************************************************************************************
    // Q15. Find Output of Given code ?

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " "; // OUTPUT:- 0 3 5 7 9 11 13 15
        if (i & 1)
        {
            continue;
        }
        i++;
    }

    // *********************************************************************************************************************************
    // Q16. Find Output of Given code ?

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {                                 // i j i j i j i j i j i j
            cout << i << " " << j << " "; // 0 0 0 1 0 2 0 3 0 4 0 5
                                          // 1 1 1 2 1 3 1 4 1 5
                                          // 2 2 2 3 2 4 2 5
                                          // 3 3 3 4 3 5
                                          // 4 4 4 5
        }
        cout << endl;
    }

    // *********************************************************************************************************************************
    // Q17. Find Output of Given code ?

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << " "; // i j i j i j i j i j i j
                                          // 0 0 0 1 0 2 0 3 0 4 0 5
                                          // 1 1 1 2 1 3 1 4 1 5
                                          // 2 2 2 3 2 4 2 5
                                          // 3 3 3 4 3 5
                                          // 4 4 4 5
        }
        cout << endl;
    }

    // *********************************************************************************************************************************
    // Q18. Find Output of Given code ?

    int a = 3;
    cout << a << endl; // Output - 3
    if (true)
    {
        int a = 5;
        cout << a << endl; // Output - 5
    }
    cout << a << endl; // Output - 3

    // *********************************************************************************************************************************
    // Q19. Find Difference between product and sum of digits of a number ?

https: // leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

    // *********************************************************************************************************************************
    // Q20. Find number of 1 bits ?

https: // leetcode.com/problems/number-of-1-bits/description/

    // kuch nahi hai

    return 0;
}