#include <stdio.h>
#include <stdlib.h>
  
  struct item {
    char * itemName;
    int quantity;
    float price;
    float cost; 
  }; 


void edit_struct (struct item * ptr ) {
 
  
  printf("Please enter the item name \n"); 
  scanf("%s", ptr->itemName); 
  printf("Please enter the item quantity \n"); 
  scanf("%d", &ptr->quantity); 
  printf("Please enter the item price \n");
  scanf("%f", &ptr->price); 

  ptr->cost = ptr->quantity * ptr->price;
  
  
};


void print_struct (struct item * ptr) {
  
  printf("The name of the item is %s\n", ptr->itemName);
  printf("The quantity is %d \n", ptr->quantity);
  printf("The price is %lf \n", ptr->price);
  printf("The cost is %.2lf\n", ptr->cost); 

}; 

int main () {


  struct item  myItem;  
  struct item * p = &myItem; 
  p->itemName = malloc(50 * sizeof(char)); 
  edit_struct(p); 
  print_struct(p); 
  return 0; 
}
