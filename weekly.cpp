//
// Created by Justin Gries on 11/1/2021.
//

#include <ctime>
#include <sstream>
#include "weekly.h"

using namespace std;

Weekly::Weekly(const int &time, const int &day, const int &month, const int &year, const std::string &description)
        : Appointment(time, day, month, year, description + " (Weekly)")
{}

bool Weekly::occurs_on(const int &year, const int &month, const int &day) const {
    return (find_day_of_week(year, month, day) == this->get_day_of_week());
}

