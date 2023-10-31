#include <iostream>
#include <string.h>
using namespace std;



class Person
{

    string name;
    int age;
    string address;
    float salary;

public:

    void create_record( )
    {   
        cout<<"Enter name of person: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter address: ";
        cin.ignore();
        getline(cin, address);
        cout<<"Enter basic salary: ";
        cin>> salary;
        cout<<endl;
         
    }

    float compute_salary(float salary)
    {
       float hra,da,medical,travel;
       hra = 0.3 * salary;
       da = 0.3 * salary;
       medical = 0.2 * salary;
       travel = 0.1 * salary;

       float total_salary = salary + hra + da + medical + travel;
       return total_salary;
    }

    void display()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<"\nTotal Salary: "<<compute_salary(salary)<<endl;
    }

};

Person p[100];





int main()
{   
    int n;
    cout<<"Enter the number of records to create: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
	{
		cout<<"Person "<<i+1<<endl;
        p[i].create_record();
	}
    
    for(int i=0;i<n;i++)
    {
		cout<<"Person "<<i+1<<endl;
		p[i].display();
	}

    return 0;
}