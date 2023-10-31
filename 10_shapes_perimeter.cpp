#include<iostream>
using namespace std;

class Shape
{
    float radius, length, breadth, perimeter;
    public:

        Shape(float radius)
        {
            this->radius = radius;
            cout<<"Constructor called"<<endl;
        }

        Shape(float length, float breadth)
        {
            this->length = length;
            this->breadth = breadth;
            cout<<"Constructor called"<<endl;
        }

        ~Shape()
        {
            cout<<"Destructor called"<<endl;
        }

        void getPerimeter(char c)
        {
            if(c == 'C'|| c== 'c')
            {
                perimeter = 2*3.14*radius;
                cout<<"Perimeter of circle is: "<<perimeter<<endl;
            }

            if(c == 'r'|| c== 'R')
            {
                perimeter = 2*(length+breadth);      
                cout<<"Perimeter of rectangle is: "<<perimeter<<endl;  
            }
        }
     
};

int main(){
    
    int choice;
    float r;
    int l, b;
    do{
        cout<<"\n1. Perimeter of Circle\n2. Perimeter of Rectangle\n3. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter radius of circle: ";
                cin>>r;
                Shape s1(r);
                s1.getPerimeter('c');
                
                break;
            }
            case 2:
            {
                cout<<"Enter length and breadth of rectangle: ";
                cin>>l>>b;
                Shape s2(l,b);
                s2.getPerimeter('r');
                
                break;
            }
            case 3:
            {
                exit(0);
                break;
            }

            
        }
    }
    
    while(choice!=3);
    return 0;
}
