#include <iostream>
#include <iomanip>

using namespace std;

void fun1()
{
   float f1 = 0.1f, f2 = 0.3f, f3 = 0.4f;
   float f4 = (f1 + f2) + f3;
   float f5 = f1 + (f2 + f3);
   // Ad. 1 Be default a maximum of 6 decimal places is printed with no trailing zeros. That's why it looks like f4 and f5 are equal.
   // The difference between f4 and f5 results from the binary represenation of floating point number
   cout << setprecision (16)  << f4 << endl;
   cout << f5 << endl;

   if (f4 == f5) {
   cout << "f4 == f5" << endl;
   } else {
   cout << "f4 != f5" << endl;
   }

   // Ad. 2 Using ternary operator we can make the code shorter while keepig it clear at the same time
   cout << ((f4 == f5) ? "f4 == f5" : "f4 != f5") << endl;
}

int absInt(int x)
{
   return (x >= 0) ? x : -x;
}

void switchDemo2(char c)
{
   switch (c) {
   case 'y':
      cout << "'y' matched" << endl;
   case 'n':
      cout << "'n' matched" << endl;
   case 'c':
      cout << "'c' matched" << endl;
   default:
      cout << "Default case, please select 'y','n' or 'c'" << endl;
   }
   // Ad.3 Switch looks at the cases from top to bottom.
   // Without 'break' command the switch executes all the lines of code starting from the case that is a match.
}

int main()
{
   fun1();
   switchDemo2('n');
   cout << "absInt(-3) = " << absInt(-3) << endl;

   return 0;
}
