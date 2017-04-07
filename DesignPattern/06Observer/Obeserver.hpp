//
//  Obeserver.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Obeserver_hpp
#define Obeserver_hpp

#include <iostream>
#include "Subject.hpp"

class Obeserver{
public:
    Obeserver();
    virtual ~Obeserver();
    virtual void update(Subject * sub);
};

#endif /* Obeserver_hpp */
