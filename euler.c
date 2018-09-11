#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Problem 1
int sum_multiples(){
  int sum = 0;
  int counter = 0;
  while(counter < 1000){
    if((num % 3 == 0) || (num % 5 == 0)){
      sum += num;
    }
    num++;
  }
  return sum;
}

// Problem 6
int sum_square_difference(){
  int sum = 0;
  int sum2 = 0;
  int counter = 1;
  while(counter <= 100){
    sum += counter;
    sum2 += counter * counter;
    counter ++;
  }
  sum = sum* sum;
  return sum - sum2;
}
  
