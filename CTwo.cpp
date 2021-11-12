#include "CTwo.h"

CTwo::CTwo()
{
    s = "";
    p = new COne();
}

CTwo::CTwo(string s_, COne* p_)
{
    s = s_;
    p = p_;
}

CTwo::CTwo(const  CTwo& two)
{
    s = two.s;
    p = two.p;
}

CTwo::~CTwo()
{
    delete p;
}

CTwo& CTwo::operator=(const CTwo& two)
{
    CTwo* c = new CTwo(two.s, two.p);
    return *c;
}

string CTwo::getS()
{
    return s;
}

void CTwo::setS(string s_)
{
    s = s_;
}

COne* CTwo::getP()
{
    return p;
}

void CTwo::setP(COne* p_)
{
    p = p_;
}

void CTwo::print()
{
    cout << "s: " << s << endl;
    p->Print();
}