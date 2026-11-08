class Solution {
public:
    int dayOfYear(string date) {
        int year = 0;
        for(int i = 0;i < 4;i++)
        {
            year *= 10;
            year += date[i] - '0';
        }
        int month = 0;
        for(int i = 5;i < 7;i++)
        {
            month *= 10;
            month += date[i] - '0';
        }
        int day = 0;
        for(int i = 8;i < 10;i++)
        {
            day *= 10;
            day += date[i] - '0';
        }

        vector<int> noOfDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if( year % 4 == 0)
        {
            if( year % 100 == 0 )
            {
                if( year % 400 == 0)
                {
                    noOfDays[1]++;
                }
            }
            else
            {
                noOfDays[1]++;
            }
        }

        int totalDays = 0;

        for( int i = 0;i < month - 1;i++)
        {
            totalDays += noOfDays[i];
        }
        totalDays += day;

        return totalDays;

    }
};