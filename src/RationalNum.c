#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct rational
{ int num;
  int den;
} Rational; 

Rational add_rat(Rational rat1, Rational rat2);
Rational sub_rat(Rational rat1, Rational rat2);
Rational multp_rat(Rational rat1, Rational rat2);
Rational div_rat(Rational rat1, Rational rat2);



Rational rationalNumMain(int argc, const char** argv) {

	Rational r1, r2, sum;
	char option;
	
	if (argc < 2)
	{
		scanf("%c", &option);
		scanf("%d", &r1.num);
		scanf("%d", &r1.den);
		scanf("%d", &r2.num);
		scanf("%d", &r2.den);
	}
	else
	{
		option = argv[1][0];
		r1.num = atoi(argv[2]);
		r1.den = atoi(argv[3]);
		r2.num = atoi(argv[4]);
		r2.den = atoi(argv[5]);
	}
	
   switch (option)
   {
   	 case 'A':
   	 return (add_rat(r1, r2));
   	 break;
   	 
   	 case 'S':
   	 return (sub_rat(r1, r2));
   	 break;
   	 
   	 case 'M':
   	 return (multp_rat(r1, r2));
   	 break;
   	 
   	 case 'D':
   	 return (div_rat(r1, r2));
   	 break;
   	
   }
	
}

Rational add_rat(Rational rat1, Rational rat2)
{
	Rational sum;

	sum.num = rat1.num * rat2.den + rat2.num * rat1.den;
	sum.den = rat1.den * rat2.den;
	
	return sum;
	
}

Rational sub_rat(Rational rat1, Rational rat2)
{
	Rational sum;

	sum.num = rat1.num * rat2.den - rat2.num * rat1.den;
	sum.den = rat1.den * rat2.den;
	
	return sum;
	
}

Rational multp_rat(Rational rat1, Rational rat2)
{
	Rational sum;

	sum.num = rat1.num * rat2.num ;
	sum.den = rat1.den * rat2.den;
	
	return sum;
	
}

Rational div_rat(Rational rat1, Rational rat2)
{
	Rational sum;

	sum.num = rat1.num * rat2.den ;
	sum.den = rat1.den * rat2.num;
	
	return sum;
	
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
	
	Rational result;

    result = rationalNumMain(argc, argv);
    printf("%d,%d", result.num, result.den);
    
    
    return 0;
}

#endif