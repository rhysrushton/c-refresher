//Include stdio library for printf
# include <stdio.h>

/* Basic hello world type programe */ 
int main() {

  printf("Enter your name\n");
  char name[20];
  scanf("%s",name);
  printf("Hello my name is %s \n", name);

  return 0; 

}
