/* hello.c */
#include <stdio.h>
#include <math.h>
#include <cstdlib>

typedef struct
{
  int day;
  int month;
  int year;
} Date;

int dayCount(Date dateCurrent, Date dateStart)
{
  int result = 0, yearCount = dateCurrent.year - dateStart.year;
  result += yearCount*365 + round((double)yearCount/4.0);
  for(int i = dateCurrent.month; i < dateCurrent.month; i++)
  {
    switch(i)
      {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          result+=31;
          break;
        case 2:
          if(dateCurrent.year%4 == 0)
          {
            result+=29;
          }
          else
          {
            result+=28;
          }         
          break;
        default:
          result+=30;
          break;
      }
  }
  result += dateCurrent.day - dateStart.day;
  return result;
}

int main (int argc, char *argv[])
{
  Date dateStart={1,1,1970}, dateCurrent={atoi(argv[1]), atoi(argv[2]), atoi(argv[3])};
	printf ("%i", dayCount(dateCurrent, dateStart));
  return 0;
}