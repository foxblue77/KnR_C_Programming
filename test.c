//Answers for Exercise 1-3, K&R's The C Programming Language 

#include <stdio.h>

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit of table
#define STEP 20 // step size

//print Fahrenheit-Celsius table
  
int main(void){

  int fahr;
  for (fahr = LOWER; fahr<=UPPER; fahr = fahr + STEP){
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
  
  printf("GOODBYE!\n");
  return 0;
}