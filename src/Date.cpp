#include "../include/Date.h"
#include <iomanip>
#include <string>
#include <sstream>

Date::Date(int year, int month, int day) : isHoliday(false)
{
    this->year = year;
    this->month = month;
    this->day = day;
    std::tm date = {};
    date.tm_year = year - 1900; // Year offset from 1900
    date.tm_mon = month - 1;    // The month begins at zero
    date.tm_mday = day;
    this->timePoint = std::chrono::system_clock::from_time_t(std::mktime(&date));
}

bool Date::operator<=(const Date &other) const
{
    return this->timePoint <= other.timePoint;
}

Date Date::addDays(int days) const
{
    std::chrono::system_clock::time_point newTimePoint = this->timePoint + std::chrono::hours(24 * days);
    std::time_t newTime = std::chrono::system_clock::to_time_t(newTimePoint);
    std::tm newDate = *std::localtime(&newTime);
    return Date(newDate.tm_year + 1900, newDate.tm_mon + 1, newDate.tm_mday);
}

std::string Date::toString() const
{
    std::time_t time = std::chrono::system_clock::to_time_t(this->timePoint);
    std::tm date = *std::localtime(&time);
    std::stringstream ss;
    ss << std::put_time(&date, "%Y-%m-%d");
    return ss.str();
}

std::string Date::toJson() const
{
    std::stringstream ss;
    ss << "{";
    ss << "\"date\":\"" << this->toString() << "\",";
    ss << "\"name\":\"" << this->getName() << "\",";
    ss << "\"isHoliday\":" << (this->getIsHoliday() ? "true" : "false") << ",";
    ss << "\"year\":" << this->getYear() << ",";
    ss << "\"month\":" << this->getMonth() << ",";
    ss << "\"day\":" << this->getDay();
    ss << "}";
    return ss.str();
}

void Date::setName(const std::string &name)
{
    this->name = name;
}

std::string Date::getName() const
{
    return this->name;
}

void Date::setIsHoliday(bool isHoliday)
{
    this->isHoliday = isHoliday;
}

bool Date::getIsHoliday() const
{
    return this->isHoliday;
}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getYear() const
{
    return this->year;
}

void Date::setMonth(int month)
{
    this->month = month;
}

int Date::getMonth() const
{
    return this->month;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::getDay() const
{
    return this->day;
}
