//
//  Singleton.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Singleton{
public:
    virtual ~Singleton();
    Singleton *m_Singleton;
    
    static Singleton* getInstance();
    void singletonOperation();
    
private:
    static Singleton* instance;
    Singleton();
};

#endif /* Singleton_hpp */
