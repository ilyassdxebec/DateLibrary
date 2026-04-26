#include<iostream>
#include"clsDate.h"
#include"clsString.h"

using namespace std;

int main()
{
	clsDate Date1(15, 6, 2024);
	clsDate Date2(20, 9, 2025);

	cout << "Date1 : " << Date1.DateToString() << endl;
	cout << "Date2 : " << Date2.DateToString() << endl;

	cout << "\n--- System Date ---\n";
	cout << "System Date : " << clsDate::GetSystemDate().DateToString() << endl;

	cout << "\n--- IsValidDate ---\n";
	cout << "Is Date1 Valid : " << (Date1.IsValid() ? "Yes" : "No") << endl;
	cout << "Is 31/2/2024 Valid : " << (clsDate::IsValidDate(clsDate(31, 2, 2024)) ? "Yes" : "No") << endl;

	cout << "\n--- Leap Year ---\n";
	cout << "Is 2024 Leap Year : " << (clsDate::isLeapYear(2024) ? "Yes" : "No") << endl;
	cout << "Is 2023 Leap Year : " << (clsDate::isLeapYear(2023) ? "Yes" : "No") << endl;

	cout << "\n--- Days / Hours / Minutes / Seconds In A Year ---\n";
	cout << "Days In 2024    : " << clsDate::NumberOfDaysInAYear(2024) << endl;
	cout << "Hours In 2024   : " << clsDate::NumberOfHoursInAYear(2024) << endl;
	cout << "Minutes In 2024 : " << clsDate::NumberOfMinutesInAYear(2024) << endl;
	cout << "Seconds In 2024 : " << clsDate::NumberOfSecondsInAYear(2024) << endl;

	cout << "\n--- Days / Hours / Minutes / Seconds In A Month ---\n";
	cout << "Days In June 2024    : " << clsDate::NumberOfDaysInAMonth(6, 2024) << endl;
	cout << "Hours In June 2024   : " << clsDate::NumberOfHoursInAMonth(6, 2024) << endl;
	cout << "Minutes In June 2024 : " << clsDate::NumberOfMinutesInAMonth(6, 2024) << endl;
	cout << "Seconds In June 2024 : " << clsDate::NumberOfSecondsInAMonth(6, 2024) << endl;

	cout << "\n--- Day Of Week ---\n";
	cout << "Day Of Week Order For Date1 : " << Date1.DayOfWeekOrder() << endl;
	cout << "Day Short Name For Date1    : " << Date1.DayShortName() << endl;

	cout << "\n--- Month Short Name ---\n";
	cout << "Month Short Name For Date1 : " << Date1.MonthShortName() << endl;

	cout << "\n--- Days From Beginning Of Year ---\n";
	cout << "Days From Beginning Of Year For Date1 : " << Date1.DaysFromTheBeginingOfTheYear() << endl;

	cout << "\n--- GetDateFromDayOrderInYear ---\n";
	cout << "Date Of Day 100 In 2024 : " << clsDate::GetDateFromDayOrderInYear(100, 2024).DateToString() << endl;

	cout << "\n--- AddOneDay ---\n";
	clsDate TempDate(31, 12, 2024);
	cout << "Before AddOneDay : " << TempDate.DateToString() << endl;
	TempDate.AddOneDay();
	cout << "After  AddOneDay : " << TempDate.DateToString() << endl;

	cout << "\n--- AddDays ---\n";
	TempDate = clsDate(15, 6, 2024);
	cout << "Before AddDays 10 : " << TempDate.DateToString() << endl;
	TempDate.AddDays(10);
	cout << "After  AddDays 10 : " << TempDate.DateToString() << endl;

	cout << "\n--- GetDifferenceInDays ---\n";
	cout << "Difference Between Date1 And Date2 : " << clsDate::GetDifferenceInDays(Date1, Date2) << endl;
	cout << "Difference Including End Day       : " << clsDate::GetDifferenceInDays(Date1, Date2, true) << endl;

	cout << "\n--- CalculateMyAgeInDays ---\n";
	cout << "Age In Days For 1/1/2000 : " << clsDate::CalculateMyAgeInDays(clsDate(1, 1, 2000)) << endl;

	cout << "\n--- IsDate1BeforeDate2 ---\n";
	cout << "Is Date1 Before Date2 : " << (clsDate::IsDate1BeforeDate2(Date1, Date2) ? "Yes" : "No") << endl;

	cout << "\n--- IsDate1EqualDate2 ---\n";
	cout << "Is Date1 Equal Date2  : " << (clsDate::IsDate1EqualDate2(Date1, Date2) ? "Yes" : "No") << endl;

	cout << "\n--- IsDate1AfterDate2 ---\n";
	cout << "Is Date2 After Date1  : " << (clsDate::IsDate1AfterDate2(Date2, Date1) ? "Yes" : "No") << endl;

	cout << "\n--- CompareDates ---\n";
	clsDate::enDateCompare Result = clsDate::CompareDates(Date1, Date2);
	cout << "CompareDates Date1 vs Date2 : " << (Result == clsDate::Before ? "Before" : Result == clsDate::Equal ? "Equal" : "After") << endl;

	cout << "\n--- IsLastDayInMonth ---\n";
	cout << "Is 30/6/2024 Last Day In Month : " << (clsDate::IsLastDayInMonth(clsDate(30, 6, 2024)) ? "Yes" : "No") << endl;

	cout << "\n--- SwapDates ---\n";
	clsDate SwapDate1(1, 1, 2020);
	clsDate SwapDate2(5, 5, 2025);
	cout << "Before Swap : " << SwapDate1.DateToString() << " | " << SwapDate2.DateToString() << endl;
	clsDate::SwapDates(SwapDate1, SwapDate2);
	cout << "After  Swap : " << SwapDate1.DateToString() << " | " << SwapDate2.DateToString() << endl;

	cout << "\n--- Increase Functions ---\n";
	TempDate = clsDate(15, 6, 2024);
	cout << "Original               : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneWeek();
	cout << "After +1 Week          : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByXWeeks(2);
	cout << "After +2 Weeks         : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneMonth();
	cout << "After +1 Month         : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByXMonths(3);
	cout << "After +3 Months        : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByXDays(10);
	cout << "After +10 Days         : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneYear();
	cout << "After +1 Year          : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByXYears(5);
	cout << "After +5 Years         : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneDecade();
	cout << "After +1 Decade        : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByXDecades(2);
	cout << "After +2 Decades       : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneCentury();
	cout << "After +1 Century       : " << TempDate.DateToString() << endl;
	TempDate.IncreaseDateByOneMillennium();
	cout << "After +1 Millennium    : " << TempDate.DateToString() << endl;

	cout << "\n--- Decrease Functions ---\n";
	TempDate = clsDate(15, 6, 2024);
	cout << "Original               : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneDay();
	cout << "After -1 Day           : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByXDays(5);
	cout << "After -5 Days          : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneWeek();
	cout << "After -1 Week          : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByXWeeks(2);
	cout << "After -2 Weeks         : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneMonth();
	cout << "After -1 Month         : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByXMonths(3);
	cout << "After -3 Months        : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneYear();
	cout << "After -1 Year          : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByXYears(5);
	cout << "After -5 Years         : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneDecade();
	cout << "After -1 Decade        : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByXDecades(2);
	cout << "After -2 Decades       : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneCentury();
	cout << "After -1 Century       : " << TempDate.DateToString() << endl;
	TempDate.DecreaseDateByOneMillennium();
	cout << "After -1 Millennium    : " << TempDate.DateToString() << endl;

	cout << "\n--- IsEndOfWeek / IsWeekEnd / IsBusinessDay ---\n";
	cout << "Is Date1 End Of Week  : " << (Date1.IsEndOfWeek() ? "Yes" : "No") << endl;
	cout << "Is Date1 Weekend      : " << (Date1.IsWeekEnd() ? "Yes" : "No") << endl;
	cout << "Is Date1 Business Day : " << (Date1.IsBusinessDay() ? "Yes" : "No") << endl;

	cout << "\n--- Days Until End Of Week / Month / Year ---\n";
	cout << "Days Until End Of Week  : " << Date1.DaysUntilTheEndOfWeek() << endl;
	cout << "Days Until End Of Month : " << Date1.DaysUntilTheEndOfMonth() << endl;
	cout << "Days Until End Of Year  : " << Date1.DaysUntilTheEndOfYear() << endl;

	cout << "\n--- CalculateBusinessDays ---\n";
	cout << "Business Days Between Date1 And Date2 : " << clsDate::CalculateBusinessDays(Date1, Date2) << endl;

	cout << "\n--- CalculateVacationDays ---\n";
	cout << "Vacation Days Between Date1 And Date2 : " << clsDate::CalculateVacationDays(Date1, Date2) << endl;

	cout << "\n--- CalculateVacationReturnDate ---\n";
	cout << "Return Date After 10 Vacation Days From Date1 : " << clsDate::CalculateVacationReturnDate(Date1, 10).DateToString() << endl;

	cout << "\n--- Print Month Calendar ---\n";
	Date1.PrintMonthCalendar();

	cout << "\n--- Print Year Calendar ---\n";
	clsDate::PrintYearCalendar(2024);

	return 0;
}