#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

#include "fraction.h"
int Fraction::removedFractions_=0;
const int Fraction::invalidDenominatorValue = 0;
//const int Fraction::defaultDenominatorValue = 1;


#if IMPLEMENTED_classFractionExists
#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
    #warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
    #pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif
#endif // IMPLEMENTED_classFractionExists

