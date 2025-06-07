#include <stdio.h>

/*31 months - 1,3,5,7,8,10,12
30 months - 4,6,9,11
28 month - 2*/

int is_not_leap(int year){
   return year % 100 == 0 ? year%400 : year%4;
}

int day_of_year(int month, int day, int year){
    int days = 0;
    --month;
    while (month>0)
    {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days += 31;
                break;
            case 4: case 6: case 9: case 11:
                days += 30;
                break;
            case 2: 
                if(is_not_leap(year)) 
                    {printf("is leap\n"); days += 28;} 
                    else days += 29;
                break;
        }
        month--;
    }
    return days + day;
}

int day_of_year1(int month, int day, int year)
{
  int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day_count = 0, i;

  for (i = 1; i < month; i++)
    day_count += num_days[i-1];

  /* adjust for leap years, assuming they are divisible by 4 */
  if (year % 4 == 0 && month > 2)
    day_count++;

  return day_count + day;
}

int main(){
    int month, day, year;
    printf("Enter month, day and year separated by space and I will give you the day between 0-366:\n");
    scanf("%d%d%d", &month, &day, &year);
    printf("Day in year for given date is: %d", day_of_year1(month, day, year)); 
    return 0;
}