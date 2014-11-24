/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_C01_SumOfDigitsTest_init = false;
#include "/var/www/html/codeit/workspace/C01_SumOfDigits_exercise/src/C01_SumOfDigitsTest.h"

static C01_SumOfDigitsTest suite_C01_SumOfDigitsTest;

static CxxTest::List Tests_C01_SumOfDigitsTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_C01_SumOfDigitsTest( "/var/www/html/codeit/workspace/C01_SumOfDigits_exercise/src/C01_SumOfDigitsTest.h", 5, "C01_SumOfDigitsTest", suite_C01_SumOfDigitsTest, Tests_C01_SumOfDigitsTest );

static class TestDescription_suite_C01_SumOfDigitsTest_test_sum_pos_int : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_C01_SumOfDigitsTest_test_sum_pos_int() : CxxTest::RealTestDescription( Tests_C01_SumOfDigitsTest, suiteDescription_C01_SumOfDigitsTest, 15, "test_sum_pos_int" ) {}
 void runTest() { suite_C01_SumOfDigitsTest.test_sum_pos_int(); }
} testDescription_suite_C01_SumOfDigitsTest_test_sum_pos_int;

static class TestDescription_suite_C01_SumOfDigitsTest_test_sum_zero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_C01_SumOfDigitsTest_test_sum_zero() : CxxTest::RealTestDescription( Tests_C01_SumOfDigitsTest, suiteDescription_C01_SumOfDigitsTest, 20, "test_sum_zero" ) {}
 void runTest() { suite_C01_SumOfDigitsTest.test_sum_zero(); }
} testDescription_suite_C01_SumOfDigitsTest_test_sum_zero;

static class TestDescription_suite_C01_SumOfDigitsTest_test_sum_neg_int : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_C01_SumOfDigitsTest_test_sum_neg_int() : CxxTest::RealTestDescription( Tests_C01_SumOfDigitsTest, suiteDescription_C01_SumOfDigitsTest, 25, "test_sum_neg_int" ) {}
 void runTest() { suite_C01_SumOfDigitsTest.test_sum_neg_int(); }
} testDescription_suite_C01_SumOfDigitsTest_test_sum_neg_int;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
