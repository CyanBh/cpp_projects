//Write a program to enter five numbers and find the smallest number in C++.
#include <iostream>
using namespace std;
void printMin(int arr[5])
{
 int min = arr[0];
 for (int i = 0; i < 5; i++)
 {
 if (min > arr[i])
 {
 min = arr[i];
 }
 }
 cout<< "Smallest number is: "<< min;
} 
int main()
{
    
 int a[5]; 
 cout << "Enter five numbers :-";
 for(int i=0;i<5;i++)
 {
 cin >> a[i];
 } 
 printMin(a); 
}
