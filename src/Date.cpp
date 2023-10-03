#include "../include/Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getYear() const
{
    return year;
}

void Date::setMonth(int month)
{
    this->month = month;
}

int Date::getMonth() const
{
    return month;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::getDay() const
{
    return day;
}
