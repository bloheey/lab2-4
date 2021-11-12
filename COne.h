#pragma once
using namespace std;
class COne
{
public:
    COne();
    COne(const char* ch, float f);
    COne(const COne& obj);
    ~COne();

    COne* operator = (const COne& obj);
    const char* GetCh();
    const float GetF();
    void Print();
private:
    float f;
    char* ch;
    char* GetStringCopy(const char* source);
};
