#include "CThree.h"

CThree::CThree(CThree& three)
{
    i = three.i;
    setS(three.getS());
    setP(three.getP());
}

CThree::~CThree()
{
}

int CThree::getI()
{
    return i;
}

void CThree::setI(int i_)
{
    i = i_;
}

void CThree::print()
{
    cout << "i: " << i << endl;
    CTwo::print();
}
