#include "myDate.h"

int Greg2Julian(int month, int day, int year) {
    int I = year;
    int J = month;
    int K = day;

    int JD2 = K - 32075 + 1461 * (I + 4800 + (J - 14) / 12) / 4 + 367 * (J - 2 - (J - 14) / 12 * 12) / 12 -
              3 * ((I + 4900 + (J - 14) / 12) / 100) / 4;
    return JD2;
}

void Julian2Greg(int JD, int &month, int &day, int &year) {
    int I;
    int J;
    int K;

    int L = JD + 68569;
    int N = 4 * L / 146097;
    L = L - (146097 * N + 3) / 4;
    I = 4000 * (L + 1) / 1461001;
    L = L - 1461 * I / 4 + 31;
    J = 80 * L / 2447;
    K = L - 2447 * J / 80;
    L = J / 11;
    J = J + 2 - 12 * L;
    I = 100 * (N - 49) + I + L;

    year = I;
    month = J;
    day = K;
}

myDate::myDate() {
    int month = 5;
    int day = 11;
    int year = 1959;

}

myDate::myDate(int mon, int date, int years) {
    month =mon;
    day = date;
    year = years;

    if (month > 12 || day >31){
        month = 5;
        day = 11;
        year = 1959;
    }
}

void myDate::display() {
    switch (month) {

        case 1: cout<<"January "<<day<<" "<<year;
            break;

        case 2: cout<<"February "<<day<<" "<<year;
            break;

        case 3: cout<<"March "<<day<<" "<<year;
            break;

        case 4: cout<<"April "<<day<<" "<<year;
            break;

        case 5: cout<<"May "<<day<<" "<<year;
            break;

        case 6: cout<<"June "<<day<<" "<<year;
            break;

        case 7: cout<<"July "<<day<<" "<<year;
            break;

        case 8: cout<<"August "<<day<<" "<<year;
            break;

        case 9: cout<<"September "<<day<<" "<<year;
            break;

        case 10: cout<<"October "<<day<<" "<<year;
            break;

        case 11: cout<<"November "<<day<<" "<<year;
            break;

        case 12: cout<<"December "<<day<<" "<<year;
            break;

        default: cout<<"    "; //default if not inbound

    }
}

void myDate::increaseDate(int x) {
    int incj = Greg2Julian(month, day, year);
    incj +=x;
    Julian2Greg(incj, month,day,year);
}

void myDate::decreaseDate(int x) {
    int decj = Greg2Julian(month, day, year);
    decj +=x;
    Julian2Greg(decj, month,day,year);

}

int myDate::getMonth() {
    return month;
}

int myDate::getDay() {
    return day;
}

int myDate::getYear() {
    return year;
}

int myDate::daysBetween(myDate D) {
    int i = Greg2Julian(D.getMonth(), D.getDay(), D.getYear());
    int j = Greg2Julian(month,day,year);
    int dbetween = i - j;
    return dbetween;
}

int myDate::dayOfYear() {
    int i = Greg2Julian(1,0,year);
    int j = Greg2Julian(month, day, year);
    int yearDay = j - i;
    return yearDay;
}

string myDate::dayName() {
    int jul = Greg2Julian(month, day, year);
    int date = jul % 7;
    string day;

//    switch (date){
//        case 0:
//            day = "Monday";
//        case 1:
//            day = "Tuesday";
//        case 2:
//            day = "Wednesday";
//        case 3:
//            day = "Thursday";
//        case 4:
//            day = "Friday";
//        case 5:
//            day = "Saturday";
//        case 6:
//            day = "Sunday";
//    }
    if (date == 0)
        day = "Monday";
    else if(date == 1)
        day = "Tuesday";
    else if(date ==2)
        day = "Wednesday";
    else if(date == 3)
        day = "Thursday";
    else if(date == 4)
        day = "Friday";
    else if(date == 5)
        day = "Saturday";
    else if(date == 6)
        day = "Sunday";

    return day;
}
