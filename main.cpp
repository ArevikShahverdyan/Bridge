#include <QCoreApplication>
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "ConcreteAbstractionX.h"
#include "ConcreteAbstractionY.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    Implementor* implA = new ConcreteImplementorA();
    Implementor* implB = new ConcreteImplementorB();

    Abstraction* abstractionX = new ConcreteAbstractionX(implA);
    Abstraction* abstractionY = new ConcreteAbstractionY(implB);

    abstractionX->operation(); // Uses Concrete Implementor A
    abstractionY->operation(); // Uses Concrete Implementor B

    delete implA;
    delete implB;
    delete abstractionX;
    delete abstractionY;

    return a.exec();
}

