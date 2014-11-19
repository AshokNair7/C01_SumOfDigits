#include <cxxtest/TestSuite.h>

extern int c01_SumOfDigitsMain(int num);

class C01_SumOfDigitsTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}
	
	void test_sum_pos_int(){
		int sum = c01_SumOfDigitsMain(56);
		TS_ASSERT_EQUALS(11, sum);
	}
	
	void test_sum_zero(){
		int sum = c01_SumOfDigitsMain(0);
		TS_ASSERT_EQUALS(0, sum);
	}
	
	void test_sum_neg_int(){
		int sum = c01_SumOfDigitsMain(-42);
		TS_ASSERT_EQUALS(-6, sum);
	}
};