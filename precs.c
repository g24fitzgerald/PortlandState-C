
//bitwise precedence

#include <stdio.h>

int main(void) {

   printf("%x\n", 8 >> 2 + 1 & 1);
   printf("%x\n", 8 >> 3 + 1 & 1);
   printf("%x\n", 8 >> 0 + 1 & 1);

}

