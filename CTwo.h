#pragma once
#pragma once
#include <string>
#include "COne.h";
using namespace std;
class CTwo
{
public:
    CTwo();
    CTwo(const long l, const COne &obj);
    CTwo(const CTwo& obj);
    virtual ~CTwo();

    CTwo* operator = (const CTwo &obj);
    COne* GetObj();
    long GetL();
    virtual void Print();
private:
    long l;
    COne* Obj;
};
