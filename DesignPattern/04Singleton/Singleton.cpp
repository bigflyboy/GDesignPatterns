//
//  Singleton.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Singleton.hpp"

Singleton * Singleton::instance = nullptr;

Singleton::Singleton(){
    
}

Singleton::~Singleton(){
    delete instance;
}

Singleton* Singleton::getInstance(){
    if(instance == nullptr){
        instance = new Singleton();
    }
    return instance;
}

void Singleton::singletonOperation(){
    cout << "singletonOperation" <<endl;
}
