//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_MONTHLY_H
#define INHERITANCE_MONTHLY_H
#include "appointment.h"

class Monthly : public Appointment{
public:
    virtual bool occurs_on(const int &year, const int &month, const int &day) const = 0;
    virtual void set_description(std::string new_description) = 0;
    virtual void evaluate_date() = 0;

private:
};


#endif //INHERITANCE_MONTHLY_H
