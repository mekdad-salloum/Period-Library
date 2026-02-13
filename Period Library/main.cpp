#include <iostream>
#include "clsDate.h"
#include "clsPeriod.h"

using namespace std;

int main()
{
    // Create Dates
    clsDate Date1(1, 1, 2024);
    clsDate Date2(10, 1, 2024);

    clsDate Date3(5, 1, 2024);
    clsDate Date4(15, 1, 2024);

    clsDate Date5(20, 1, 2024);
    clsDate Date6(25, 1, 2024);

    clsDate TestDate(7, 1, 2024);

    // Create Periods
    clsPeriod Period1(Date1, Date2);
    clsPeriod Period2(Date3, Date4);
    clsPeriod Period3(Date5, Date6);

    cout << "=== Printing Periods ===\n";
    Period1.Print(); cout << endl;
    Period2.Print(); cout << endl;
    Period3.Print(); cout << endl;

    // ----------------------------------------------------

    cout << "\n=== Period Length ===\n";

    cout << "Period1 Length (without end date): "
        << Period1.Length() << endl;

    cout << "Period1 Length (including end date): "
        << Period1.Length(true) << endl;

    // ----------------------------------------------------

    cout << "\n=== Date Inclusion Test ===\n";

    if (Period1.IsDateInPeriod(TestDate))
        cout << "TestDate is inside Period1\n";
    else
        cout << "TestDate is NOT inside Period1\n";

    // ----------------------------------------------------

    cout << "\n=== Overlap Check ===\n";

    if (clsPeriod::IsOverlapPeriods(Period1, Period2))
        cout << "Period1 and Period2 Overlap\n";
    else
        cout << "Period1 and Period2 Do NOT Overlap\n";

    if (clsPeriod::IsOverlapPeriods(Period1, Period3))
        cout << "Period1 and Period3 Overlap\n";
    else
        cout << "Period1 and Period3 Do NOT Overlap\n";

    // ----------------------------------------------------

    cout << "\n=== Overlap Days Count ===\n";

    cout << "Overlap Days between Period1 and Period2: "
        << clsPeriod::CountOverlapDays(Period1, Period2)
        << endl;

    cout << "Overlap Days between Period1 and Period3: "
        << clsPeriod::CountOverlapDays(Period1, Period3)
        << endl;

    return 0;
}
