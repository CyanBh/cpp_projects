//print smallest number
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int smallest;

    cout << "Enter 5 numbers: " << endl;

    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    smallest = numbers[0];

    for(int i = 1; i < 5; i++) {
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
