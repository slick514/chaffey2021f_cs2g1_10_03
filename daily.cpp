//
// Created by Justin Gries on 11/1/2021.
//

#include "daily.h"

Daily::Daily(const int &time, const int &day, const int &month, const int &year, const std::string &description)
        : Appointment(time, day, month, year, description + " (Daily)") {}


