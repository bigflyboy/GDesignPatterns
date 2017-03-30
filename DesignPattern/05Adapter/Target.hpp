//
//  Target.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Target_hpp
#define Target_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Target{
public:
    Target();
    virtual ~Target();
    
    virtual void request();
    
};

#endif /* Target_hpp */
