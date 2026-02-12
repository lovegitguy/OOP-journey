// #include <iostream>
// using namespace std;

// int main()
// {
// int signedVar = 1500000000;
// unsigned int unsignVar = 1500000000; 
// double signedVarprecise = (static_cast<double>(signedVar) * 2) / 3; 
// unsignVar = (unsignVar * 2) / 3; 
// cout << "signedVar = " << signedVarprecise << endl; 
// cout << "unsignVar = " << unsignVar << endl;
// return 0;
// }




// // <cmath> FUNCTIONS (C++ Standard)

// // 1️⃣ Basic Power & Root Functions

// // sqrt(x) – square root

// // cbrt(x) – cube root

// // hypot(x, y) – √(x² + y²)

// // pow(x, y) – xʸ

// // 2️⃣ Exponential & Logarithmic Functions

// // exp(x) – eˣ

// // exp2(x) – 2ˣ

// // expm1(x) – eˣ − 1

// // log(x) – natural logarithm

// // log10(x) – base-10 logarithm

// // log2(x) – base-2 logarithm

// // log1p(x) – ln(1 + x)

// // 3️⃣ Trigonometric Functions
// // Circular

// // sin(x)

// // cos(x)

// // tan(x)

// // asin(x)

// // acos(x)

// // atan(x)

// // atan2(y, x)

// // Hyperbolic

// // sinh(x)

// // cosh(x)

// // tanh(x)

// // asinh(x)

// // acosh(x)

// // atanh(x)

// // 4️⃣ Rounding & Remainder Functions

// // ceil(x) – round up

// // floor(x) – round down

// // trunc(x) – truncate

// // round(x) – round to nearest

// // nearbyint(x) – round using current rounding mode

// // rint(x) – round to integer

// // fmod(x, y) – remainder

// // remainder(x, y) – IEEE remainder

// // remquo(x, y, int*) – remainder + quotient bits

// // 5️⃣ Floating-Point Manipulation

// // frexp(x, int*) – extract exponent

// // ldexp(x, exp) – multiply by 2ⁿ

// // modf(x, double*) – split integer & fraction

// // scalbn(x, n) – x × 2ⁿ

// // scalbln(x, long)

// // ilogb(x) – integer exponent

// // logb(x) – floating exponent

// // 6️⃣ Absolute Value & Differences

// // fabs(x) – absolute value

// // abs(x) – integer overloads (also <cstdlib>)

// // fdim(x, y) – positive difference

// // 7️⃣ Minimum, Maximum & Fused Operations

// // fmin(x, y)

// // fmax(x, y)

// // fma(x, y, z) – fused multiply-add

// // 8️⃣ Classification & Comparison

// // isfinite(x)

// // isinf(x)

// // isnan(x)

// // isnormal(x)

// // signbit(x)

// // fpclassify(x)

// // isgreater(x, y)

// // isgreaterequal(x, y)

// // isless(x, y)

// // islessequal(x, y)

// // islessgreater(x, y)

// // isunordered(x, y)

// // 9️⃣ Gamma & Error Functions

// // tgamma(x) – gamma function

// // lgamma(x) – log-gamma

// // erf(x) – error function

// // erfc(x) – complementary error function

// // 🔟 Special Functions (C++17+)

// // assoc_laguerre(n, m, x)

// // assoc_legendre(l, m, x)

// // beta(x, y)

// // comp_ellint_1(k)

// // comp_ellint_2(k)

// // comp_ellint_3(k, nu)

// // ellint_1(k, phi)

// // ellint_2(k, phi)

// // ellint_3(k, nu, phi)

// // expint(x)

// // hermite(n, x)

// // laguerre(n, x)

// // legendre(l, x)

// // riemann_zeta(x)

// // sph_bessel(n, x)

// // sph_legendre(l, m, theta)

// // sph_neumann(n, x)

// // cyl_bessel_i(n, x)

// // cyl_bessel_j(n, x)

// // cyl_bessel_k(n, x)

// // cyl_neumann(n, x)


#include <iostream>
using namespace std;

    class Area
    {
        private:
        int length;
        int breadth;

        public:
        Area()
        {

        }

        void getArea(int length, int breadth)
        {
            this->length=length;
            this->breadth=breadth;
           
        }

        void display()
        { 
            int area=length*breadth;
            cout<<area<<endl;
        }

        void getArea(float length,float breadth)
        {
            float area=length*breadth;
            cout<<area<<endl;
        }
    };
int main() {
    Area a1;
    Area a2;
    a2.getArea(2.3f,4.5f);
    a2.display();
    a1.getArea(4,5);
   a1.display();

    return 0;
}