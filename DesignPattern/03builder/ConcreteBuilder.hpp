//
//  ConcreteBuilder.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteBuilder_hpp
#define ConcreteBuilder_hpp

#include <stdio.h>
#include "Builder.hpp"

class ConcreteBuilder : public Builder{
public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();
    
    virtual void buildPartA();
    virtual void buildPartB();
    virtual void buildPartC();
};

#endif /* ConcreteBuilder_hpp */
