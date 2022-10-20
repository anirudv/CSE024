// Your code here

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <ostream>

struct Date{
    int month;
    int date;
    int year;

    Date() {
        date = 01;
        month = 01;
        year = 1970;

    }

    Date(int date, int month, int year) {
        
        
        this->date = date;
        this->month = month;
        this->year = year;
    }
 

};

std::ostream& operator << (std::ostream& os, const Date& fullDate) {
    



    os << std::setfill('0') << std::setw(2) << fullDate.month << "/" << std::setfill('0') << std::setw(2) << fullDate.date << "/" << fullDate.year;




    return os;
}

#endif


