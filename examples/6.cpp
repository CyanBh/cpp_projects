Write a program to show the effect of call by value and call by reference using function.
#include <iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
