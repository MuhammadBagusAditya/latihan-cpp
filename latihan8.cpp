#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 5, y = 3;
    float a = 25.8900;
    const float PHI = 3.14;
    int hasil_1;
    float hasil_2;

    hasil_1 = trunc(a);
    cout << "hasil_1 = " << hasil_1 << endl;

    hasil_2 = min(5.0, 2.0);
    cout << "min(5.0, 2.0) = " << hasil_2 << endl;

    hasil_2 = max(5.0, 2.0);
    cout << "max(5.0, 2.0) = " << hasil_2 << endl;

    hasil_2 = round(2.3);
    cout << "round(2.3) = " << hasil_2 << endl;

    hasil_2 = round(2.8);
    cout << "round(2.8) = " << hasil_2 << endl;

    hasil_2 = ceil(2.3);
    cout << "ceil(2.3) = " << hasil_2 << endl;

    hasil_2 = ceil(2.8);
    cout << "ceil(2.8) = " << hasil_2 << endl;

    hasil_2 = floor(2.3);
    cout << "floor(2.3) = " << hasil_2 << endl;

    hasil_2 = floor(2.8);
    cout << "floor(2.8) = " << hasil_2 << endl;

    hasil_2 = pow(2, 3);
    cout << "2^3 = " << hasil_2 << endl;

    hasil_2 = pow(2, 4);
    cout << "2^4 = " << hasil_2 << endl;

    hasil_2 = sqrt(16);
    cout << "sqrt(16) = " << hasil_2 << endl;

    hasil_2 = abs(-0.17);
    cout << "abs(-0.17) = " << hasil_2 << endl;

    hasil_2 = log(5.5);
    cout << "log(5.5) = " << hasil_2 << endl;

    hasil_2 = log10(5.5);
    cout << "log10(5.5) = " << hasil_2 << endl;

    hasil_2 = sin(90 * PHI / 180);
    cout << "sin(90) = " << hasil_2 << endl;

    hasil_2 = sin(45 * PHI / 180);
    cout << "sin(45) = " << hasil_2 << endl;

    hasil_2 = cos(90 * PHI / 180);
    cout << "cos(90) = " << hasil_2 << endl;

    hasil_2 = cos(45 * PHI / 180);
    cout << "cos(45) = " << hasil_2 << endl;


    return 0;
}
