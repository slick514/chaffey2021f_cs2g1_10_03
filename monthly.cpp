//
// Created by Justin Gries on 11/1/2021.
//

#include "monthly.h"

Monthly::Monthly(const int &time, const int &day, const int &month, const int &year, const std::string &description)
        : Appointment(time, day, month, year, description + " (Monthly)") {}

bool Monthly::occurs_on(const int &year, const int &month, const int &day) const {
    return day == this->get_day_of_month();
}


