# include<iostream>
using namespace std;
class Student{
	int rollno;
	char sec;
	string name;
	public:
		void getInput(){
			cout<<"\t Enter Your Details:\n";
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your roll no: ";
			cin>>rollno;
			cout<<"Enter the sec: ";
			cin>>sec;
		}
		void display(){
			cout<<"\n\t The Details of Student are:\n";
			cout<<"Name: "<<name<<endl;
			cout<<"Rollno: "<<rollno<<endl;
			cout<<"Sec: "<<sec<<endl;
		}
};
class Exam:public Student{
	protected:
	int maths,eng,science,geo,hist,comp;
	public:
	void getExinfo(){
		getInput();
		cout<<"\n\tEnter the marks for the following subject(out of 30):\n";
		cout<<"Maths: ";
		cin>>maths;
		cout<<"Eng: ";
		cin>>eng;
		cout<<"Science: ";
		cin>>science;
		cout<<"Geo: ";
		cin>>geo;
		cout<<"History: ";
		cin>>hist;
		cout<<"Comp: ";
		cin>>comp;
	}
	void display_exam(){
		display();
		cout<<"\n\tYour marks in 6 subjects are as follows:\n";
		cout<<"Maths: "<<maths<<endl;
		cout<<"Eng: "<<eng<<endl;
		cout<<"Science: "<<science<<endl;
		cout<<"Geo: "<<geo<<endl;
		cout<<"History: "<<hist<<endl;
		cout<<"Comp: "<<comp<<endl;
	}
};
class Result:public Exam{
	int tomarks;
	public: 
	void cal(){
	    getExinfo();
	    tomarks=maths+eng+science+geo+hist+comp;
	}
	void display_result(){
		display_exam();
		cout<<"\nYour result is: "<<tomarks;
	}
};
int main(){
	Result r;
	r.cal();
	r.display_result();
	return 0;
}