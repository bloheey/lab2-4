#include <iostream>
#include "CTwo.h"
using namespace std;

COne::COne() : ch(new char[1]), f(0) {
    ch[0] = '\0';
}

COne::COne(const char* ch, float f) : ch(new char[strlen(ch) + 1]) {
    memcpy(this->ch, ch, strlen(ch) + 1);
    this->f = f;
}

COne::COne(const COne &obj) {
    this->ch = new char[strlen(obj.ch) + 1];
    this->ch = GetStringCopy(obj.ch);
    this->f = obj.f;
}

COne::~COne() {
    cout << "Destructor C1" << endl;
    delete[] this->ch;
}

COne* COne::operator = (const COne &obj) {
    if (this == &obj) {
        return this;
    }
    delete[] this->ch;
    this->ch = GetStringCopy(obj.ch);
    this->f = obj.f;
    return this;
}

void COne::Print() {
    cout << "------COne-----{" << endl;
    if (strlen(this->GetCh()) > 0)
    {
        cout << "Ch: " << ch << endl;
    }
    cout << "F: " << this->f << endl;
    cout << "------COne-----}" << endl;
}

const char* COne::GetCh() {
    return GetStringCopy((this->ch));
}

const float COne::GetF() {
    return f;
}

char* COne::GetStringCopy(const char* source) {
    int len = strlen(source) + 1;
    char* result = new char[len];
    memcpy(result, source, len);
    return result;
}
