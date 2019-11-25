#include "operatory.h"
#include "tstring.h"
using namespace std;

ostream& operator<<(ostream& strumien, const TString& s) {
    return strumien << (s.ptr ? s.ptr : "pusty");
}

istream& operator>>(istream& strumien, TString& s) {
    string tmp;
    getline(strumien,tmp);
    delete [] s.ptr;
    s.len = tmp.size();
    if (s.len>0) {
        s.ptr = new char[s.len+1];
        strcpy(s.ptr,tmp.c_str()); // c_str() zwraca const char* ze string
    } else {
        s.ptr = nullptr;
    }
    return strumien;
}

TString operator+(const TString& a, const TString& b) {
    TString tmp{a}; // TString tmp(a) albo TString tmp = a; albo auto tmp = a;
    tmp.insert(tmp.size(),b);
    return tmp; // tymczasowy obiekt musi byc zwrocony przez wartosc
}

TString& operator+=(TString& a, const TString& b) {
    return a = a + b;
}