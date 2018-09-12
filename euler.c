#include <stdio.h>
#include <stdlib.h>


// Problem 1
int sum_multiples(){
  int sum = 0;
  int counter = 0;
  while(counter < 1000){
    if((counter % 3 == 0) || (counter % 5 == 0)){
      sum += counter;
    }
    counter++;
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

int main(){
  printf("Problem 1: %d",sum_multiples());
  printf("Problem 6: %d",sum_square_difference());
  return 0;
}
  
  
