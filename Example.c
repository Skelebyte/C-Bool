#include <stdio.h>
#include "Bool.h"

int main() {
  bool foo = false;
  bool bar = true;

  if(foo == true) {
    printf("foo is true!\n");    
  } else {
    printf("foo is false!\n");
  }

  if(bar == true) {
    printf("bar is true!\n");    
  } else {
    printf("bar is false!\n");
  }

  return 0;
  
}
