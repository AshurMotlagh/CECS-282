#ifndef STUDENTLIST_MYDATE_H
#define STUDENTLIST_MYDATE_H


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

    string dayName();
};


#endif //STUDENTLIST_MYDATE_H
