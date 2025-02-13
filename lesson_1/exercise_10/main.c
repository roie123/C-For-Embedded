#include <stdio.h>

int main(void) {
    long id = 37;
    double hourly_wage = 40;
    int working_hours_per_day = 8; // how many hours the user is working each day
    int working_days_per_week = 5; // how many days the user is working each week
    int year_of_termination = 2025; // the year the company fired the user
    int year_of_employment = 2018; // the year the user started working in the company

    if (year_of_employment >= year_of_termination) {
        printf("No compensation is needed");
    }
    double salary = (hourly_wage*working_days_per_week*working_hours_per_day)*4;
    double compensation= salary*(year_of_termination-year_of_employment);

    printf("the total comp is : %lf",compensation);

    return 0;
}
