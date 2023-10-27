Write a program that obtains the youngest and eldest age of person class using array.
#include <iostream>
using namespace std;
class Person
{
public: void array()
{
int min,max,m;
cout << "Enter number of people: " << endl;
cin>>m;
int num[m];
  cout << "Enter age of people: " << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> num[i];
  }
  min=num[0];
  max=num[0];
  for (int j = 0; j < m; j++) 
  {
    if(min>num[j])
    min=num[j];
  }
  for (int j = 0; j < m; j++) 
  {
    if(max<num[j])
    max=num[j];
  }
  cout << "Youngest: " << min << endl;
  cout << "Oldest: " << max << endl;
}
};
int main()
{
    Person obj;
    obj.array();
    return 0;
}
