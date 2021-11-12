#include "CFour.h"

CFour::CFour(CFour& four)
{
    c = four.c;
    setI(four.getI());
    setS(four.getS());
    setP(four.getP());
}

CFour::~CFour()
{
}

char CFour::getC()
{
    return c;
}

void CFour::setC(char c_)
{
    c = c_;
}

void CFour::print()
{
    cout << "c: " << c << endl;
    CThree::print();
}
