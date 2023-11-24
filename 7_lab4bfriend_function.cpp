#include<iostream>
using namespace std;

class Number2;

class Number1{
    int num1;
    friend void swap(Number1 &, Number2 &);
    public:
        void getdata(int a){
            num1 = a;
        }
        void display(){
            cout << "Number 1 = " << num1 << endl;
        }
};

class Number2{
    int num2;
    friend void swap(Number1 &, Number2 &);
    public:
        void getdata(int a){
            num2 = a;
        }
        void display(){
            cout << "Number 2 = " << num2 << endl;
        }
};

void swap(Number1 &x, Number2 &y){
    int temp = x.num1;
    x.num1 = y.num2;
    y.num2 = temp;
}

int main(){
    Number1 n1;
    Number2 n2;

    n1.getdata(10);
    n2.getdata(20);

    cout << "Before swapping:" << endl;
    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "After swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}

