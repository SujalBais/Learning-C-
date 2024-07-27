//Q30.Create a program to create a simple calculator that uses a switch statement to perform basic arithematic operations

#include<stdio.h>
int main(){
  float num1, num2;
  char operator;
  printf("Welcome to Calculator\n");
  printf("enter the first number : ");
  scanf("%f", &num1);
  printf("enter second number : ");
  scanf("%f", &num2);
  printf("enter the operation (+,-,*,/): ");
  scanf(" %c", &operator);

  switch(operator){

  case'+':
  printf("Addition of the two numbers: %f", num1+num2);
  break;
  case'-':
  printf("Subtraction of two numbers: %f", num1-num2);
  break;
  case'*':
  printf("Multiplication of two numbers: %f", num1*num2);
  break;
  case'/':
  printf("Division of two numbers: %f", num1/num2);
  break;
  default:
  printf("operator entered is invalid");
  break;
  }
  return 0;
}