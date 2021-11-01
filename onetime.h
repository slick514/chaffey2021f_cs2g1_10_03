//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_ONETIME_H
#define INHERITANCE_ONETIME_H
#include "daily.h"
#include "weekly.h"
#include "monthly.h"

class Onetime : public Daily, Weekly, Monthly{
public:
    virtual bool occurs_on(const int &year, const int &month, const int &day) const = 0;
    virtual void set_description(std::string new_description) = 0;
    virtual void evaluate_date() = 0;
};


#endif //INHERITANCE_ONETIME_H
