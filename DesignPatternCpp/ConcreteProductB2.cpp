//----------------------------------------------------------------------------------------------------
// ConcreteProductB2.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include "ConcreteProductB2.hpp"

#include "AbstractProductA.hpp"

//----------------------------------------------------------------------------------------------------
std::string ConcreteProductB2::FooFunctionB() const
{
    return "The result of the product B2.";
}

//----------------------------------------------------------------------------------------------------
/// @brief
/// The variant, Product B2, is only able to work correctly with the variant, Product A2.
/// Nevertheless, it accepts any instance of AbstractProductA as an argument.
std::string ConcreteProductB2::FooFunctionBWithProductA(AbstractProductA const& collaborator) const
{
    std::string const result = collaborator.FooFunctionA();
    return "The result of the B2 collaborating with ( " + result + " )";
}
