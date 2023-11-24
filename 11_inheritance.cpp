#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    char section;
    string name;
public:
    void set_s()
    {
        cout<<"\nEnter roll number of student: ";
        cin>>rollNo;
        cout<<"Enter section: ";
        cin>>section;
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<endl;
    }

    void get_s()
    {
        cout<<"Roll number of student: "<<rollNo<<endl
            <<"Section: "<<section<<endl
            <<"Name: "<<name<<endl;
    }

};

class Exam:public Student
{
protected:
    float math,english,physics,chemistry,biology,computer;

public:
    void set_e()
    {
        set_s();
        cout<<"Enter marks in Mathematics: ";
        cin>>math;
        cout<<"Enter marks in English: ";
        cin>>english;
        cout<<"Enter marks in Physics: ";
        cin>>physics;
        cout<<"Enter marks in Chemistry: ";
        cin>>chemistry;
        cout<<"Enter marks in Biology: ";
        cin>>biology;
        cout<<"Enter marks in Computer: ";
        cin>>computer;
    }

    void get_e()
    {
        get_s();
        cout<<"Marks in Mathematics: "<<math      <<endl
            <<"Marks in English    : "<<english   <<endl
            <<"Marks in Physics    : "<<physics   <<endl
            <<"Marks in Chemistry  : "<<chemistry <<endl
            <<"Marks in Biology    : "<<biology   <<endl
            <<"Marks in Computer   : "<<computer  <<endl;

    }
};

class Result:public Exam
{
    float result;

public:
    void get_r()
    {
        get_s();
        result = math+english+physics+chemistry+biology+computer;
        cout<<"The result out of 600 is: "<<result<<endl;
    }
};




int main()
{
    int n;
    Result r[1];
    cout<<"Enter the number of records to create: ";
    cin>>n;
    r[n];
    for(int i=0;i<n;i++)
    {
        r[i].set_e();
    }

    for(int i=0;i<n;i++)
    {
        r[i].get_r();
    }


}