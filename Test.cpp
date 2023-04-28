#include "doctest.h"
#include "sources/Fraction.hpp"


using namespace std;
using namespace ariel;

    Fraction F1(1,2);
    Fraction F2(1,4);
    Fraction F3(1,8);
    Fraction F4(3,4);
    Fraction F5(0,1);
    Fraction F6(3125,100000);
    Fraction F7(2,1);
    Fraction F8(2,2);
    float n1 = 0.5;
    float n2 = 0.25;
    float n3 = 0.125;

    TEST_CASE("Plus Case")
    {
        CHECK(F1+F2 == F4);
        CHECK(F1+n1 == 2*F1);
        CHECK(n3+F3 == F2);
        CHECK(F3+F3==F2);
        CHECK(F1++==3*F1);
        CHECK(++F1==F1);
    }

    TEST_CASE("minus Case")
    {
        CHECK(F1-F2 == F2);
        CHECK(F1-n1 == F5);
        CHECK(n2-F3 == F3);
        CHECK(F3-F2== -1*F3);
        CHECK(F1--==-1*F1);
    }

    TEST_CASE("Mult Case")
    {
        
        CHECK(F1*F2 == F3);
        CHECK(F1*n1 == F2);
        CHECK(n2*F3 == F6);
        CHECK(F3*F2 == F6);

    }

        TEST_CASE("Div Case")
    {
        
        CHECK(F1/F2 == F7);
        CHECK(F1/n1 == F8);
        CHECK(n2/F3 == F7);
        CHECK(F3/F2 == F1);

    }

        TEST_CASE("cmp Case")
    {
        
        CHECK_FALSE(F1<F2 );
        CHECK(F1>=n1);
        CHECK(F2>F3);
        CHECK(F3==n3);

    }


        TEST_CASE("Throws cases")
    {
        
        CHECK_THROWS(Fraction(1,0));
        CHECK_THROWS(Fraction(0,0));
        CHECK_THROWS(F1/0);

    }