//
// Created by Justin Gries on 11/1/2021.
//

#include "onetime.h"

Onetime::Onetime(const int &time, const int &day, const int &month, const int &year, const std::string &description)
        : Appointment(time, day, month, year, description + " (One-Time)") {}

bool Onetime::occurs_on(const int &year, const int &month, const int &day) const {
    return this->get_year() == year
    && this->get_month_of_year() == MonthOfYear(month)
    && this->get_day_of_month() == day;
}
