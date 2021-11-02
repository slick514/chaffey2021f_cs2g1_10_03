//
// Created by Justin Gries on 11/1/2021.
//

#include <string>
#include <sstream>
#include <iostream>
#include "appointment.h"

using namespace std;

Appointment::Appointment(const int &time, const int &day, const int &month, const int &year, const string
&description) {
    this->month = MonthOfYear(month);
    this->day_of_month = day;
    this->time_24 = time;
    this->year = year;
    this->appointment_description = description;
    this->weekday = find_day_of_week(year, month, day);
}

void Appointment::print_appointment() const {
    cout << "Description: '" << this->get_description() << "'" << endl;
    cout << "Date/Time: " << format_date_time(this) << endl;
}

string Appointment::get_time_str() const {
    stringstream stream;
    int value;
    bool pm = this->get_time_24() >= 1200;
    if(pm)
        value -= 1200;
    stream << value << (pm?" PM":" AM");
    return stream.str();
}

DayOfWeek find_day_of_week(const int &year, const int &month, const int &day){
    int y = year;
    int m = month - 1;
    if (month < 3) { y--; m = m + 4; }
    int ans = (y + y / 4 - y / 100 + y / 400
            + 3 * m + 4 - (m - m / 8) / 2 + day) % 7;
    return DayOfWeek(ans);
}

static string format_date_time(const Appointment *apt){
    stringstream stream;
    stream << apt->get_day_of_week() << " " ;
    stream << apt->get_month_of_year() << " ";
    stream << apt->get_day_of_month() << " ";
    stream << apt->get_year() << ", @";
    stream << apt->get_time_str();
    return stream.str();
}
