//Maksim Yemelyanovich 13
//Implementation of interface.h function dayCount

#include "interface.h"
#include <math.h>

int dayCount(Date dateCurrent, Date dateStart)
{
  int result = 0, yearCount = dateCurrent.year - dateStart.year;
  result += yearCount*365 + round((double)yearCount/4.0);
  for(int i = dateStart.month; i < dateCurrent.month; i++)
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