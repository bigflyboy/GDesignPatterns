//
//  Factory.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Factory.hpp"

Factory::Factory(){
    
}

Factory::~Factory(){
    
}

Product* Factory::createProduct(string proname){
    if("A" == proname){
        return new ConcreteProductA();
    }else if("B" == proname){
        return new ConcreteProductB();
    }
    return NULL;
}
