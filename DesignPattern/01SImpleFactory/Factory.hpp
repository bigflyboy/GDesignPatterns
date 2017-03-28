//
//  Factory.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Factory_hpp
#define Factory_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Product.hpp"
#include "ConcreteProductA.hpp"
#include "ConcreteProductB.hpp"
using namespace std;

class Factory{
public:
    Factory();
    virtual ~Factory();
    static Product* createProduct(string proname);
};

#endif /* Factory_hpp */
