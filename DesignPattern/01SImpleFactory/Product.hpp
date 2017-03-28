//
//  Product.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Product{
public:
    Product();
    virtual ~Product();
    
    virtual void Use() = 0;
};

#endif /* Product_hpp */
