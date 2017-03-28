//
//  ConcreteProduct.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteProduct_hpp
#define ConcreteProduct_hpp

#include <stdio.h>
#include "Product.hpp"
#include <iostream>

class ConcreteProduct : public Product{
public:
    ConcreteProduct();
    virtual ~ConcreteProduct();
    virtual void Use();
};

#endif /* ConcreteProduct_hpp */
