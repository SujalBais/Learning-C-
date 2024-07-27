#include<stdio.h>

void count_to_100(); //function prototype(where type of function is defined)
int sum(int, int);


int main(){
  count_to_100(); //function call
  int add = sum(4, 5);
  printf("the sum is: %d", add);

  int x = 9;
  int y = 54;
  int z = sum(x,y);
  printf("the sum is: %d", z);
}

void count_to_100(){ //Function Definition
  for(int i = 1; i<100; i++) {
    printf("%d ", i);
  }
}
int sum(int first, int second){
  int addition = first + second;
  return addition;

}