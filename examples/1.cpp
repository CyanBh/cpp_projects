//Write a program to enter five names and print them in C++. 
#include <iostream>
using namespace std;
int main()
{
    string ptr1[5]; 
    string *ptr2[5]; 
    cout << "Enter five names:-"; 
    for(int i=0;i<5;i++)
    {
        cin >> ptr1[i];
    }
    for(int i=0;i<5;i++)
    {
        ptr2[i]=&ptr1[i];
    }
    cout << "The names are:-"; 
    for(int i=0;i<5;i++)
    {
        cout << *ptr2[i] << endl;
    }
    return 0;
    }
