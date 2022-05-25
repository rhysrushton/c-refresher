#include <stdio.h>

int main () {

  // you can have structures inside of arrays; so an array of structs

  struct today {

    int date;
    int time;
    int year; 

  };

  // we have an array of ten structs. 
  struct today arr[10]; 

  int i;
  for(i =0; i< 10; i++) {
    arr[i].date = i;
    arr[i].time = i*10 ;
    arr[i].year = i+2000;
    printf("The date is %d\n", arr[i].date);
    printf("The time is %d\n", arr[i].time);
    printf("The year is %d\n", arr[i].year);
  }


  //can also have structs that contain arrays
  struct month{
    int numberOfDays;
    char name[3];
  };


  // You can create nested structures as well
  // DateAndTime struct contains two struct variables
  /*
  struct dateAndTime
  {
    struct date sdate;
    struct time stime; 
  }
  */ x

  

  
  return 0; 
}
