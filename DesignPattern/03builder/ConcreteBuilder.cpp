//
//  ConcreteBuilder.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "ConcreteBuilder.hpp"

ConcreteBuilder::ConcreteBuilder(){
    
}

ConcreteBuilder::~ConcreteBuilder(){
    
}

void ConcreteBuilder::buildPartA(){
    m_prod->setA("A Style");
}

void ConcreteBuilder::buildPartB(){
    m_prod->setB("B Style");
}

void ConcreteBuilder::buildPartC(){
    m_prod->setC("C Style");
}
