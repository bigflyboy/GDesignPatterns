//
//  Director.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Director_hpp
#define Director_hpp

#include <stdio.h>
#include "Builder.hpp"
#include "Product.hpp"

class Diretor{
public:
    Diretor();
    virtual ~Diretor();
    Builder* m_Builder;
    
    Product* constuct();
    void setBuilder(Builder* builder);
    
private:
    Builder* m_pbuilder;
};

#endif /* Director_hpp */
