//Maksim Yemelyanovich 13

#ifndef INTERFACE_H
#define INTERFACE_H

//The structure Date describes the date and is used in client file(main.c),
//implementation is in server file(server.c)
//The function dayCount counts the number of days from dateStart to dateCurrent
//and is used in client file(main.c), implementation is in server file(server.c)
//

typedef struct
{
  int day;
  int month;
  int year;
} Date;

int dayCount(Date dateCurrent, Date dateStart);

#endif