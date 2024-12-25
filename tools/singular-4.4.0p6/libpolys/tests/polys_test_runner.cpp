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
#include "./polys_test.h"

static PolysTestSuite suite_PolysTestSuite;

static CxxTest::List Tests_PolysTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PolysTestSuite( "./polys_test.h", 209, "PolysTestSuite", suite_PolysTestSuite, Tests_PolysTestSuite );

static class TestDescription_PolysTestSuite_test_Z13_t : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z13_t() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1832, "test_Z13_t" ) {}
 void runTest() { suite_PolysTestSuite.test_Z13_t(); }
} testDescription_PolysTestSuite_test_Z13_t;

static class TestDescription_PolysTestSuite_test_QQ_t : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_QQ_t() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1856, "test_QQ_t" ) {}
 void runTest() { suite_PolysTestSuite.test_QQ_t(); }
} testDescription_PolysTestSuite_test_QQ_t;

static class TestDescription_PolysTestSuite_test_Z11_x_y_z : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z11_x_y_z() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1879, "test_Z11_x_y_z" ) {}
 void runTest() { suite_PolysTestSuite.test_Z11_x_y_z(); }
} testDescription_PolysTestSuite_test_Z11_x_y_z;

static class TestDescription_PolysTestSuite_test_QQ_x_y_z : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_QQ_x_y_z() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1902, "test_QQ_x_y_z" ) {}
 void runTest() { suite_PolysTestSuite.test_QQ_x_y_z(); }
} testDescription_PolysTestSuite_test_QQ_x_y_z;

static class TestDescription_PolysTestSuite_test_Z13_t_GF : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z13_t_GF() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1926, "test_Z13_t_GF" ) {}
 void runTest() { suite_PolysTestSuite.test_Z13_t_GF(); }
} testDescription_PolysTestSuite_test_Z13_t_GF;

static class TestDescription_PolysTestSuite_test_Q_Ext_a : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Q_Ext_a() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 1968, "test_Q_Ext_a" ) {}
 void runTest() { suite_PolysTestSuite.test_Q_Ext_a(); }
} testDescription_PolysTestSuite_test_Q_Ext_a;

static class TestDescription_PolysTestSuite_test_Q_Ext_b : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Q_Ext_b() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 2069, "test_Q_Ext_b" ) {}
 void runTest() { suite_PolysTestSuite.test_Q_Ext_b(); }
} testDescription_PolysTestSuite_test_Q_Ext_b;

static class TestDescription_PolysTestSuite_test_Z_17_Ext_a : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Z_17_Ext_a() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 2214, "test_Z_17_Ext_a" ) {}
 void runTest() { suite_PolysTestSuite.test_Z_17_Ext_a(); }
} testDescription_PolysTestSuite_test_Z_17_Ext_a;

static class TestDescription_PolysTestSuite_test_Q_Ext_s_t : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Q_Ext_s_t() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 2294, "test_Q_Ext_s_t" ) {}
 void runTest() { suite_PolysTestSuite.test_Q_Ext_s_t(); }
} testDescription_PolysTestSuite_test_Q_Ext_s_t;

static class TestDescription_PolysTestSuite_test_Q_Ext_Performance : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Q_Ext_Performance() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 2405, "test_Q_Ext_Performance" ) {}
 void runTest() { suite_PolysTestSuite.test_Q_Ext_Performance(); }
} testDescription_PolysTestSuite_test_Q_Ext_Performance;

static class TestDescription_PolysTestSuite_test_Q_Ext_s_t_NestedFractions : public CxxTest::RealTestDescription {
public:
 TestDescription_PolysTestSuite_test_Q_Ext_s_t_NestedFractions() : CxxTest::RealTestDescription( Tests_PolysTestSuite, suiteDescription_PolysTestSuite, 2526, "test_Q_Ext_s_t_NestedFractions" ) {}
 void runTest() { suite_PolysTestSuite.test_Q_Ext_s_t_NestedFractions(); }
} testDescription_PolysTestSuite_test_Q_Ext_s_t_NestedFractions;

#include "cxxtest/Root.cpp"
