//
//  Adaptee.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Adaptee_hpp
#define Adaptee_hpp

#include <iostream>
using namespace std;

class Adaptee{
public:
    Adaptee();
    virtual ~Adaptee();
    
    void specificRequest();
};

#endif /* Adaptee_hpp */
