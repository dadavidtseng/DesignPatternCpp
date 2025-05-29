//----------------------------------------------------------------------------------------------------
// ConcreteProductB2.hpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once
#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"

//----------------------------------------------------------------------------------------------------
class ConcreteProductB2 final : public AbstractProductB
{
public:
    std::string FooFunctionB() const override;
    std::string FooFunctionBWithProductA(AbstractProductA const& collaborator) const override;
};
