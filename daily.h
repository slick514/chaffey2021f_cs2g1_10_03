//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_DAILY_H
#define INHERITANCE_DAILY_H

#include "appointment.h"

class Daily : public Appointment{
public:
    Daily(const int &time, const int &day, const int &month, const int &year, const std::string &description);
    bool occurs_on(const int &year, const int &month, const int &day) const override {return true;}
};


#endif //INHERITANCE_DAILY_H
