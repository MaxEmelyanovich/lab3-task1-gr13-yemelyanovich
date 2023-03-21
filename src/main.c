//Maksim Yemelyanovich 13

//main function that takes dateCurrent fields from command line arguments
//and prints result of function dayCount

#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

int main (int argc, char *argv[])
{
  Date dateStart={1,1,1970}, dateCurrent={atoi(argv[1]), atoi(argv[2]), atoi(argv[3])};
	printf ("%i", dayCount(dateCurrent, dateStart));
  return 0;
}