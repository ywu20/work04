#include<stdio.h>

int p1(){
  int sum = 0;
  int i;
  for(i=3;i<1000;i+=3){
    sum+=i;
  }
  for(i=5;i<1000;i+=5){
    if(i%3!=0){
      sum+=i;
    }
  }
  return sum;
}



int p6(){
  int sum_of_square = 0;
  int square_of_sum = 0;
  int i=1;
  for(;i<101;i++){
    sum_of_square+=i*i;
    square_of_sum+=i;
  }
  square_of_sum*= square_of_sum;
  return square_of_sum-sum_of_square;
}
