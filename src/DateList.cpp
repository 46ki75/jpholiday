#include "../include/DateList.h"
#include <fstream>
#include <iostream>

DateList::DateList(const Date &startDate, const Date &endDate)
{
    Date currentDate = startDate;
    while (currentDate <= endDate)
    {
        dates.push_back(currentDate);
        currentDate = currentDate.addDays(1);
    }
}

std::vector<Date> DateList::getDates() const
{
    return this->dates;
}

void DateList::addDate(const Date &date)
{
    dates.push_back(date);
}

void DateList::writeDatesToJsonFiles()
{
    for (const auto &date : dates)
    {
        // Generate filename (return value of Date::toString() + ".json")
        std::string fileName = "out/" + date.toString() + ".json";

        // Open File Stream
        std::ofstream outFile(fileName);

        // Get JSON string from Date::toJson() and write to file
        if (outFile.is_open())
        {
            outFile << date.toJson();
            outFile.close();
        }
        else
        {
            // Error handling when files cannot be opened
            std::cerr << "Could not open file: " << fileName << std::endl;
        }
    }
}