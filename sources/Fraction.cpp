#include "Fraction.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

namespace ariel{
    Fraction::Fraction(float numerator ,float denominator):numerator(numerator),denominator(denominator){} //parametric constructor
    
        Fraction Fraction:: operator+(const Fraction &other){return Fraction(1,1);}
        Fraction operator+(const Fraction &first , float second){return Fraction(1,1);}
        Fraction operator+(float first ,const Fraction &second){return Fraction(1,1);}

        Fraction Fraction:: operator-(const Fraction &other){return Fraction(1,1);} // must add all the "Fraction::"
        Fraction operator-(const Fraction &first , float second){return Fraction(1,1);}
        Fraction operator-(float first ,const Fraction &second ){return Fraction(1,1);}

        Fraction Fraction:: operator*(const Fraction &other){return Fraction(1,1);}
        Fraction operator*(const Fraction &first , float second){return Fraction(1,1);}
        Fraction operator*(float first ,const Fraction &second ){return Fraction(1,1);}

        Fraction Fraction:: operator/(const Fraction &other){return Fraction(1,1);}
        Fraction operator/(const Fraction &first , float second){return Fraction(1,1);}
        Fraction operator/(float first ,const Fraction &second ){return Fraction(1,1);}

        Fraction Fraction:: operator++(){return Fraction(1,1);}
        Fraction Fraction:: operator++(int num){return Fraction(1,1);}

        Fraction Fraction:: operator--(){return Fraction(1,1);}
        Fraction Fraction:: operator--(int num){return Fraction(1,1);}


        bool Fraction:: operator==(const Fraction &other){return true;}
        bool Fraction:: operator==(float other){return true;}

        bool Fraction:: operator>(const Fraction &other){return true;}
        bool Fraction:: operator>(float other){return true;}

        bool Fraction:: operator<(const Fraction &other){return true;}
        bool Fraction:: operator<(float num){return true;}

        bool Fraction:: operator<=(const Fraction &other){return true;}
        bool Fraction:: operator<=(float other){return true;}

        bool Fraction:: operator>=(const Fraction &other){return true;}
        bool Fraction:: operator>=(float other){return true;}

        float Fraction:: Tofloat(){return 0.0;}
        Fraction Fraction:: operator>>(ostream& os){return Fraction(1,1);}
        ostream& operator<<(ostream& os ,const Fraction &other){return os;}  
}