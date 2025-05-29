//----------------------------------------------------------------------------------------------------
// main.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include <iostream>

#include "AbstractFactory.hpp"
#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"
#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

//----------------------------------------------------------------------------------------------------
/// @brief
/// The client code works with factories and products only through abstract types: AbstractFactory and AbstractProduct.
/// This lets you pass any factory or product subclass to the client code without breaking it.
void ClientCode(AbstractFactory const& abstractFactory)
{
    AbstractProductA const* abstractProductA = abstractFactory.CreateProductA();
    AbstractProductB const* abstractProductB = abstractFactory.CreateProductB();
    std::cout << abstractProductB->FooFunctionB() << "\n";
    std::cout << abstractProductB->FooFunctionBWithProductA(*abstractProductA) << "\n";
    delete abstractProductA;
    delete abstractProductB;
}

//----------------------------------------------------------------------------------------------------
int main()
{
    std::cout << "Client: Testing client code with the first factory type:\n";
    ConcreteFactory1 const* concreteFactory1 = new ConcreteFactory1();
    ClientCode(*concreteFactory1);
    delete concreteFactory1;
    std::cout << '\n';
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    ConcreteFactory2 const* concreteFactory2 = new ConcreteFactory2();
    ClientCode(*concreteFactory2);
    delete concreteFactory2;
    return 0;
}
