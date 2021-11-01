//
// Created by Justin Gries on 11/1/2021.
//

#include "monthly.h"

bool Monthly::occurs_on(const int &year, const int &month, const int &day) const {
    return day == this->day_of_the_month;
}
