#include <stdio.h>
#include "main.h"

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */
int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 1;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
