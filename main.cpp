#include <iostream>
#include <string>
#include <algorithm>
#include "tstring.h"
#include "operatory.h"
using namespace std;

auto fun(const char* s) {
    return TString(s);
}

int main() {
    TString s1;
    TString s2("dzien dobry");
    TString s3 = move(s2);
    s1 = fun("drugi obiekt");   // move(s3);
    cout << s1 << endl;
    //cin >> s1; 
    //cout << s1 << endl;
    s1.insert(0,"POCZATEK");
    s1.insert(s1.size(),"KONIEC");
    s1.insert(s1.size()/2,"SRODEK");
    cout << s1 << endl;
    s1 = "AAA";
    s2 = "BBB";
    s3 = "CCC";
    cout << s1+s2 << endl;
    s2 = s1+" COS NA KONIEC";
    cout << s2 << endl;
    s3 += s3 + s3;
    cout << s3 << endl;
    string ss("abrakadabra");
    s1 = for_each(ss.begin(),ss.end(),s1);
    cout << s1 << endl;
    cout << "----------------" << endl;
}