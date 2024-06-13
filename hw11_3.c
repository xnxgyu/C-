#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct date
    {
        int year;
        int month;
        int day;
    }
    holiday={2069,6,9},festival;
    
    do
    {
        printf("輸入2070: ");
        scanf("%d",&festival.year);
        fflush(stdin);
    }
    while(festival.year != 2070);
    
    do
    {
        printf("輸入6: ");
        scanf("%d",&festival.month);
        fflush(stdin);
    }
    while(festival.month != 6);
    
    do
    {
        printf("輸入9: ");
        scanf("%d",&festival.day);
        fflush(stdin);
    }
    while(festival.day != 9);
    
    printf("\nholiday = %02d/%02d/%d\n",holiday.month,holiday.day,holiday.year);
    printf("festival = %02d/%02d/%d\n",festival.month,festival.day,festival.year);
    printf("sizeof(struct date) = %d\n",sizeof(struct date));
    return 0;
    
}
