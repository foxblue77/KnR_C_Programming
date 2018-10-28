//Answers for Exercise 1-5, K&R's The C Programming Language 

#include <stdio.h>
//print Fahrenheit-Celsius table
  
int main(void){

  int fahr;
  for (fahr = 300; fahr<=300; fahr = fahr - 20){
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr+32));
  }
  
  printf("GOODBYE!\n");
  return 0;
}