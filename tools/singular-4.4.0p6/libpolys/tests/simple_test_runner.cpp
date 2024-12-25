/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include "cxxtest/TestListener.h"
#include "cxxtest/TestTracker.h"
#include "cxxtest/TestRunner.h"
#include "cxxtest/RealDescriptions.h"
#include "cxxtest/ErrorPrinter.h"

char* argv0 = NULL;
int main( int, char *argv[] ) {
argv0 = argv[0];
 return CxxTest::ErrorPrinter().run();
}
#include "./simple_test.h"

static SimplestTestSuite suite_SimplestTestSuite;

static CxxTest::List Tests_SimplestTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SimplestTestSuite( "./simple_test.h", 3, "SimplestTestSuite", suite_SimplestTestSuite, Tests_SimplestTestSuite );

static class TestDescription_SimplestTestSuite_testMyTest : public CxxTest::RealTestDescription {
public:
 TestDescription_SimplestTestSuite_testMyTest() : CxxTest::RealTestDescription( Tests_SimplestTestSuite, suiteDescription_SimplestTestSuite, 6, "testMyTest" ) {}
 void runTest() { suite_SimplestTestSuite.testMyTest(); }
} testDescription_SimplestTestSuite_testMyTest;

static class TestDescription_SimplestTestSuite_testSIZEOFLONG : public CxxTest::RealTestDescription {
public:
 TestDescription_SimplestTestSuite_testSIZEOFLONG() : CxxTest::RealTestDescription( Tests_SimplestTestSuite, suiteDescription_SimplestTestSuite, 12, "testSIZEOFLONG" ) {}
 void runTest() { suite_SimplestTestSuite.testSIZEOFLONG(); }
} testDescription_SimplestTestSuite_testSIZEOFLONG;

#include "cxxtest/Root.cpp"
