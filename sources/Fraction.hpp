#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
namespace ariel{
    class Fraction    // the class Fraction
    {
    private: 
        float numerator; 
        float denominator;
    public: 
        Fraction(float numerator ,float denominator);

        Fraction operator+(const Fraction &other);
        friend Fraction operator+(const Fraction &first , float second);
        friend Fraction operator+(float first ,const Fraction &second );

        Fraction operator-(const Fraction &other);
        friend Fraction operator-(const Fraction &first , float second);
        friend Fraction operator-(float first ,const Fraction &second );

        Fraction operator*(const Fraction &other);
        friend Fraction operator*(const Fraction &first , float second);
        friend Fraction operator*(float first ,const Fraction &second );

        Fraction operator/(const Fraction &other);
        friend Fraction operator/(const Fraction &first , float second);
        friend Fraction operator/(float first ,const Fraction &second );

        Fraction operator++();
        Fraction operator++(int num);

        Fraction operator--();
        Fraction operator--(int num);


        bool operator==(const Fraction &other);
        bool operator==(float other);

        bool operator>(const Fraction &other);
        bool operator>(float other);

        bool operator<(const Fraction &other);
        bool operator<(float num);

        bool operator<=(const Fraction &other);
        bool operator<=(float other);

        bool operator>=(const Fraction &other);
        bool operator>=(float other);

        float Tofloat();
        Fraction operator>>(ostream& os);
        friend ostream& operator<<(ostream& os ,const Fraction &other);        
    };
}