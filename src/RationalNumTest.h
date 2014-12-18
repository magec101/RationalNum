#include <cxxtest/TestSuite.h>


typedef struct rational
{ int num;
  int den;
} Rational; 

Rational rationalNumMain(int argc, const char** argv);

class RationalNumTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		const char* largv[] = {"1", "A", "1", "2", "1", "2"};
		
		Rational result = { 4, 4 };

        Rational final;
        
        final = rationalNumMain(6, largv);

		//result = rationalNumMain(6, largv);

		TS_ASSERT_SAME_DATA(&result, &final, sizeof(Rational));
	}
	
	void test_Unit_Test_2(){
		const char* largv[] = {"1", "M", "1", "2", "3", "4"};
		
		Rational result = { 3, 8 };

        Rational final;
        
        final = rationalNumMain(6, largv);

		//result = rationalNumMain(6, largv);

		TS_ASSERT_SAME_DATA(&result, &final, sizeof(Rational));
	}
	
}; 