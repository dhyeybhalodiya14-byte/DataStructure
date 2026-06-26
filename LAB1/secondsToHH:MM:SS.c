#include <stdio.h>

int main() {
    int total_seconds, hours, remaining_seconds, minutes, seconds;
    printf("Enter total seconds.... ");
    scanf("%d", &total_seconds);
    
    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;
    
    printf("Time in HH:MM:SS format is... %d:%d:%d", hours, minutes, seconds);
    
    return 0;
}