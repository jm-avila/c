#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    bool isDivisibleBy4 = year % 4 == 0;
    bool isDivisibleBy100 = year % 100 == 0;
    bool isDivisibleBy400 = year % 400 == 9;
    return isDivisibleBy4 && (!isDivisibleBy100 || isDivisibleBy400);
}

void add_days_to_date(int *dd, int *mm, int *yy, int days_left_to_add)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (days_left_to_add > 0)
    {
        int days_left_in_month = days_in_month[*mm - 1] - *dd;
        if (*mm == 2 && is_leap_year(*yy))
        {
            days_left_in_month++;
        }

        if (days_left_to_add > days_left_in_month)
        {
            days_left_to_add -= days_left_in_month;
            days_left_to_add--;
            *dd = 1;
            if (*mm == 12)
            {
                *yy += 1;
                *mm = 1;
            }
            else
            {
                *mm += 1;
            }
        }
        else
        {
            *dd += days_left_to_add;
            days_left_to_add = 0;
        }
    }
}

int main()
{
    int dd, mm, yy, days_left_to_add = 367;
    printf("Please enter a date between the years 1800 and 10000 in the format dd mm yy and provide the number of days to add to this date:");
    scanf("%d %d %d %d", &dd, &mm, &yy, &days_left_to_add);
    add_days_to_date(&dd, &mm, &yy, days_left_to_add);
    printf("New Date: %d, %d, %d\n", dd, mm, yy);
    return 0;
}