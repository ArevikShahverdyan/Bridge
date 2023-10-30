#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#pragma once
#include "Implementor.h"

class Abstraction {
public:
    Abstraction(Implementor* impl);
    void operation();

private:
    Implementor* implementor;
};


#endif // ABSTRACTION_H
