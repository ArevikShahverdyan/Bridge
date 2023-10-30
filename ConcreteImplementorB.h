#ifndef CONCRETEIMPLEMENTORB_H
#define CONCRETEIMPLEMENTORB_H

#pragma once
#include "Implementor.h"

class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() override;
};

#endif // CONCRETEIMPLEMENTORB_H
