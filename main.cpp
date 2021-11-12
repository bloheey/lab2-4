#include <iostream>
#include "COne.h"
#include "CTwo.h"
#include "CThree.h"
#include "CFour.h"
using namespace std;

void printAll(CTwo* two[], int n) {
    for (int i = 0; i < n; i++) { //с первого по последний элемент
        two[i]->print(); //вызвать функцию принт
        cout << endl;
    }
}

int main(){
    COne *one = new COne((char*)("One"),1.0f);//обьект класс COne

    const int n = 3;//размерность
    CTwo *two[n]; //массив указателей
    string s = "Two";
    two[0] = new CTwo(s, one);//первый элемент
    two[1] = new CThree(3, s, one); //второй элемент
    two[2] = new CFour('4', 3, s, one); //третий элемент
    printAll(two, n); //вызов функции
}