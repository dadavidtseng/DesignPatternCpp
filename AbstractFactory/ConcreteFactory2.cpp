﻿//----------------------------------------------------------------------------------------------------
// ConcreteFactory2.cpp
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
#include "ConcreteFactory2.hpp"

#include "ConcreteProductA2.hpp"
#include "ConcreteProductB2.hpp"

//----------------------------------------------------------------------------------------------------
AbstractProductA* ConcreteFactory2::CreateProductA() const
{
    return new ConcreteProductA2();
}

//----------------------------------------------------------------------------------------------------
AbstractProductB* ConcreteFactory2::CreateProductB() const
{
    return new ConcreteProductB2();
}
