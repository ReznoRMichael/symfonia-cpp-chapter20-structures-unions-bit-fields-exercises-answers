#include "birthdayDateBits.h"

struct TbirthdayDateBits
{
    int blueBit    : 6; // 0, 1, 2, 3, 4, 5
    int            : 4; // 6, 7, 8, 9
    int greenBit   : 5; // 10, 11, 12, 13, 14
    int            : 1; // 15
    int redBit     : 3; // 16, 17, 18
    int            : 14; // the rest unused bits
};

union TbirthdayDate
{
    long inputDate;
    TbirthdayDateBits dateBits;
};
