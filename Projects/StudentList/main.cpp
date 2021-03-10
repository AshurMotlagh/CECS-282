// Ashur Motlagh
// CECS 282 - 05
// Prog 3 - Student Struct
// 3/9/2021
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "myDate.h"
#include "cstring"
using namespace std;

struct Student{
    char name[20];
    int studentID;
    char grade;
    myDate birthday;
    string homeTown;
};

myDate birthday(){ // gives us a birthday random****
    int randMon = rand() % 12 +1;
    int randDay = rand() % 31 + 1;
    int randYear = rand() % 11 + 1995;
    myDate BDay(randMon,randDay,randYear);
    return BDay;
}

void populate(Student **stu){
    string names[] = {"Ashur", "ashur2", "ashur3", "ashgur4", "ashur5", "ashur6", "ashur7", "ashur8", "ashur9", "ashur10"};
    string home[] = {"home1","home2","home3","home4","home5","home6","home7","home8","home9","home10"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    srand(time(NULL));
    for(int i =0; i < 10; i++){
        stu[i] = new Student;
        const char* name = names[rand() % 10].c_str();
        int id = rand() %9000 + 1000;
        int wgrade = rand() % 5;
        int homesTown = rand() % 10;
        stu[i] -> grade = grades[wgrade];
        stu[i] -> studentID = id;
        stu[i]-> homeTown = home[homesTown];
        stu[i]-> birthday = birthday();
        strcpy(stu[i] -> name, name);
    }

}

void display(Student **stu){
    cout << setw(10) << left << "Name" << setw(15) << "Student ID" << setw(10) << "Grade" << setw(20) << "Birthday" << setw(20) << "Hometown" << endl;
    cout << setw(10) << left << "_____" << setw(15) << "__________" << setw(10) << "_____" << setw(20) << "_________________" << setw(20) << "_________" << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(10) << left << stu[i]->name << setw(15) << stu[i]->studentID << setw(10) << stu[i]->grade << setw(20) << stu[i]->birthday.display2() << setw(20) << stu[i]->homeTown << endl;
    }
    cout << endl;
}

void swap(Student *a, Student *b){ // simple swap method
    Student *t = a;
    a=b;
    b=t;

}

void sortByName(Student **stu){
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (strcmp(stu[j]->name, stu[j + 1]->name) > 0){
                swap(*stu[j], *stu[j + 1]);
            }
        }
    }
}

void sortByID(Student **stu){
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (stu[j]->studentID > stu[j + 1]->studentID > 0){
                swap(*stu[j], *stu[j + 1]);
            }
        }
    }
}

void sortByGrade(Student **stu){
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (stu[j]->grade < stu[j + 1]->grade){
                swap(*stu[j], *stu[j + 1]);
            }
        }
    }
}

void sortByBirthday(Student **stu){
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (stu[j]->birthday.daysBetween(stu[j + 1]->birthday) < 0){
                swap(*stu[j], *stu[j + 1]);
            }
        }
    }
}

void sortByHomeTown(Student **stu){
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (stu[j]->homeTown > stu[j + 1]->homeTown){
                swap(*stu[j], *stu[j + 1]);
            }
        }
    }
}

int menu(){
    int option;
    cout<<("\n---------------------------- \n1. Sorted by Name \n2. Sorted by Student ID \n3. Sorted by Grade \n4. Sorted by Birthday \n5. Sorted by Home Town \n6. Exit")<<endl;
    cout<<("Please select the operation: ");
    cin>>option;
    cout<<("----------------------------")<<endl;
    return option;
}

int main() {
    int choice;

    Student * sptrArray[10]; // declare an array of Student pointers
    Student ** sptr = sptrArray; // Student pointer pointer
    populate(sptr); // pass the pointer to the populate function
    display(sptr); // display 10 students

    do{
        choice = menu();
        switch(choice){
            case 1:
                sortByName(sptr); // sort the students by name
                display(sptr); // display the students
                break;
            case 2:
                sortByID(sptr); // sort the students by ID
                display(sptr); // display the students
                break;
            case 3:
                sortByGrade(sptr); // sort the students by Grade
                display(sptr); // display the students
                break;
            case 4:
                sortByBirthday(sptr); // sort the students by Birthday
                display(sptr); // display the students
                break;
            case 5:
                sortByHomeTown(sptr); // sort the students by Home Town
                display(sptr); // display the students
                break;
        }
    }while (choice != 6);
    return 0;
}
