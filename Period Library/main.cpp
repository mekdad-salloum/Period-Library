#include <iostream>
#include "clsDate.h"
#include "clsPeriod.h"

using namespace std;

int main()
{
    //Create Dates
    clsDate Date1(1, 1, 2024);
    clsDate Date2(10, 1, 2024);

    clsDate Date3(5, 1, 2024);
    clsDate Date4(15, 1, 2024);

    clsDate Date5(20, 1, 2024);
    clsDate Date6(25, 1, 2024);

    //Create Periods (Constructor)
    clsPeriod Period1(Date1, Date2);
    clsPeriod Period2(Date3, Date4);
    clsPeriod Period3(Date5, Date6);

    cout << "=== Printing Periods ===\n";
    Period1.Print();
    cout << endl;

    Period2.Print();
    cout << endl;

    Period3.Print();
    cout << endl;


    cout << "\n=== Using Static Function IsOverlapPeriods ===\n";

    if (clsPeriod::IsOverlapPeriods(Period1, Period2))
        cout << "Period1 and Period2 Overlap\n";
    else
        cout << "Period1 and Period2 Do NOT Overlap\n";


    if (clsPeriod::IsOverlapPeriods(Period1, Period3))
        cout << "Period1 and Period3 Overlap\n";
    else
        cout << "Period1 and Period3 Do NOT Overlap\n";


    cout << "\n=== Using Member Function IsOverLapWith ===\n";

    if (Period1.IsOverLapWith(Period2))
        cout << "Period1 overlaps with Period2\n";
    else
        cout << "Period1 does NOT overlap with Period2\n";


    if (Period1.IsOverLapWith(Period3))
        cout << "Period1 overlaps with Period3\n";
    else
        cout << "Period1 does NOT overlap with Period3\n";


    return 0;
}
