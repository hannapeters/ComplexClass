// mytest.h
#include <cxxtest/TestSuite.h>
#include "Complex.cpp"
#include <fstream>

class MyTestSuite : public CxxTest::TestSuite 
{
public:

    void testCreate_default_complex( void )
    {
      Complex a;  
      TS_ASSERT(getReal(a)==0);
      TS_ASSERT(getImag(a)==0);
    }

    void testCreate_complex_real( void )
    {
      Complex a(2);  
      TS_ASSERT(getReal(a)==2);
      TS_ASSERT(getImag(a)==0);
    }

    void testCreate_complex_imag( void )
    {
      Complex a(3,2);  
      TS_ASSERT(getReal(a)==3);
      TS_ASSERT(getImag(a)==2);
    }

    void testCreate_complex_copy( void )
    {
      Complex a(4,1);  
      Complex b(a);
      TS_ASSERT(getReal(b)==4);
      TS_ASSERT(getImag(b)==1);
    }

    void test_copy_operator( void )
    {
     Complex a(2,2);  
     Complex b;
     b=a;
     TS_ASSERT(getReal(b)==getReal(a));
     TS_ASSERT(getImag(b)==getImag(a));
    }

    void test_selfAdd_operator( void )
    {
     Complex a(3,1);  
     Complex b(6,1);
     a+=b;
     TS_ASSERT(getReal(a)==9);
     TS_ASSERT(getImag(a)==2);
    }

    void test_selfAdd_operator_scalar( void )
    {
     Complex a(3,1);  
     
     a+=5;
     TS_ASSERT(getReal(a)==8);
     TS_ASSERT(getImag(a)==1);
    }

    void test_selfSub_operator( void )
    {
     Complex a(3,1);  
     Complex b(6,1);
     a-=b;
     TS_ASSERT(getReal(a)==-3);
     TS_ASSERT(getImag(a)==0);
    }

    void test_selfSub_operator_scalar( void )
    {
     Complex a(3,1);  
     
     a-=2;
     TS_ASSERT(getReal(a)==1);
     TS_ASSERT(getImag(a)==1);
    }

    void test_selfMult_operator( void )
    {
      Complex a(3,3);
      Complex b(2,2); 
      b*=a;

      TS_ASSERT(getReal(b)==0);
      TS_ASSERT(getImag(b)==12);
    }

    void test_selfMult_operator_scalar( void )
    {
      Complex a(3,3); 
      a*=3;

      TS_ASSERT(getReal(a)==9);
      TS_ASSERT(getImag(a)==9);
    }

    void test_unary_plus_operator( void )
    {
     Complex a(4,4);
     Complex b=+a;  
     TS_ASSERT(getReal(a)==getReal(b));
     TS_ASSERT(getImag(a)==getImag(b));
    }

    void test_unary_sub_operator( void )
    {
     Complex a(4,4);
     Complex b=-a;  
     TS_ASSERT(getReal(-a)==getReal(b));
     TS_ASSERT(getImag(-a)==getImag(b));
    }

    void test_Add_operator( void )
    {
     Complex a(4,1);  
     Complex b(6,1);
     Complex c=a+b;
     TS_ASSERT(getReal(c)==10);
     TS_ASSERT(getImag(c)==2);
    }

    void test_Add_operator_scalar( void )
    {
     Complex a(4,1);  
     Complex c=a+2;
     TS_ASSERT(getReal(c)==6);
     TS_ASSERT(getImag(c)==1);
    }

    void test_Add_operator_literal( void )
    {
     Complex a(4,1);  
     Complex c=a+(2+3.0_i);
     TS_ASSERT(getReal(c)==6);
     TS_ASSERT(getImag(c)==4);
    }

    void test_Sub_operator( void )
    {
     Complex a(3,1);  
     Complex b(5,1);
     Complex c=a-b;
     TS_ASSERT(getReal(c)==-2);
     TS_ASSERT(getImag(c)==0);
    }

    void test_Sub_operator_scalar( void )
    {
     Complex a(3,1);  
     Complex c=a-2;
     TS_ASSERT(getReal(c)==1);
     TS_ASSERT(getImag(c)==1);
    }

    void test_Sub_operator_literal( void )
    {
     Complex a(4,1);  
     Complex c=a-(2+3.0_i);
     TS_ASSERT(getReal(c)==2);
     TS_ASSERT(getImag(c)==-2);
    }

    void test_chaining_add_sub( void )
    {
     Complex a(4,1);  
     Complex c=a-(2+3.0_i)+Complex(2,1);
     TS_ASSERT(getReal(c)==4);
     TS_ASSERT(getImag(c)==-1);
    }

    void test_chaining_assign( void )
    {
     Complex a;  
     Complex b;
      a=b=0;
     TS_ASSERT(a==0);
     TS_ASSERT(b==0);
    }

    void test_chaining_mult_add( void )
    {
      Complex a(4,4); 
      Complex c=a*4/Complex(2,2)*2;
      TS_ASSERT(getReal(c)==16);
      TS_ASSERT(getImag(c)==0);
    }

    void test_comparison_operator_returns_true( void )
    {
     Complex a(1,1);  
     Complex b(1,1);
     TS_ASSERT((a==b)==1);
    }

    void test_comparison_operator_literal_returns_true( void )
    {
     Complex a(1,1);  

     TS_ASSERT((a==1+1.0_i)==1);
    }

    void test_comparison_operator_returns_true_scalar( void )
    {
     Complex a(1,0);  
     TS_ASSERT((a==1)==1);
    }

    void test_comparison_operator_returns_false( void )
    {
     Complex a(1,1);  
     Complex b(1,0);
     TS_ASSERT((a==b)==0);
    }

    void test_negated_comparison_operator_returns_true( void )
    {
     Complex a(1,0);  
     Complex b(1,1);
     TS_ASSERT((a!=b)==1);
    }

    void test_negated_comparison_operator_returns_true_scalar( void )
    {
     Complex a(1,3);  
     TS_ASSERT((a!=2)==1);
    }

    void test_negated_comparison_operator_returns_false( void )
    {
     Complex a(1,1);  
     Complex b(1,1);
     TS_ASSERT((a!=b)==0);
    }

    void test_negated_comparison_operator_literal_returns_false( void )
    {
     Complex a(1,1);  

     TS_ASSERT((a!=1+1.0_i)==0);
    }

    void test_abs_operator_1stQuad( void )
    {
     Complex a(3,4);  
     TS_ASSERT(abs(a)==5);
    }
    void test_abs_operator_2stQuad( void )
    {
     Complex a(-3,4);  
     TS_ASSERT(abs(a)==5);
    }
    void test_abs_operator_3stQuad( void )
    {
     Complex a(-3,-4);  
     TS_ASSERT(abs(a)==5);
    }
    void test_abs_operator_4stQuad( void )
    {
     Complex a(3,-4);  
     TS_ASSERT(abs(a)==5);
    }
    void test_abs_operator_default( void )
    {
     Complex a;  
     TS_ASSERT(abs(a)==0);
    }
    void test_abs_operator_xAxis( void )
    {
     Complex a(4,0);  
     TS_ASSERT(abs(a)==4);
    }
    void test_abs_operator_yAxis( void )
    {
     Complex a(0,4);  
     TS_ASSERT(abs(a)==4);
    }
    void test_lessThan_operator( void )
    {
     Complex a(3,1);  
     Complex b(4,2);
     TS_ASSERT(a<b);
    }
      
    void test_mult_operator( void )
    {
      Complex a(4,4);
      Complex b(2,2); 
      Complex c=a*b;

      TS_ASSERT(getReal(c)==0);
      TS_ASSERT(getImag(c)==16);
    }
           
    void test_mult_operator_scalar( void )
    {
      Complex a(4,4); 
      Complex c=a*4;
      TS_ASSERT(getReal(c)==16);
      TS_ASSERT(getImag(c)==16);
    }

    void test_div_operator( void )
    {
      Complex a(4,4);
      Complex b(2,2); 
      Complex c=a/b; 
      TS_ASSERT(getReal(c)==2);
      TS_ASSERT(getImag(c)==0);
    }
    void test_div_operator_scalar( void )
    {
      Complex a(3,3); 
      Complex c=a/1.5; 
      TS_ASSERT(getReal(c)==2);
      TS_ASSERT(getImag(c)==2);
    }


    void test_selfDiv_operator( void )
    {
      Complex a(3,3);  
      Complex b(2,1);
      a/=b;
      TS_ASSERT(getReal(a)==1.8);
      TS_ASSERT(getImag(a)==0.6);
    }
    void test_selfDiv_operator_scalar( void )
    {
      Complex a(3,3);  
      a/=1.5;
      TS_ASSERT(getReal(a)==2);
      TS_ASSERT(getImag(a)==2);
    }

    void testComplex_is_os_stream(void)
    {
      Complex a(5,5);
      std::ofstream MyFile("text.txt");
      MyFile << a;
      MyFile.close();
      Complex b;
      std::ifstream MyReadFile("text.txt");
      MyReadFile >> b;
      MyReadFile.close();
      TS_ASSERT(getReal(a)==getReal(b));
      TS_ASSERT(getImag(a)==getImag(b));      
    } 
    void testComplex_is_os_stream_literal(void)
    {
      Complex a=1+1.0_i;
      std::ofstream MyFile("text.txt");
      MyFile << a;
      MyFile.close();
      Complex b;
      std::ifstream MyReadFile("text.txt");
      MyReadFile >> b;
      MyReadFile.close();
      TS_ASSERT(getReal(a)==getReal(b));
      TS_ASSERT(getImag(a)==getImag(b));      
    } 


  
};
