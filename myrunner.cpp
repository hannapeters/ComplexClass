
#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "mytest.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "mytest.h", 6, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testCreate_default_complex : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCreate_default_complex() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 10, "testCreate_default_complex" ) {}
 void runTest() { suite_MyTestSuite.testCreate_default_complex(); }
} testDescription_suite_MyTestSuite_testCreate_default_complex;

static class TestDescription_suite_MyTestSuite_testCreate_complex_real : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCreate_complex_real() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 17, "testCreate_complex_real" ) {}
 void runTest() { suite_MyTestSuite.testCreate_complex_real(); }
} testDescription_suite_MyTestSuite_testCreate_complex_real;

static class TestDescription_suite_MyTestSuite_testCreate_complex_imag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCreate_complex_imag() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 24, "testCreate_complex_imag" ) {}
 void runTest() { suite_MyTestSuite.testCreate_complex_imag(); }
} testDescription_suite_MyTestSuite_testCreate_complex_imag;

static class TestDescription_suite_MyTestSuite_testCreate_complex_copy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCreate_complex_copy() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 31, "testCreate_complex_copy" ) {}
 void runTest() { suite_MyTestSuite.testCreate_complex_copy(); }
} testDescription_suite_MyTestSuite_testCreate_complex_copy;

static class TestDescription_suite_MyTestSuite_test_copy_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_copy_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 39, "test_copy_operator" ) {}
 void runTest() { suite_MyTestSuite.test_copy_operator(); }
} testDescription_suite_MyTestSuite_test_copy_operator;

static class TestDescription_suite_MyTestSuite_test_selfAdd_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfAdd_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 48, "test_selfAdd_operator" ) {}
 void runTest() { suite_MyTestSuite.test_selfAdd_operator(); }
} testDescription_suite_MyTestSuite_test_selfAdd_operator;

static class TestDescription_suite_MyTestSuite_test_selfAdd_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfAdd_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 57, "test_selfAdd_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_selfAdd_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_selfAdd_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_selfSub_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfSub_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 66, "test_selfSub_operator" ) {}
 void runTest() { suite_MyTestSuite.test_selfSub_operator(); }
} testDescription_suite_MyTestSuite_test_selfSub_operator;

static class TestDescription_suite_MyTestSuite_test_selfSub_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfSub_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 75, "test_selfSub_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_selfSub_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_selfSub_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_selfMult_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfMult_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 84, "test_selfMult_operator" ) {}
 void runTest() { suite_MyTestSuite.test_selfMult_operator(); }
} testDescription_suite_MyTestSuite_test_selfMult_operator;

static class TestDescription_suite_MyTestSuite_test_selfMult_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfMult_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 94, "test_selfMult_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_selfMult_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_selfMult_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_unary_plus_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_unary_plus_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 103, "test_unary_plus_operator" ) {}
 void runTest() { suite_MyTestSuite.test_unary_plus_operator(); }
} testDescription_suite_MyTestSuite_test_unary_plus_operator;

static class TestDescription_suite_MyTestSuite_test_unary_sub_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_unary_sub_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 111, "test_unary_sub_operator" ) {}
 void runTest() { suite_MyTestSuite.test_unary_sub_operator(); }
} testDescription_suite_MyTestSuite_test_unary_sub_operator;

static class TestDescription_suite_MyTestSuite_test_Add_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Add_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 119, "test_Add_operator" ) {}
 void runTest() { suite_MyTestSuite.test_Add_operator(); }
} testDescription_suite_MyTestSuite_test_Add_operator;

static class TestDescription_suite_MyTestSuite_test_Add_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Add_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 128, "test_Add_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_Add_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_Add_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_Add_operator_literal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Add_operator_literal() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 136, "test_Add_operator_literal" ) {}
 void runTest() { suite_MyTestSuite.test_Add_operator_literal(); }
} testDescription_suite_MyTestSuite_test_Add_operator_literal;

static class TestDescription_suite_MyTestSuite_test_Sub_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Sub_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 144, "test_Sub_operator" ) {}
 void runTest() { suite_MyTestSuite.test_Sub_operator(); }
} testDescription_suite_MyTestSuite_test_Sub_operator;

static class TestDescription_suite_MyTestSuite_test_Sub_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Sub_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 153, "test_Sub_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_Sub_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_Sub_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_Sub_operator_literal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_Sub_operator_literal() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 161, "test_Sub_operator_literal" ) {}
 void runTest() { suite_MyTestSuite.test_Sub_operator_literal(); }
} testDescription_suite_MyTestSuite_test_Sub_operator_literal;

static class TestDescription_suite_MyTestSuite_test_chaining_add_sub : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_chaining_add_sub() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 169, "test_chaining_add_sub" ) {}
 void runTest() { suite_MyTestSuite.test_chaining_add_sub(); }
} testDescription_suite_MyTestSuite_test_chaining_add_sub;

static class TestDescription_suite_MyTestSuite_test_chaining_assign : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_chaining_assign() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 177, "test_chaining_assign" ) {}
 void runTest() { suite_MyTestSuite.test_chaining_assign(); }
} testDescription_suite_MyTestSuite_test_chaining_assign;

static class TestDescription_suite_MyTestSuite_test_chaining_mult_add : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_chaining_mult_add() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 186, "test_chaining_mult_add" ) {}
 void runTest() { suite_MyTestSuite.test_chaining_mult_add(); }
} testDescription_suite_MyTestSuite_test_chaining_mult_add;

static class TestDescription_suite_MyTestSuite_test_comparison_operator_returns_true : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_comparison_operator_returns_true() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 194, "test_comparison_operator_returns_true" ) {}
 void runTest() { suite_MyTestSuite.test_comparison_operator_returns_true(); }
} testDescription_suite_MyTestSuite_test_comparison_operator_returns_true;

static class TestDescription_suite_MyTestSuite_test_comparison_operator_literal_returns_true : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_comparison_operator_literal_returns_true() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 201, "test_comparison_operator_literal_returns_true" ) {}
 void runTest() { suite_MyTestSuite.test_comparison_operator_literal_returns_true(); }
} testDescription_suite_MyTestSuite_test_comparison_operator_literal_returns_true;

static class TestDescription_suite_MyTestSuite_test_comparison_operator_returns_true_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_comparison_operator_returns_true_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 208, "test_comparison_operator_returns_true_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_comparison_operator_returns_true_scalar(); }
} testDescription_suite_MyTestSuite_test_comparison_operator_returns_true_scalar;

static class TestDescription_suite_MyTestSuite_test_comparison_operator_returns_false : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_comparison_operator_returns_false() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 214, "test_comparison_operator_returns_false" ) {}
 void runTest() { suite_MyTestSuite.test_comparison_operator_returns_false(); }
} testDescription_suite_MyTestSuite_test_comparison_operator_returns_false;

static class TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 221, "test_negated_comparison_operator_returns_true" ) {}
 void runTest() { suite_MyTestSuite.test_negated_comparison_operator_returns_true(); }
} testDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true;

static class TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 228, "test_negated_comparison_operator_returns_true_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_negated_comparison_operator_returns_true_scalar(); }
} testDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_true_scalar;

static class TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_false : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_false() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 234, "test_negated_comparison_operator_returns_false" ) {}
 void runTest() { suite_MyTestSuite.test_negated_comparison_operator_returns_false(); }
} testDescription_suite_MyTestSuite_test_negated_comparison_operator_returns_false;

static class TestDescription_suite_MyTestSuite_test_negated_comparison_operator_literal_returns_false : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negated_comparison_operator_literal_returns_false() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 241, "test_negated_comparison_operator_literal_returns_false" ) {}
 void runTest() { suite_MyTestSuite.test_negated_comparison_operator_literal_returns_false(); }
} testDescription_suite_MyTestSuite_test_negated_comparison_operator_literal_returns_false;

static class TestDescription_suite_MyTestSuite_test_abs_operator_1stQuad : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_1stQuad() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 248, "test_abs_operator_1stQuad" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_1stQuad(); }
} testDescription_suite_MyTestSuite_test_abs_operator_1stQuad;

static class TestDescription_suite_MyTestSuite_test_abs_operator_2stQuad : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_2stQuad() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 253, "test_abs_operator_2stQuad" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_2stQuad(); }
} testDescription_suite_MyTestSuite_test_abs_operator_2stQuad;

static class TestDescription_suite_MyTestSuite_test_abs_operator_3stQuad : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_3stQuad() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 258, "test_abs_operator_3stQuad" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_3stQuad(); }
} testDescription_suite_MyTestSuite_test_abs_operator_3stQuad;

static class TestDescription_suite_MyTestSuite_test_abs_operator_4stQuad : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_4stQuad() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 263, "test_abs_operator_4stQuad" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_4stQuad(); }
} testDescription_suite_MyTestSuite_test_abs_operator_4stQuad;

static class TestDescription_suite_MyTestSuite_test_abs_operator_default : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_default() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 268, "test_abs_operator_default" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_default(); }
} testDescription_suite_MyTestSuite_test_abs_operator_default;

static class TestDescription_suite_MyTestSuite_test_abs_operator_xAxis : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_xAxis() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 273, "test_abs_operator_xAxis" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_xAxis(); }
} testDescription_suite_MyTestSuite_test_abs_operator_xAxis;

static class TestDescription_suite_MyTestSuite_test_abs_operator_yAxis : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_abs_operator_yAxis() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 278, "test_abs_operator_yAxis" ) {}
 void runTest() { suite_MyTestSuite.test_abs_operator_yAxis(); }
} testDescription_suite_MyTestSuite_test_abs_operator_yAxis;

static class TestDescription_suite_MyTestSuite_test_lessThan_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_lessThan_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 283, "test_lessThan_operator" ) {}
 void runTest() { suite_MyTestSuite.test_lessThan_operator(); }
} testDescription_suite_MyTestSuite_test_lessThan_operator;

static class TestDescription_suite_MyTestSuite_test_mult_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_mult_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 290, "test_mult_operator" ) {}
 void runTest() { suite_MyTestSuite.test_mult_operator(); }
} testDescription_suite_MyTestSuite_test_mult_operator;

static class TestDescription_suite_MyTestSuite_test_mult_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_mult_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 300, "test_mult_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_mult_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_mult_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_div_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_div_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 308, "test_div_operator" ) {}
 void runTest() { suite_MyTestSuite.test_div_operator(); }
} testDescription_suite_MyTestSuite_test_div_operator;

static class TestDescription_suite_MyTestSuite_test_div_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_div_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 316, "test_div_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_div_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_div_operator_scalar;

static class TestDescription_suite_MyTestSuite_test_selfDiv_operator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfDiv_operator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 325, "test_selfDiv_operator" ) {}
 void runTest() { suite_MyTestSuite.test_selfDiv_operator(); }
} testDescription_suite_MyTestSuite_test_selfDiv_operator;

static class TestDescription_suite_MyTestSuite_test_selfDiv_operator_scalar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_selfDiv_operator_scalar() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 333, "test_selfDiv_operator_scalar" ) {}
 void runTest() { suite_MyTestSuite.test_selfDiv_operator_scalar(); }
} testDescription_suite_MyTestSuite_test_selfDiv_operator_scalar;

static class TestDescription_suite_MyTestSuite_testComplex_is_os_stream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testComplex_is_os_stream() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 341, "testComplex_is_os_stream" ) {}
 void runTest() { suite_MyTestSuite.testComplex_is_os_stream(); }
} testDescription_suite_MyTestSuite_testComplex_is_os_stream;

static class TestDescription_suite_MyTestSuite_testComplex_is_os_stream_literal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testComplex_is_os_stream_literal() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 354, "testComplex_is_os_stream_literal" ) {}
 void runTest() { suite_MyTestSuite.testComplex_is_os_stream_literal(); }
} testDescription_suite_MyTestSuite_testComplex_is_os_stream_literal;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
