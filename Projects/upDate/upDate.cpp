// Ashur Motlagh
// CECS 282-05
// Prog 4  - Operator Overloading
// 4/6/2021
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "upDate.h"

using namespace std;

int upDate::julian(){
    int m;
    int d;
    int y;

    m = dates[0];
    d = dates[1];
    y = dates[2];

    return (d - 32075 + 1461 * (y + 4800 + (m - 14) / 12) / 4 + 367 *(m - 2 - (m - 14) / 12 * 12) / 12 - 3 * ((y + 4900 + (m-14) / 12) /100) / 4);
}


void upDate::Julian2Greg(int JD, int &month, int &day, int &year){
    int l = JD + 68569;
    int n = 4 * l / 146097;

    l = l - (146097 * n + 3) / 4;

    int i = 4000 * (l + 1) / 1461001;

    l = l - 1461 * i / 4 + 31;

    int j = 80 * l / 2447;
    int k = l - 2447 * j / 80;

    l = j / 11;
    j = j + 2 - 12 * l;
    i = 100 * (n-49) + i + l;

    year = i;
    month = j;
    day = k;
}

upDate::upDate(){
    dates = new int[3];
    dates[0] = 5;
    dates[1] = 11;
    dates[2] = 1959;
    count  = count + 1;
}

upDate::upDate(int mon,int day,int year) {
    count++;
    dates=new int[3];

    if ((mon > 12) || (day > 31))
    {
        dates[0]=5;
        dates[1]=11;
        dates[2]=1959;
    } else {
        dates[0]=mon;
        dates[1]=day;
        dates[2]=year;
    }
}

upDate::upDate(const upDate &m) {
    dates=new int[3];
    dates[0]=m.dates[0];
    dates[1]=m.dates[1];
    dates[2]=m.dates[2];
    count++;
}

upDate::~upDate() {
    count = count - 1;
    delete []dates;
}

void upDate::increaseDate(int x) {
    int incj = julian();
    incj = incj + x;
    Julian2Greg(incj, dates[0],dates[1],dates[2]);
}


void upDate::decreaseDate(int x) {
    int decj = julian();
    decj = decj - x;
    Julian2Greg(decj, dates[0],dates[1],dates[2]);
}

int upDate::daysBetween(upDate D) {
    int i = julian();
    int j = D.julian();
    int dbetween = i - j;
    return dbetween;
}

int upDate::getMonth(){
    return dates[0];
}

int upDate::getDay(){
    return dates[1];
}

int upDate::getYear(){
    return dates[2];
}

void upDate::setDate(int day, int month, int year){
    dates[1] = day;
    dates[0] = month;
    dates[2] = year;
}

string upDate::getMonthName(){
    string months[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September",
                         "October", "November", "December"};
    return months[dates[0]];
}

int upDate::count = 0;

int upDate::GetDateCount(){
    return count;
}
upDate upDate::operator + (int x){
    upDate temp(*this);
    temp.increaseDate(x);
    return temp;
}

upDate upDate::operator=(upDate x){
    dates[0] = x.dates[0];
    dates[1] = x.dates[1];
    dates[2] = x.dates[2];
    return (*this);
}

upDate upDate::operator - (int x){
    upDate temp(*this);
    temp.decreaseDate(x);
    return temp;
}

upDate operator +(int x, upDate X){
    return X + x;
}

int upDate::operator -(upDate x){
    return daysBetween(x);
}

upDate operator -(int x, upDate X){
    return X - x;
}

ostream &operator <<(ostream &out, upDate x){
    out << x.getMonth() << "/" << x.getDay() << "/" << x.getYear();
    return out;
}

upDate upDate::operator --(){
    decreaseDate(1);
    return (*this);
}

upDate upDate::operator ++(){
    increaseDate(1);
    return (*this);
}

upDate upDate::operator ++(int date){
    increaseDate(1);
    return (*this);
}

upDate upDate::operator --(int date){
    decreaseDate(1);
    return (*this);
}

bool upDate::operator == (upDate x){
    if(julian() ==x.julian())
        return true;
    return false;
}

bool upDate::operator <(upDate x){
    if(julian() <x.julian())
        return true;
    return false;
}

bool upDate::operator > (upDate x){
    if(julian() > x.julian()){
        return true;
    } else {
        return false;
    }
}
