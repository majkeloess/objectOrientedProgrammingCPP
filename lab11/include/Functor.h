#ifndef FUNCTOR_H
#define FUNCTOR_H


class Functor {

public:
    
    Functor();
    bool operator() (int a, int b);
    void wypiszStatystyki() const;

private:
    int equal;
    int less;
    int more;

};

#endif