//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_MONTHLY_H
#define INHERITANCE_MONTHLY_H
#include "appointment.h"

class Monthly : public Appointment{
public:
    Monthly(const int &time, const int &day, const int &month, const int &year, const std::string &description);
    bool occurs_on(const int &year, const int &month, const int &day) const override;
};


#endif //INHERITANCE_MONTHLY_H
