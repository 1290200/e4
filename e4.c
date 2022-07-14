#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,count1 = 0,count2 = 0;
        char name[50];

    printf("Who are you?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  for(i = 0; i < 5; i++){
    printf("Round%d: ", i + 1);
    int num = rand() % 2;

    if(num == 0){
      printf("Heads\n");
      count1++;
    }
    if(num == 1){
      printf("Tails\n");
      count2++;
    }
  }

  printf("Heads: %d. Tail: %d, count1, count2")
    if(count1 > count2){
        printf("%s won", name);
    }
    else{
        printf("%s lost", name);
    }

  return 0;
}