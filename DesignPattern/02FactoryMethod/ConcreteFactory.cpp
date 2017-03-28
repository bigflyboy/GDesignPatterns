//
//  ConcreteFactory.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "ConcreteFactory.hpp"

ConcreteFactory::ConcreteFactory(){
    
}

ConcreteFactory::~ConcreteFactory(){
    
}

Product* ConcreteFactory::factoryMethod(){
    return new ConcreteProduct();
}
