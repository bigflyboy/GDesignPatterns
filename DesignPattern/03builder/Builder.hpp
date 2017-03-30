//
//  Builder.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Builder_hpp
#define Builder_hpp

#include <iostream>
#include "Product.hpp"

class Builder{
public:
    Builder();
    virtual ~Builder();
    
    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
    
    virtual Product* getResult();
    
protected:
    Product* m_prod;
};

#endif /* Builder_hpp */
