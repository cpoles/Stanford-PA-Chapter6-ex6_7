//
//  rational.hpp
//  RationalNumbers
//
/*
 * File: rational.hpp
 * ----------------
 * This interface exports a class for representing rational numbers.
 */

#ifndef rational_hpp
#define rational_hpp

#include <iostream>
#include <string>


class Rational {
public:
    /*
     * Constructor: Rational
     * Usage: Rational zero;
     * Rational num(n);
     * Rational r(x, y);
     * ------------------------
     * Creates a Rational object. The default constructor creates the
     * rational number 0. The single-argument form creates a rational
     * equal to the specified integer, and the two-argument form creates
     * a rational number corresponding to the fraction x/y.
     */
    Rational();
    Rational(int n);
    Rational(int x, int y);
    
    /*
     * Method: toString()
     * Usage: string str = r.toString();
     * ---------------------------------
     * Returns the string representation of this rational number.
     */
    std::string toString();
    
#include "rationalpriv.h"
};

/*
 * Operator: <<
 * ------------
 * Overloads the << operator so that it is able to display Rational values.
 */

std::ostream & operator<<(std::ostream & os, Rational rat);

/*
 * Operator: +
 * Usage: r1 + r2
 * --------------
 * Overloads the + operator so that it performs addition on two
 * rational numbers.
 */
Rational operator+(Rational r1, Rational r2);
/*
 * Operator: -
 * Usage: r1 - r2
 * --------------
 * Overloads the - operator so that it performs subtraction on two
 * rational numbers.
 */
Rational operator-(Rational r1, Rational r2);
/*
 * Operator: *
 * Usage: r1 * r2
 * --------------
 * Overloads the * operator so that it performs multiplication on two
 * rational numbers.
 */
Rational operator*(Rational r1, Rational r2);
/*
 * Operator: /
 * Usage: r1 / r2
 * --------------
 * Overloads the / operator so that it performs division on two
 * rational numbers.
 */
Rational operator/(Rational r1, Rational r2);
/*
 * Operator: ==
 * Usage: bool isEqual = (r1 ==  r2)
 * --------------
 * Overloads the == operator so that it performs equality on two
 * rational numbers.
 */
bool operator==(Rational r1, Rational r2);
/*
 * Operator: !=
 * Usage: bool isNotEqual = (r1 !=  r2)
 * --------------
 * Overloads the != operator so that it performs inequality on two
 * rational numbers.
 */
bool operator!=(Rational r1, Rational r2);
/*
 * Operator: >
 * Usage: bool isGreater = (r1 >  r2)
 * --------------
 * Overloads the > operator so that it performs comparison on two
 * rational numbers.
 */
bool operator>(Rational r1, Rational r2);
/*
 * Operator: <
 * Usage: bool isLess = (r1 < r2)
 * --------------
 * Overloads the > operator so that it performs comparison on two
 * rational numbers.
 */
bool operator<(Rational r1, Rational r2);
/*
 * Operator: <=
 * Usage: bool isLess = (r1 <= r2)
 * --------------
 * Overloads the > operator so that it performs comparison on two
 * rational numbers.
 */
bool operator<=(Rational r1, Rational r2);
/*
 * Operator: >=
 * Usage: bool isGreaterOrEqual = (r1 >= r2)
 * --------------
 * Overloads the > operator so that it performs comparison on two
 * rational numbers.
 */
bool operator<=(Rational r1, Rational r2);

/* Operator += */
Rational & operator+=(Rational & r1, Rational r2);
/* Operator -= */
Rational & operator-=(Rational & r1, Rational r2);
/* Operator *= */
Rational & operator*=(Rational & r1, Rational r2);
/* Operator /= */
Rational & operator/=(Rational & r1, Rational r2);

/* Operator ++ (suffix) */
Rational operator++(Rational & r1, int);

/* Operator -- (suffix) */
Rational operator--(Rational & r1, int);

/* Operator ++ (prefix) */
Rational operator++(Rational & r1);

/* Operator -- (prefix) */
Rational operator--(Rational & r1);

#endif /* rational_hpp */
