#ifndef CONCRETEIMPLEMENTORA_H
#define CONCRETEIMPLEMENTORA_H

#pragma once
#include "Implementor.h"

class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() override;
};

#endif // CONCRETEIMPLEMENTORA_H
