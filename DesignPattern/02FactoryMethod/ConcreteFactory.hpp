//
//  ConcreteFactory.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteFactory_hpp
#define ConcreteFactory_hpp

#include <stdio.h>
#include "Factory.hpp"
#include "ConcreteProduct.hpp"

class ConcreteFactory : public Factory{
public:
    ConcreteFactory();
    virtual ~ConcreteFactory();
    virtual Product* factoryMethod();
};

#endif /* ConcreteFactory_hpp */
