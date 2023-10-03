#include <iostream>
#include "../include/Date.h"
#include "../include/DateList.h"

int main()
{
    // Create a Date object with start and end dates
    Date startDate(1950, 1, 1);
    Date endDate(2023, 10, 5);

    // Create an instance of DateList
    DateList dateList(startDate, endDate);

    // Get a list of dates from DateList
    std::vector<Date> dates = dateList.getDates();

    // Displays a list of retrieved dates
    for (const auto &date : dates)
    {
        std::cout << date.toJson() << std::endl;
    }

    dateList.writeDatesToJsonFiles();
    return 0;
}
