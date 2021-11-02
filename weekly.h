//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_WEEKLY_H
#define INHERITANCE_WEEKLY_H
#include "appointment.h"


class Weekly : public Appointment{
public:
    Weekly(const int &time, const int &day, const int &month, const int &year, const std::string &description);
    bool occurs_on(const int &year, const int &month, const int &day) const override;
};




#endif //INHERITANCE_WEEKLY_H
