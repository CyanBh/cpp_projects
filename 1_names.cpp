//print 5 names
#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter name " << i+1 << ": ";
        cin >> names[i];
    }

    cout << "\nEntered names are:\n";
    for(int i = 0; i < 5; i++) {
        cout << i+1 << ". " << names[i] << endl;
    }

    return 0;
}
