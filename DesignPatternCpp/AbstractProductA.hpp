//----------------------------------------------------------------------------------------------------
// AbstractProductA.hpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once
#include <string>

//----------------------------------------------------------------------------------------------------
/// @brief
/// Each distinct product of a product family should have a base interface.
/// All variants of the product must implement this interface.
//----------------------------------------------------------------------------------------------------
class AbstractProductA
{
public:
    virtual             ~AbstractProductA() = default;
    virtual std::string FooFunctionA() const = 0;
};
