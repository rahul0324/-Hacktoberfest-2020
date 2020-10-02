#include <iostream>
using namespace std;
class complex
{
   public :
      int real_part, imaginary_part;
};

int main()
{
   complex a, b, c;
   cout << "Enter a and b where a + ib is the first complex number."; //enter the numbers by providing space between them(Eg:3 4)
   cin >> a.real_part;
   cin >> a.imaginary_part;
   cout << "Enter c and d where c + id is the second complex number.";
   cin >> b.real_part;
   cin >> b.imaginary_part;

   c.real_part = a.real_part + b.real_part;
   c.imaginary_part = a.imaginary_part + b.imaginary_part;

   if (c.imaginary_part >= 0)
      cout << "Sum of two complex numbers = " << c.real_part << " + " << c.imaginary_part << "i";
   else
      cout << "Sum of two complex numbers = " << c.real_part << " " << c.imaginary_part << "i";

   return 0;
}
