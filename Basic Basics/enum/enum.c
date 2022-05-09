# include <stdio.h>


int main(){

  //Enums values are assigned as ints
  enum company  {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

  enum company xerox, google, ebay;
  xerox = XEROX;
  google = GOOGLE;
  ebay = EBAY;

  printf("%d\n", xerox);
  printf("%d\n", google);
  printf("%d\n", ebay); 
  
  return 0; 
}
