//
// Created by Justin Gries on 11/1/2021.
//

#ifndef INHERITANCE_APPOINTMENT_H
#define INHERITANCE_APPOINTMENT_H

#include <string>

static const int NOT_SET = -1; /* NOLINT */
enum MonthOfYear{JANUARY = 1, FEBRUARY = 2, MARCH = 3, APRIL = 4, MAY = 5, JUNE = 6, JULY = 7, AUGUST = 8, SEPTEMBER
        = 9, OCTOBER = 10, NOVEMBER = 11, DECEMBER = 12};
enum DayOfWeek{SUNDAY = 0, MONDAY = 1, TUESDAY = 2, WEDNESDAY = 3, THURSDAY = 4, FRIDAY = 5, SATURDAY = 6};
enum AppointmentType{ONE_TIME, DAILY, WEEKLY, MONTHLY};

class Appointment {
public:
    Appointment(const int &time, const int &day, const int &month, const int &year, const std::string &description);
    virtual bool occurs_on(const int &year, const int &month, const int &day) const = 0;
    int get_day_of_month() const {return this->day_of_month;}
    MonthOfYear get_month_of_year() const {return this->month;}
    DayOfWeek get_day_of_week() const {return this->weekday;}
    int get_year() const {return this->year;}
    int get_time_24() const {return this->time_24;}
    std::string get_description() const {return this->appointment_description;}
    void print_appointment() const;
    std::string get_time_str() const;
    short get_time_str();

private:
    std::string appointment_description;
    int time_24;
    int day_of_month;
    MonthOfYear month;
    DayOfWeek weekday;
    int year;
};

/**
   Computes the weekday of a given date.
   @param year the year
   @param month the month (1 = January ... 12 = December)
   @param day the day of the month
   @return the weekday (0 = Sunday ... 6 = Saturday)
*/
DayOfWeek find_day_of_week(const int &year, const int &month, const int &day);

static std::string format_date_time(const Appointment *apt);

#endif //INHERITANCE_APPOINTMENT_H
