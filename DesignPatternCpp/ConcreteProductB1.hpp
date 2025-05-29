//----------------------------------------------------------------------------------------------------
// ConcreteProductB1.hpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once
#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"

//----------------------------------------------------------------------------------------------------
/// @brief
/// Concrete Products are created by corresponding Concrete Factories.
//----------------------------------------------------------------------------------------------------
class ConcreteProductB1 final : public AbstractProductB
{
public:
    std::string FooFunctionB() const override;
    std::string FooFunctionBWithProductA(AbstractProductA const& collaborator) const override;
};
