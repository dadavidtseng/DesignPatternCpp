//----------------------------------------------------------------------------------------------------
// ConcreteProductB1.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include "ConcreteProductB1.hpp"

//----------------------------------------------------------------------------------------------------
std::string ConcreteProductB1::FooFunctionB() const
{
    return "The result of the product B1.";
}

//----------------------------------------------------------------------------------------------------
/// @brief
/// The variant, Product B1, is only able to work correctly with the variant,
/// Product A1. Nevertheless, it accepts any instance of AbstractProductA as an argument.
std::string ConcreteProductB1::FooFunctionBWithProductA(AbstractProductA const& collaborator) const
{
    std::string const result = collaborator.FooFunctionA();
    return "The result of the B1 collaborating with ( " + result + " )";
}
