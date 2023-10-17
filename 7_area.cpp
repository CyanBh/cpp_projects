#include<iostream>
#include<math.h>
using namespace std;

class Area{
    public:
        void calculateArea(float r){
            cout<<"Area of Circle: "<<3.14*r*r<<endl;
        }
        void calculateArea(float b, float h){
            cout<<"Area of Triangle: "<<0.5*b*h<<endl;
        }
        void calculateArea(float a, float b, float c){
            float s=(a+b+c)/2;
            cout<<"Area of Triangle: "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
        }
        void calculateArea(int l, int b){
            cout<<"Area of Rectangle: "<<l*b<<endl;
        }
};

int main(){
    Area obj;
    int choice;
    float r, b, h, a, c;
    int l;
    do{
        cout<<"\n\n\nEnter your choice:\n1. Area of Circle\n2. Area of Triangle (base and height)\n3. Area of Triangle (three sides)\n4. Area of Rectangle\n5. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter radius of circle: ";
                cin>>r;
                obj.calculateArea(r);
                break;
            case 2:
                cout<<"Enter base and height of triangle: ";
                cin>>b>>h;
                obj.calculateArea(b,h);
                break;
            case 3:
                cout<<"Enter three sides of triangle: ";
                cin>>a>>b>>c;
                obj.calculateArea(a,b,c);
                break;
            case 4:
                cout<<"Enter length and breadth of rectangle: ";
                cin>>l>>b;
                obj.calculateArea(l,b);
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(choice!=5);
    return 0;
}
