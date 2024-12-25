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
#include "./coeffs_test.h"

static CoeffsTestSuite suite_CoeffsTestSuite;

static CxxTest::List Tests_CoeffsTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CoeffsTestSuite( "./coeffs_test.h", 353, "CoeffsTestSuite", suite_CoeffsTestSuite, Tests_CoeffsTestSuite );

static class TestDescription_CoeffsTestSuite_test_Z2m4 : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Z2m4() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 358, "test_Z2m4" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Z2m4(); }
} testDescription_CoeffsTestSuite_test_Z2m4;

static class TestDescription_CoeffsTestSuite_test_Zp101 : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Zp101() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 366, "test_Zp101" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Zp101(); }
} testDescription_CoeffsTestSuite_test_Zp101;

static class TestDescription_CoeffsTestSuite_test_Z2m8 : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Z2m8() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 372, "test_Z2m8" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Z2m8(); }
} testDescription_CoeffsTestSuite_test_Z2m8;

static class TestDescription_CoeffsTestSuite_test_Q : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Q() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 387, "test_Q" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Q(); }
} testDescription_CoeffsTestSuite_test_Q;

static class TestDescription_CoeffsTestSuite_test_R : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_R() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 392, "test_R" ) {}
 void runTest() { suite_CoeffsTestSuite.test_R(); }
} testDescription_CoeffsTestSuite_test_R;

static class TestDescription_CoeffsTestSuite_test_Z : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Z() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 398, "test_Z" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Z(); }
} testDescription_CoeffsTestSuite_test_Z;

static class TestDescription_CoeffsTestSuite_test_GF_toobig : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_GF_toobig() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 406, "test_GF_toobig" ) {}
 void runTest() { suite_CoeffsTestSuite.test_GF_toobig(); }
} testDescription_CoeffsTestSuite_test_GF_toobig;

static class TestDescription_CoeffsTestSuite_test_GF : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_GF() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 422, "test_GF" ) {}
 void runTest() { suite_CoeffsTestSuite.test_GF(); }
} testDescription_CoeffsTestSuite_test_GF;

static class TestDescription_CoeffsTestSuite_test_Zn3 : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Zn3() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 441, "test_Zn3" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Zn3(); }
} testDescription_CoeffsTestSuite_test_Zn3;

static class TestDescription_CoeffsTestSuite_test_Z2m2 : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Z2m2() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 455, "test_Z2m2" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Z2m2(); }
} testDescription_CoeffsTestSuite_test_Z2m2;

static class TestDescription_CoeffsTestSuite_test_LR : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_LR() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 464, "test_LR" ) {}
 void runTest() { suite_CoeffsTestSuite.test_LR(); }
} testDescription_CoeffsTestSuite_test_LR;

static class TestDescription_CoeffsTestSuite_test_LC : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_LC() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 469, "test_LC" ) {}
 void runTest() { suite_CoeffsTestSuite.test_LC(); }
} testDescription_CoeffsTestSuite_test_LC;

static class TestDescription_CoeffsTestSuite_test_Q_special : public CxxTest::RealTestDescription {
public:
 TestDescription_CoeffsTestSuite_test_Q_special() : CxxTest::RealTestDescription( Tests_CoeffsTestSuite, suiteDescription_CoeffsTestSuite, 474, "test_Q_special" ) {}
 void runTest() { suite_CoeffsTestSuite.test_Q_special(); }
} testDescription_CoeffsTestSuite_test_Q_special;

#include "cxxtest/Root.cpp"
