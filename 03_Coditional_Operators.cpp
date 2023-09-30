#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter any character "<<endl;
    cin>>ch;
    if(ch>=97 && ch<=123){
        cout<<"Character is in lower case"<<endl;
    }
    else if(ch>=64 && ch<=90){
        cout<<"Character is in upper case"<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"Character is numeric"<<endl;
    }
    

    return 0;
}