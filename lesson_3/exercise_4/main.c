#include <stdio.h>

int main(void) {

int sec=0;
  int display_seconds=0;
  printf("ENTER THE NUMBER OF SECONDS :");
  scanf("%d",&sec);

  display_seconds=sec%60;
  int display_minutes = sec/60;
  int display_hours= display_minutes/60;

  printf("%.2d : %.2d : %.2d",display_hours,display_minutes%60,display_seconds);

  return 0;
;}
