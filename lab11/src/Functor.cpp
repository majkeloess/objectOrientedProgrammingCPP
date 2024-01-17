#include "Functor.h"
#include <iostream>

using namespace std;

Functor::Functor(): less(0), more(0), equal(0) {}

bool Functor::operator() (int a, int b)
{
    if(a < b){
        less++;
        return true;
    }
    else if(a==b){
        equal++;
        return false;
    }
    else{
        more++;
        return false;
    }
}

void Functor::wypiszStatystyki() const
{
    cout << " 'a' mniejsze 'b': " << less << endl;
    cout << "'a' rowne 'b': " << equal << endl;
    cout << "'a' wieksze 'b'" << more << endl;
}