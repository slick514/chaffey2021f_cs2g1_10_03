//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_WEEKLY_H
#define INHERITANCE_WEEKLY_H
#include "monthly.h"

class Weekly : public Appointment{
public:
    virtual bool occurs_on(const int &year, const int &month, const int &day) const = 0;
    virtual void set_description(std::string new_description) = 0;
    virtual void evaluate_date() = 0;
};


#endif //INHERITANCE_WEEKLY_H
