#ifndef BIRTHDAYDATEBITS_H
#define BIRTHDAYDATEBITS_H

struct TbirthdayDateBits
{
    unsigned int blueBit    : 6; // 0, 1, 2, 3, 4, 5
    unsigned int            : 4; // 6, 7, 8, 9
    unsigned int greenBit   : 5; // 10, 11, 12, 13, 14
    unsigned int            : 1; // 15
    unsigned int redBit     : 3; // 16, 17, 18
    unsigned int            : 14; // the rest unused bits
};

union TbirthdayDate
{
    // this is the full content of the union (full unsigned long word)
    unsigned long inputDate;
    // these are the "pieces" (selected bits) taken from that full word
    TbirthdayDateBits dateBits;
};


#endif // BIRTHDAYDATEBITS_H
