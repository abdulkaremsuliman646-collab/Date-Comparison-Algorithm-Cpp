#include <iostream>
using namespace std;

struct stDate {
    short Day;
    short Month;
    short Year;
};

bool isLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Enter a Month (1-12): ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Enter a Year: ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}





bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return  (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true :
            ((Date1.Month == Date2.Month) ? Date1.Day < Date2.Day : false)) : false);
}

int main()
{
    cout << "Enter Date 1:\n";
    stDate Date1 = ReadFullDate();

    cout << "\nEnter Date 2:\n";
    stDate Date2 = ReadFullDate();

    if (IsDate1BeforeDate2(Date1, Date2))
    {
        cout << "\nYes, Date1 is Less than Date2\n";
    }
    else
    {
        cout << "\nNo, Date1 is NOT Less than Date2\n";
    }

    

    system("pause>0");
    return 0;
}