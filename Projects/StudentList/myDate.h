#ifndef STUDENTLIST_MYDATE_H
#define STUDENTLIST_MYDATE_H

#include "string"

class myDate {
private:
    int month;
    int day;
    int year;
public:
    myDate();

    myDate(int m, int d, int y);

    void display();

    void increaseDate(int n);

    void decreaseDate(int n);

    int daysBetween(myDate D);

    int getMonth();

    int getDay();

    int getYear();

    int dayOfYear();

    std::string dayName();

    std::string display2();
};


#endif //STUDENTLIST_MYDATE_H
