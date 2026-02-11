#pragma once
#include "clsDate.h"

class clsPeriod
{

private:
    clsDate _StartDate;
    clsDate _EndDate;

public:

    clsPeriod(clsDate StartDate, clsDate EndDate)
    {
        _StartDate = StartDate;
        _EndDate = EndDate;
    }


    static bool IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2)
    {
        if (
            clsDate::CompareDates(Period2._EndDate, Period1._StartDate) == clsDate::enDateCompare::Before
            ||
            clsDate::CompareDates(Period2._StartDate, Period1._EndDate) == clsDate::enDateCompare::After
            )
            return false;
        else
            return true;
    }

    bool IsOverLapWith(clsPeriod Period2)
    {
        return IsOverlapPeriods(*this, Period2);
    }

    void Print()
    {
        cout << "Period Start: ";
        _StartDate.Print();


        cout << "Period End: ";
        _EndDate.Print();
    }
};
