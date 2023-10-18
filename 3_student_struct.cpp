#include<iostream>
#include<string>
using namespace std;

struct student {
    int student_id;
    string name;
    int age;
    float math_marks;
    float english_marks;
    float science_marks;
};

student s[100];
int n = 0;

void create_student() {
    cout << "\nEnter student ID: ";
    cin >> s[n].student_id;
    cout << "Enter student name: ";
    cin >> s[n].name;
    cout << "Enter student age: ";
    cin >> s[n].age;
    cout << "Enter math marks: ";
    cin >> s[n].math_marks;
    cout << "Enter english marks: ";
    cin >> s[n].english_marks;
    cout << "Enter science marks: ";
    cin >> s[n].science_marks;
    n++;
}

void display_student(int i) {
    cout << "\nStudent ID: " << s[i].student_id << endl;
    cout << "Student Name: " << s[i].name << endl;
    cout << "Student Age: " << s[i].age << endl;
    cout << "Math Marks: " << s[i].math_marks << endl;
    cout << "English Marks: " << s[i].english_marks << endl;
    cout << "Science Marks: " << s[i].science_marks << endl;
}

void search_student(int id) {
    for (int i = 0; i < n; i++) {
        if (s[i].student_id == id) {
            display_student(i);
            return;
        }
    }
    cout << "Student not found" << endl;
}

void display_average_marks() {
    float math_total = 0, english_total = 0, science_total = 0;
    for (int i = 0; i < n; i++) {
        math_total += s[i].math_marks;
        english_total += s[i].english_marks;
        science_total += s[i].science_marks;
    }
    cout << "\nAverage Math Marks: " << math_total / n << endl;
    cout << "Average English Marks: " << english_total / n << endl;
    cout << "Average Science Marks: " << science_total / n << endl;
}

void display_highest_marks() {
    float highest_marks = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        float total_marks = s[i].math_marks + s[i].english_marks + s[i].science_marks;
        if (total_marks > highest_marks) {
            highest_marks = total_marks;
            index = i;
        }
    }
    cout << "\nHighest Marks: " << highest_marks << endl;
    cout << "Subject with Highest Marks: ";
    if (s[index].math_marks > s[index].english_marks && s[index].math_marks > s[index].science_marks) {
        cout << "Math" << endl;
    }
    else if (s[index].english_marks > s[index].math_marks && s[index].english_marks > s[index].science_marks) {
        cout << "English" << endl;
    }
    else {
        cout << "Science" << endl;
    }
}

int main() {
    int choice, id;
    do {
        cout << "\nMenu\n" << endl;
        cout << "1. Create Student Record" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Display Average Marks of All Students" << endl;
        cout << "5. Display Highest Marks of a Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            create_student();
            break;
        case 2:
            for (int i = 0; i < n; i++) {
                display_student(i);
            }
            break;
        case 3:
            cout << "Enter student ID: ";
            cin >> id;
            search_student(id);
            break;
        case 4:
            display_average_marks();
            break;
        case 5:
            display_highest_marks();
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 6);
    return 0;
}
