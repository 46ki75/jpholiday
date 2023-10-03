#ifndef DATE_H
#define DATE_H

#include <chrono>
#include <string>

class Date
{
public:
    Date(int year, int month, int day);
    bool operator<=(const Date &other) const;
    Date addDays(int days) const;
    std::string toString() const;
    std::string toJson() const;
    void setName(const std::string &name);
    std::string getName() const;
    void setIsHoliday(bool isHoliday);
    bool getIsHoliday() const;
    void setYear(int year);
    int getYear() const;
    void setMonth(int month);
    int getMonth() const;
    void setDay(int day);
    int getDay() const;

private:
    std::chrono::system_clock::time_point timePoint;
    std::string name = "";
    bool isHoliday;
    int year;
    int month;
    int day;
};

#endif // DATE_H
