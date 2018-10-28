//Answers for Exercise 1-4, K&R's The C Programming Language 

#include <stdio.h>
/*print Celsius to Fahrenheit table
  for celsius = 0, 20,...,300*/
int main(void){

  float  fahr, celsius;
  int lower, upper, step;

  lower = 0; //lower limit of table
  upper = 300; //upper limit of table
  step = 20; //step size

  celsius = lower;
  printf("Deg C Deg F\n");
  while (celsius <= upper) {
    fahr = 9.0 * celsius / 5.0 + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  printf("GOODBYE!\n");
  return 0;
}