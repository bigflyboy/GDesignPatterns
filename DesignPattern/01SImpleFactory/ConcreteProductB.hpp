//
//  ConcreteProductB.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteProductB_hpp
#define ConcreteProductB_hpp

#include <stdio.h>
#include "Product.hpp"
using namespace std;

class ConcreteProductB : public Product{
public:
    ConcreteProductB();
    virtual ~ConcreteProductB();
    
    virtual void Use();
};


#endif /* ConcreteProductB_hpp */
