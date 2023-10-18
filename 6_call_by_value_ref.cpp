#include<iostream>
using namespace std;

void callByValue(int num){
    num = num + 10;
    cout<<"\nValue inside callByValue function: "<<num<<endl;
}

void callByReference(int &num){
    num = num + 10;
    cout<<"\nValue inside callByReference function: "<<num<<endl;
}


int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Value of num before function calls: "<<num<<endl;
    
    callByValue(num);
    cout<<"Value of num after callByValue function: "<<num<<endl;
    
    callByReference(num);
    cout<<"Value of num after callByReference function: "<<num<<endl;
    
    return 0;
}
