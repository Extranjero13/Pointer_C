#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

void printDate(Date* pDate){
    int m,d,y;
    m=pDate->month;
    d=pDate->day;
    y=pDate->year;
    printf("%4d-%2d-%2d\n",m,d,y);
}