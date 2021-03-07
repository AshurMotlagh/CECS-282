#ifndef MYDATE_MYDATE_H
#define MYDATE_MYDATE_H

#include <iostream>
using namespace std;

class myDate{
private:
    int month;
    int day;
    int year;
public:
    myDate();
    myDate(int m, int d, int y);

    void display();
    void increaseDate(int x);
    void decreaseDate(int x);
    int daysBetween(myDate D);

    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();

    string dayName();
};
#endif //MYDATE_MYDATE_H
