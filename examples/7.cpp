#include <iostream>
using namespace std;

class Number2; 

class Number1 {
private:
    int num;

public:
    Number1(int n) : num(n) {}

    friend void swapNumbers(Number1& n1, Number2& n2);
    void display() {
        cout << "Number1: " << num << endl;
    }
};

class Number2 {
private:
    int num;

public:
    Number2(int n) : num(n) {}

    friend void swapNumbers(Number1& n1, Number2& n2);
    void display() {
        cout << "Number2: " << num << endl;
    }
};

void swapNumbers(Number1& n1, Number2& n2) {
    int temp = n1.num;
    n1.num = n2.num;
    n2.num = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number1 n1(a);
    Number2 n2(b);

    cout << "Before swapping:" << endl;
    n1.display();
    n2.display();

    swapNumbers(n1, n2);

    cout << "After swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}
