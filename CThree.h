#pragma once
#include "CTwo.h"
class CThree :
        public CTwo
{
private:
    int i;
public:
    CThree() : CTwo() {};
    CThree(int i_, string s_, COne* p_) : CTwo(s_,p_) {
        i = i_;
    };
    CThree( CThree& three);
    ~CThree();
    int getI();
    void setI(int i_);
    virtual void print();

};

