//Answers for Exercise 1-3, K&R's The C Programming Language 

#include <stdio.h>
/*print Fahrenheit-Celsius table
  for fahr = 0, 20,...,300*/
int main(void){

  float  fahr, celsius;
  int lower, upper, step;

  lower = 0; //lower limit of table
  upper = 300; //upper limit of table
  step = 20; //step size

  fahr = lower;
  printf("Deg F Deg C\n");
  while (fahr <= upper) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("GOODBYE!\n");
  return 0;
}