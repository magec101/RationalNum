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
bool suite_RationalNumTest_init = false;
#include "/var/www/html/codeit/workspace/RationalNum/src/RationalNumTest.h"

static RationalNumTest suite_RationalNumTest;

static CxxTest::List Tests_RationalNumTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RationalNumTest( "/var/www/html/codeit/workspace/RationalNum/src/RationalNumTest.h", 11, "RationalNumTest", suite_RationalNumTest, Tests_RationalNumTest );

static class TestDescription_suite_RationalNumTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalNumTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_RationalNumTest, suiteDescription_RationalNumTest, 21, "test_Unit_Test_1" ) {}
 void runTest() { suite_RationalNumTest.test_Unit_Test_1(); }
} testDescription_suite_RationalNumTest_test_Unit_Test_1;

static class TestDescription_suite_RationalNumTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RationalNumTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_RationalNumTest, suiteDescription_RationalNumTest, 35, "test_Unit_Test_2" ) {}
 void runTest() { suite_RationalNumTest.test_Unit_Test_2(); }
} testDescription_suite_RationalNumTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
