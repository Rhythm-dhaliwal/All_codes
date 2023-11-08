#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
public:
    int real, imaginary;

    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;

        temp.real = C1.real + C2.real;

        temp.imaginary = C1.imaginary + C2.imaginary;

        return temp;
    }
};

int main()
{
    Complex C1(3, 2);
    cout << "\n";
    cout << "complex number 1:\t " << C1.real << "+i" << C1.imaginary, cout << "\n"<< endl;

    Complex C2(9, 5);

    cout << "complex nummber 2:\t " << C2.real << "+i" << C2.imaginary, cout << "\n"<< endl;

    Complex C3;

    C3 = C3.addComp(C1, C2);

    cout << "sum of complex number:\t " << C3.real << "+i" << C3.imaginary, cout << "\n"<< endl;
    cout << "\n\nRHYTHM DHALIWAL\nIT (SHIFT-2)";
    return 0;
}
