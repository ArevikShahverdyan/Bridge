#include "Abstraction.h"

Abstraction::Abstraction(Implementor* impl) : implementor(impl) {}

void Abstraction::operation() {
    implementor->operationImpl();
}

