#pragma once
#include "CThree.h"
class CFour :
        public CThree
{
private:
    char c;
public:
    CFour() : CThree() {};
    CFour(char c_, int i_, string s_, COne* p_) : CThree(i_, s_, p_) {
        c = c_;
    };
    CFour(CFour& four);
    ~CFour();
    char getC();
    void setC(char c_);
    virtual void print();
};

