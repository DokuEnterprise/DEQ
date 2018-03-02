#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <math.h>

namespace DEQ{

    class Complex{
        public:
            Complex::Complex(int, int);
            int real, img;
            int Complex::add(Complex, Complex);
            int Complex::sub(Complex, Complex );
            int Complex::mult(Complex, Complex);
            int Complex::div(Complex, Complex);
            int Complex::getModulus(Complex);
        private:

    };
}

#endif