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

class Product{
public:
    Product();
    virtual ~Product();
    
    virtual void Use();
};

#endif /* Product_hpp */
