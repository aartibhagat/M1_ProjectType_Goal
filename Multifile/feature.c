#include "feature.h"
/*
    Avoid printf and scanf functions
*/
int addition_funtion(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int sum ;
int* divide(int numerator, int denominator )
{
    if(0 == denominator)
    {

    }
    int* var;

    return var;
}

/*
    Unit testing
*/

#include "stdio.h"
int main() {

  int A = 10;
  // Value, Address, Memory
  printf("Value of A = %d, Address of A is %p\n", &A);
  
  int Array[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("Value of Array[5] = %d\n", Array[5]);
  
  int B = &A;
  printf("Value of B = %d\n", B);
  
  int* ptr = &A;

float val = 10.3;
float* ptr_f0 = &val;

    int val1 = 0x40414243;
   
    char* ptr_c = &val;
    int* ptr_i = &val;
    float* ptr_f = &val;

    //print *ptr_c - 1 bytes from Memory

  printf("Value of ptr = %d, Value at ptr = %d\n", ptr, *ptr);
  
  return 0;
}