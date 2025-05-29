//----------------------------------------------------------------------------------------------------
// AbstractProductB.hpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once
#include <string>
class AbstractProductA;

//----------------------------------------------------------------------------------------------------
/// @brief
/// Here's the base interface of another product.
/// All products can interact with each other,
/// but proper interaction is possible only between products of the same concrete variant.
//----------------------------------------------------------------------------------------------------
class AbstractProductB
{
public:
    /// Product B is able to do its own thing...
    virtual             ~AbstractProductB() = default;
    virtual std::string FooFunctionB() const = 0;
    /// ...but it also can collaborate with the ProductA.
    /// The Abstract Factory makes sure that all products it creates are of the same variant and thus, compatible.
    virtual std::string FooFunctionBWithProductA(AbstractProductA const& collaborator) const = 0;
};
