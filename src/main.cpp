#include <iostream>
#include "../include/Date.h"

int main()
{
    Date date(2023, 10, 3);

    std::cout << "Year: " << date.getYear() << std::endl;
    std::cout << "Month: " << date.getMonth() << std::endl;
    std::cout << "Day: " << date.getDay() << std::endl;

    date.setYear(2024);
    date.setMonth(1);
    date.setDay(1);

    std::cout << "Updated Date - Year: " << date.getYear() << ", Month: " << date.getMonth() << ", Day: " << date.getDay() << std::endl;

    return 0;
}
