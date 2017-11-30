/** Complex Number Calculations
 *  Cathal Hogan
 *  C00184521
 *  29/11/2017
 */

//Pre-Processor Directives
#include <iostream>

//Creates a structure to have real and imaginery numbers */
struct complexnumber
{
    float real;
    float imag;
};

/**< User-defined functions */
complexnumber add       (complexnumber struct1, complexnumber struct2);
complexnumber subtract  (complexnumber struct1, complexnumber struct2);
complexnumber multiply  (complexnumber struct1, complexnumber struct2);
complexnumber divide    (complexnumber struct1, complexnumber struct2);

using namespace std;

int main()
{
    //vairables become stuctures for complex numbers
    struct complexnumber entry1, entry2, Addition, Subtraction, Multiply, Division;

    //Real number entered
    cout << "Enter a Real number: " << endl;
    cin >> entry1.real;

   //Imaginary number entered
    cout << "Enter an Imaginary number: " << endl;
    cin >> entry1.imag;

    cout << "Enter another Real number: " << endl;
    cin >> entry2.real;

    cout << "Enter another Imaginary number: " << endl;
    cin >> entry2.imag;

    //Calculates the each of the sums using the real and imaginary numbers entered above
     Addition= add(entry1, entry2);

    Subtraction = subtract(entry1, entry2);

    Multiply = multiply(entry1, entry2);

    Division = divide(entry1, entry2);
        //Displays the results
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " + "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Addition.real << "+" << Addition.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " - "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Subtraction.real << "+" << Subtraction.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " x "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Multiply.real << "+" << Multiply.imag << "j" << endl;
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " / "<<entry2.real<< "+" << entry2.imag<< "j"<< " = " << Division.real << "+" << Division.imag << "j" << endl;


    return 0;
}
//Sub function to add real and imaginary numbers
complexnumber add(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Addition;


    Addition.real = struct1.real + struct2.real;

    Addition.imag = struct1.imag + struct2.imag;

    return Addition;
}

// Sub function to subtract real and imaginary numbers
complexnumber subtract(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Subtraction;

    Subtraction.real = struct1.real - struct2.real;
    Subtraction.imag = struct1.imag - struct2.imag;

    return Subtraction;
}

// Sub function to multiply real and imaginary numbers
complexnumber multiply(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Multiply;


    Multiply.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Multiply.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Multiply;
}

// Sub function to divide real and imaginary numbers
complexnumber divide(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Division;

    float denominator;


    Division.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Division.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Division.real = Division.real/denominator;
    Division.imag = Division.imag/denominator;

    return Division;
}
