//----------------------------------------------------------------------------------------------------
// ConcreteFactory2.hpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#pragma once
#include "AbstractFactory.hpp"

//----------------------------------------------------------------------------------------------------
/// @brief
/// Each Concrete Factory has a corresponding product variant.
//----------------------------------------------------------------------------------------------------
class ConcreteFactory2 final : public AbstractFactory
{
public:
    AbstractProductA* CreateProductA() const override;
    AbstractProductB* CreateProductB() const override;
};
