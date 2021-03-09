// Ashur Motlagh
// CECS 282
// Prog 3 - Student Struct
// 3/9/2021
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "myDate.h"
using namespace std;

struct Student{
    char name[10];
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

//void bubbleSort(){
//
//}

void populate(Student *stu){
    string names[] = {"Ashur", "ashur2", "ashur3", "ashgur4", "ashur5", "ashur6", "ashur7", "ashur8", "ashur9", "ashur10"};
    string home[] = {"home1","home2","home3","home4","home5","home6","home7","home8","home9","home10"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    srand(time(NULL));
    for(int i =0; i < 10; i++){
        int id = rand() %9000 + 1000;
        int grade = rand() % 5;
        int homeTown = rand() % 10;
        stu -> grade = grade;
        stu -> studentID = id;
        stu -> homeTown = homeTown;
        stu -> birthday = birthday();
    }

}

void display(Student *stu){

}

void sortByName(Student *stu){

}

void sortByID(Student *stu){

}

void sortByGrade(Student *stu){

}

void sortByBirthday(Student *stu){

}

void sortByHomeTown(Student *stu){

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
    Student * sptrArray[10]; // declare an array of Student pointers
    Student ** sptr = sptrArray; // Student pointer pointer
    populate(sptr); // pass the pointer to the populate function
    display(sptr); // display 10 students
    sortByName(sptr); // sort the students by name
    display(sptr); // display the students
    return 0;
}
