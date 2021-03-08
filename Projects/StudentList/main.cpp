#include <iostream>
#include "myDate.h"
using namespace std;

struct Student{
    char name[10];
    int studentID;
    char grade;
    myDate birthday;
    string homeTown;
};

void populate(Student stu){

}

void display(Student stu){

}

void sortByName(Student stu){

}

int menu(){
    int option;
    cout<<("\nWelcome to Solitaire Prime! \n---------------------------- \n1. New Deck \n2. Display Deck \n3. Shuffle Deck \n4. Play Solitaire Prime \n5. Exit")<<endl;
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
