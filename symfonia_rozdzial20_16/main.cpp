#include <iostream>
#include "birthdayDateBits.h"

using namespace std;

// define a new object of the union (unsigned long type)
TbirthdayDate userInputDate;

int main()
{
    // enter a number in unsigned long type
    cout << "Please enter a date in the format DDMMYYYY: " << endl;
    cin >> userInputDate.inputDate;

    // view only selected bits from the input file (unsigned int type)
    cout << "Blue bits (0, 1, 2, 3, 4, 5): " << userInputDate.dateBits.blueBit << endl;
    cout << "Green bits (10, 11, 12, 13, 14): " << userInputDate.dateBits.greenBit << endl;
    cout << "Red bits (16, 17, 18): " << userInputDate.dateBits.redBit << endl;

    return 0;
}
