#include<iostream>
using namespace std;
class Complex{
	int real,img;
	public:
		Complex(){
			real=0;
			img=0;
		}
		Complex(int real,int img){
			this->real=real;
			this->img=img;
		}
		friend Complex operator++(Complex&);
		friend Complex operator++(Complex&,int);
		friend Complex operator--(Complex&);
		friend Complex operator--(Complex&,int);
		friend Complex operator+(Complex&,Complex&);
		friend Complex operator-(Complex&,Complex&);
		void show(){
			cout<<" "<<real<<"+i"<<img;
		}
		void show1(){
			cout<<" "<<real<<"-i"<<img;
		}
};
Complex operator++(Complex &op){
	++op.real;
	++op.img;
	return op;
}
Complex operator++(Complex &op,int){
	Complex temp;
	temp.real=op.real;
	temp.img=op.img;
	op.real++;
	op.img++;
	return temp;
}
Complex operator--(Complex &op){
	--op.real;
	--op.img;
	return op;
}
Complex operator--(Complex &op,int){
	Complex temp;
	temp.real=op.real;
	temp.img=op.img;
	op.real--;
	op.img--;
	return temp;
}
Complex operator+(Complex &op1,Complex &op2){
	Complex op3;
	op3.real=op1.real+op2.real;
	op3.img=op1.img+op2.img;
	return op3;
}
Complex operator-(Complex &op1,Complex &op2){
	Complex op3;
	op3.real=op1.real-op2.real;
	op3.img=op1.img-op2.img;
	return op3;
}

int main(){
	int sc;
	char ch;
	int a,b,c,d;
	do{
		cout<<"\n";
	    cout<<"1. Press 1 for increament of Complex number(unary)."<<endl;
		cout<<"2. Press 2 for decreament of Complex number(unary)."<<endl;
		cout<<"3. Press 3 for addition of two Complex number(binary)."<<endl;
		cout<<"4. Press 4 for substraction of two Complex number(binary)."<<endl;
		cout<<"5. Press 5 to Exit."<<endl;
		cout<<"Enter your choice: ";
		cin>>sc;
		
		if (sc==5){
			cout<<"You have existed the program!"<<endl;
		}
		else{
		switch(sc){
		  case 1:{
		  	cout<<"Enter 'A' for post increment and 'B' for pre increment: ";
		  	cin>>ch;
		  	if(ch=='A'){
		  	cout<<"\n";
		    cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		  	Complex ob1(a,b),ob2;
		  	cout<<"Post Increament:";
		  	cout<<"\n";
		  	cout<<"Values assigned:";
		  	ob1.show();
		  	ob2=ob1++;
		  	cout<<"\nBefore Increment value: ";
		  	ob2.show();
		  	cout<<"\nAfter Increment value: ";
		  	ob1.show();
		    }
		    else{
		    cout<<"\n";
		    cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		  	Complex ob1(a,b),ob2;
		  	cout<<"Pre Increment:";
		  	cout<<"\n";
		  	cout<<"Values assigned:";
		  	ob1.show();
		  	ob2=++ob1;
		  	cout<<"\nAfter Increment value: ";
		  	ob2.show();
			}
			break;
		  }
		  case 2:{
		  	cout<<"Enter 'A' for post decrement and 'B' for pre decrement: ";
		  	cin>>ch;
		  	if(ch=='A'){
		    cout<<"\n";
		    cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		  	Complex ob1(a,b),ob2;
		  	cout<<"Post Decrement:";
		  	cout<<"\n";
		  	cout<<"Values assigned:";
		  	ob1.show();
		  	ob2=ob1--;
		  	cout<<"\nUnupdated value: ";
		  	ob2.show();
		  	cout<<"\nUpdated value: ";
		  	ob1.show();
		    }
		    else{
		    cout<<"\n";
		    cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		  	Complex ob1(a,b),ob2;
		  	cout<<"Pre Decrement:";
		  	cout<<"\n";
		  	cout<<"Values assigned:";
		  	ob1.show();
		  	ob2=--ob1;
		  	cout<<"\nUpdated value: ";
		  	ob2.show();
			}
			break;
		  }
		  
		 case 3:{
		 	cout<<"\n";
		 	cout<<"Enter First Complex number:"<<endl;
		 	cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		 	Complex ob1(a,b);
			cout<<"Enter Second Complex number:"<<endl;
		 	cout<<"Enter the Real part: ";
		 	cin>>c;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>d;
		 	cout<<"\n";
		 	cout<<"Addition of complex number:"<<endl;
		 	Complex ob2(c,d);
		 	Complex ob3= ob1+ob2;
		 	cout<<"Result:";
		 	ob3.show();
		 	cout<<"\n";
			break;
		}
		case 4:{
			cout<<"\n";
		 	cout<<"Enter First Complex number:"<<endl;
		 	cout<<"Enter the Real part: ";
		 	cin>>a;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>b;
		 	Complex ob1(a,b);
			cout<<"Enter Second Complex number:"<<endl;
		 	cout<<"Enter the Real part: ";
		 	cin>>c;
		 	cout<<"Enter the Imginary part: ";
		 	cin>>d;
		 	cout<<"\n";
		 	cout<<"Substraction of complex number:"<<endl;
		 	Complex ob2(c,d);
		 	Complex ob3= ob1-ob2;
		 	cout<<"Result:";
		 	ob3.show1();
		 	cout<<"\n";
			break;
		}
		default:
			cout<<"No match found";
			  	  	
          }
        }
    }while(sc!=5);
        return 0;
}

