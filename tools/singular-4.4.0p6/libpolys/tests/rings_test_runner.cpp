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
#include "./rings_test.h"

static PolysTestSuite suite_PolysTestSuite;

static CxxTest::List Tests_PolysTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PolysTestSuite( "./rings_test.h", 60, "PolysTestSuite", suite_PolysTestSuite, Tests_PolysTestSuite );

static class TestDescription_PolysTestSuite_test_Z13_t : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z13_t() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 63, "test_Z13_t" ) {}
 void runTest() { suite_PolysTestSuite.test_Z13_t(); }
} testDescription_PolysTestSuite_test_Z13_t;

static class TestDescription_PolysTestSuite_test_QQ_t : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_QQ_t() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 87, "test_QQ_t" ) {}
 void runTest() { suite_PolysTestSuite.test_QQ_t(); }
} testDescription_PolysTestSuite_test_QQ_t;

static class TestDescription_PolysTestSuite_test_Z11_x_y_z : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z11_x_y_z() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 110, "test_Z11_x_y_z" ) {}
 void runTest() { suite_PolysTestSuite.test_Z11_x_y_z(); }
} testDescription_PolysTestSuite_test_Z11_x_y_z;

static class TestDescription_PolysTestSuite_test_QQ_x_y_z : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_QQ_x_y_z() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 134, "test_QQ_x_y_z" ) {}
 void runTest() { suite_PolysTestSuite.test_QQ_x_y_z(); }
} testDescription_PolysTestSuite_test_QQ_x_y_z;

static class TestDescription_PolysTestSuite_test_Z13_t_GF : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z13_t_GF() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 158, "test_Z13_t_GF" ) {}
 void runTest() { suite_PolysTestSuite.test_Z13_t_GF(); }
} testDescription_PolysTestSuite_test_Z13_t_GF;

static class TestDescription_PolysTestSuite_test_QQ_x_y_z_ord_2_lp : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_QQ_x_y_z_ord_2_lp() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 201, "test_QQ_x_y_z_ord_2_lp" ) {}
 void runTest() { suite_PolysTestSuite.test_QQ_x_y_z_ord_2_lp(); }
} testDescription_PolysTestSuite_test_QQ_x_y_z_ord_2_lp;

#include "cxxtest/Root.cpp"
