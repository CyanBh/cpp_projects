#include <iostream>
 using namespace std;
struct Student
{
    int student_id;
    string name;
    short age;
    float marks_in_maths, marks_in_english, marks_in_science;

};


int main()
{
    int val;

    
    cout<<"Select the option you want...\n";
    cout<<"1.Create a new student record\n";
    cout<<"2.Display existing student record\n";
    cout<<"3.Search Student by ID\n";
    cout<<"4.Display average marks of student\n";
    cout<<"5.Display highest marks in Subject\n";
    cout<<"6.Quit Program\n";
    
    cin>> val;

    do 
    {
       process_select(val);
    }while(val); 
} 

int process_select(int n)
{
 switch (n) 
        {
            case 1:
                cout<<"1 lol"<<endl;
                break;
    
            case 2:
                cout<<"2 lol"<<endl;
                break;
    
            case 3:
                cout<<"3 lol"<<endl;
                break;

            case 4:
                cout<<"4 lol"<<endl;
                break;

            case 5:
                cout<<"5 lol"<<endl;
                break;

            case 6:
                cout<<"quitting"<<endl;
                return 0;
    
            default:
                cout<<"Choose a valid option"<<endl;
                break;
        }
}

void create_new_record()
{

}

void display_record()
{

}

void search_by_id()
{

}

void show_average_marks()
{

}

void show_highest_marks_in_subject()
{

}