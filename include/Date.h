#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int year, int month, int day);
    void setYear(int year);
    int getYear() const;
    void setMonth(int month);
    int getMonth() const;
    void setDay(int day);
    int getDay() const;

private:
    int year;
    int month;
    int day;
};

#endif // DATE_H
