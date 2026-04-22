# 📅 DateLibrary

A comprehensive C++ Date Library that provides a wide range of date manipulation,
calculation, and formatting utilities — built for ease of use and extensibility.

---

## 🚀 Features

- Full date representation (Day, Month, Year)
- Date validation and leap year detection
- Date arithmetic (add/subtract days, months, years)
- Date comparison operators
- Day and month name retrieval
- Date formatting options
- Day-of-week calculations
- Date difference calculations
- Business day support
- String parsing and conversion

---

## 🏗️ Project Structure
DateLibrary/
├── Header Files/
│   ├── clsDate.h        # Core Date class declarations
│   └── clsString.h      # String utility helper class
├── Source Files/
│   ├── clsString.cpp    # String utility implementations
│   └── DateLibrary.cpp  # Main entry point
└── README.md

---

## 🛠️ Classes

### `clsDate`
The core class representing a calendar date with full manipulation support.

#### Constructors
| Constructor | Description |
|---|---|
| `clsDate()` | Initializes to today's date |
| `clsDate(day, month, year)` | Initializes to a specific date |
| `clsDate(string)` | Parses date from a string |

#### Date Information
| Method | Description |
|---|---|
| `GetDay()` | Returns the day |
| `GetMonth()` | Returns the month |
| `GetYear()` | Returns the year |
| `GetDayName()` | Returns the name of the day (e.g. Monday) |
| `GetMonthName()` | Returns the name of the month (e.g. January) |
| `IsLeapYear()` | Checks if the year is a leap year |
| `IsValidDate()` | Checks if the date is valid |

#### Date Arithmetic
| Method | Description |
|---|---|
| `AddDays(n)` | Adds n days to the date |
| `AddMonths(n)` | Adds n months to the date |
| `AddYears(n)` | Adds n years to the date |
| `SubtractDays(n)` | Subtracts n days from the date |
| `SubtractMonths(n)` | Subtracts n months from the date |
| `SubtractYears(n)` | Subtracts n years from the date |

#### Date Comparison
| Method | Description |
|---|---|
| `IsEqual(date)` | Checks if two dates are equal |
| `IsBefore(date)` | Checks if date is before another |
| `IsAfter(date)` | Checks if date is after another |

#### Date Calculations
| Method | Description |
|---|---|
| `DayOfWeek()` | Returns the day of the week (0–6) |
| `DaysInMonth()` | Returns number of days in the month |
| `DaysInYear()` | Returns number of days in the year |
| `DifferenceInDays(date)` | Returns difference in days between two dates |
| `DifferenceInMonths(date)` | Returns difference in months |
| `DifferenceInYears(date)` | Returns difference in years |

#### Business Days
| Method | Description |
|---|---|
| `IsWeekend()` | Checks if the date falls on a weekend |
| `IsBusinessDay()` | Checks if the date is a business day |
| `AddBusinessDays(n)` | Adds n business days to the date |
| `BusinessDaysUntil(date)` | Counts business days until another date |

#### Formatting & Conversion
| Method | Description |
|---|---|
| `ToString()` | Returns date as `DD/MM/YYYY` string |
| `ToShortString()` | Returns date as `DD/MM/YY` |
| `ToLongString()` | Returns full format e.g. `Monday 01 January 2025` |

---

### `clsString`
A helper utility class used internally for string operations such as parsing,
splitting, and trimming date strings.

---

## 📌 Usage Example

```cpp
#include "clsDate.h"
#include <iostream>
using namespace std;

int main() {
    clsDate today;
    cout << "Today: " << today.ToString() << endl;

    clsDate birthday(15, 6, 1995);
    cout << "Birthday: " << birthday.ToLongString() << endl;

    cout << "Days until today: " << birthday.DifferenceInDays(today) << endl;

    clsDate future = today;
    future.AddDays(30);
    cout << "30 days from now: " << future.ToString() << endl;

    return 0;
}
```

---

## ⚙️ Requirements

- C++11 or later
- Visual Studio 2019/2022 (or any C++ compiler)
- Windows / Linux / macOS compatible

---

## 📄 License

This project is open-source and free to use for educational and personal purposes.

---

## 🙋‍♂️ Author

**ILYASS** — Built as a personal C++ utility library for date handling.