#include <stdio.h>

int main() {
    int total_days, years, remaining_days, weeks, days;
    printf("Enter total number of days.... ");
    scanf("%d", &total_days);
    
    years = total_days / 365;
    remaining_days = total_days % 365;
    weeks = remaining_days / 7;
    days = remaining_days % 7;
    
    printf("%d year, %d week and %d days", years, weeks, days);
    
    return 0;
}