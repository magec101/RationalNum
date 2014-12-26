#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct rational
{ int num;
  int den;
} Rational; 


Rational rationalNumMain(int argc, const char** argv) {

/* Write your code here */
	
}



#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	
	Rational result;

    result = rationalNumMain(argc, argv);
    printf("%d,%d", result.num, result.den);
    
    
    return 0;
}

#endif