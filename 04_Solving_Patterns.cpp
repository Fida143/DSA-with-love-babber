#include <iostream>
using namespace std;
int main()
{
    // **********************************************************************************************************************
    // Q1. Draw Pattern  1 2 3 4
    //                   1 2 3 4
    //                   1 2 3 4
    //                   1 2 3 4

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q2. Draw Pattern      4 3 2 1
    //                       4 3 2 1
    //                       4 3 2 1
    //                       4 3 2 1

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q3. Draw Pattern      1 2 3
    //                       4 5 6
    //                       7 8 9

    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q4. Draw Pattern      *
    //                       * *
    //                       * * *
    //                       * * * *

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q5. Draw Pattern      1
    //                       2 2
    //                       3 3 3
    //                       4 4 4 4

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q6. Draw Pattern      1
    //                       2 3
    //                       4 5 6
    //                       7 8 9 10

    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q7. Draw Pattern      1
    //                       2 3
    //                       3 4 5
    //                       4 5 6 7

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    //  ************  OR   ****************

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q8. Draw Pattern      1
    //                       2 1
    //                       3 2 1
    //                       4 3 2 1

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q9. Draw Pattern      A A A A
    //                       B B B B
    //                       C C C C
    //                       D D D D

    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        ch = ch + 1;
        i = i + 1;
    }
    //  ************  OR   ****************

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + i - 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    //  ************  OR   ****************

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q10. Draw Pattern      A B C D
    //                        A B C D
    //                        A B C D
    //                        A B C D

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q11. Draw Pattern      A B C D
    //                        E F G H
    //                        I J K L
    //                        M N O P

    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q12. Draw Pattern      A B C D
    //                        B C D E
    //                        C D E F
    //                        D E F G

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q13. Draw Pattern      A
    //                        B B
    //                        C C C
    //                        D D D D

    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        ch = ch + 1;
        i = i + 1;
    }

    //  ************  OR   ****************

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q14. Draw Pattern      A
    //                        B C
    //                        C D E
    //                        D E F G

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    //  ************  OR   ****************

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q15. Draw Pattern      D
    //                        C D
    //                        B C D
    //                        A B C D

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + n - i + j - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // **********************************************************************************************************************
    // Q16. Draw Pattern            *
    //                            * *
    //                          * * *
    //                        * * * *


      int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            
            if(n-j+1<=i){
            cout<<"*";
            }else{
                cout<<"@";
            }
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}