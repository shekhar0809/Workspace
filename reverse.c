#include <stdio.h>

int main(void) {

  //take digit input from user
  printf("input a 3 digit number: " );
  int input = 0;

  do {
    scanf("%d", &input);
  }
  while(input > 999 || input < 100);

  int ones = input % 10;
  int hundereds = input/100 ;
  int tens = - (hundereds * 10) + (input/10);

  printf("the reverse number is %i\n", 100*ones + 10*tens + hundereds) ;
}
