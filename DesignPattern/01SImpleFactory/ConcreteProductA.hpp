//
//  ConcreteProductA.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteProductA_hpp
#define ConcreteProductA_hpp

#include <stdio.h>
#include "Product.hpp"
using namespace std;

class ConcreteProductA : public Product{
public:
    ConcreteProductA();
    virtual ~ConcreteProductA();
    virtual void Use();
};

#endif /* ConcreteProductA_hpp */
