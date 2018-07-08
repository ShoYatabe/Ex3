#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int dice1, dice2, T;
  char name[20];

  printf("What is your name?\n> ");
  scanf("%s", name);
  printf("Hell, %s!\n", name);

  printf("Rolling the dice...\n");

  srand((int)time(NULL));
  
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  
  printf("Die 1: %d\n", dice1);
  printf("Die 2: %d\n", dice2);

  T = dice1 + dice2;

  printf("Total value: %d\n", T);
 
  return 0;
}
