#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

#pragma once

class Implementor {
public:
    virtual void operationImpl() = 0;
    virtual ~Implementor(){};
};
#endif // IMPLEMENTOR_H
