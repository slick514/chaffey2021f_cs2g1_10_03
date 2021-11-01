//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_APPOINTMENT_H
#define INHERITANCE_APPOINTMENT_H

#include <string>

static const int NOT_SET = -1; /* NOLINT */
enum DAYS_OF_WEEK{UNSPECIFIED, SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

class Appointment {
public:
    Appointment(const int &time, const int &day, const int &month, const int &year);
    virtual bool occurs_on(const int &year, const int &month, const int &day) const = 0;
    virtual void set_description(std::string new_description) = 0;
    virtual void evaluate_date() = 0;

    std::string get_description() const {return this->appointment_description;}
private:
    std::string appointment_description;
    int day_of_month = NOT_SET;
    int month = NOT_SET;
    int time = NOT_SET;
    int year = NOT_SET;
    DAYS_OF_WEEK day_of_week = UNSPECIFIED;
};


#endif //INHERITANCE_APPOINTMENT_H
