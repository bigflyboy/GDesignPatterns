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
#include "Product.hpp"

class Factory{
public:
    Factory();
    virtual ~Factory();
    
    virtual Product* factoryMethod();
};

#endif /* Factory_hpp */
