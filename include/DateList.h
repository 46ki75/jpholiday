#ifndef DATELIST_H
#define DATELIST_H

#include <vector>
#include "Date.h"

class DateList
{
public:
    DateList(const Date &startDate, const Date &endDate);
    std::vector<Date> getDates() const;
    void addDate(const Date &date);
    void writeDatesToJsonFiles();

private:
    std::vector<Date> dates;
};

#endif
