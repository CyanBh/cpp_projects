#include <iostream>
#include<math.h>
#define  PI 3.14

using namespace std;

void find_area(float radius)//area of circle
{
	float area;

	area = PI * radius * radius;
	cout<<"The area of the circle is: "<< area <<" square metres"<< endl;
}

void find_area(float length, float breadth)//area of rectangle
{
	float area;

	
	area = length*breadth;
	cout<<"The area of the rectangle is: "<< area <<" square metres"<< endl;
}

void find_area(float base, float height, char c)//area of triangle using base, height
{
	float area;

	
	area = 0.5*base*height;
	cout<<"The area of the triangle is: "<< area <<" square metres"<< endl;
}

void find_area(float a, float b, float c)//area of triangle using length of sides
{
	float area;
	float s;//semiperimeter


	s = 0.5*(a + b + c);
	area = pow ((s * (s-a) * (s-b) * (s-c)) , 0.5);
	cout<<"The area of the triangle is: "<< area <<" square metres"<< endl;
}

void show_menu()
{
	
	cout << "Enter 1 to calculate the area of a circle."<<endl;
	cout << "Enter 2 to calculate the area of a rectangle."<<endl;
	cout << "Enter 3 to calculate the area of a triangle using base and height."<<endl;
	cout << "Enter 4 to calculate the area of a triangle using length of three sides."<<endl;
	cout << "Enter 5 to exit the program."<<endl;
	
}

void choice_manager(int n)//displays output according to chosen user input
{
		float radius, length, breadth, base, height, a, b, c;
		
	switch (n)
	{
	
		case 1:
			
		cout<<"Enter the radius of the circle (in metres): ";
		cin>>radius;
		find_area(radius);
		break;
		
		case 2:
			
		cout<<"Enter the length of the rectangle (in metres): ";
		cin>>length;
		cout<<"Enter the breadth of the rectangle (in metres): ";
		cin>>breadth;
		
		find_area(length, breadth);
		break;

		case 3:
			
		cout<<"Enter the length of the base of the triangle (in metres): ";
		cin>>base;
		cout<<"Enter the height of the triangle (in metres): ";
		cin>>height;
		
		find_area(base , height, 't' );
		break;
		
		case 4:
			
		cout<<"Enter the length of the first side (in metres): ";
		cin>>a;
		
		cout<<"Enter the length of the second side (in metres): ";
		cin>>b;
		
		cout<<"Enter the length of the third side (in metres): ";
		cin>>c;
		
		find_area(a,b,c);
		break;
		
		case 5:
		exit(0);

	}
		
}

bool prompt_user() //ask the user if they wish to continue
{
	char c;
	cout<<"\nDo you wish to calculate more areas (y/n)?";	
	cin>>c;
	if (c == 'y'||c == 'Y')
		{
			return true;
		}
		
	if (c == 'n'||c == 'N')
		{
			return false;
		}
		
	else
	{
	cout<<"\nInvalid choice."<<endl;
    return false;
	}
		
}

int main ()
{
	int choice;
	bool response ;
	
	do{
		
	show_menu();
	cin>>choice;
	choice_manager(choice);
	prompt_user();
	
	} while (response == true);
	

	
	return 0;
	
}


