//
//  ConcreteSubject.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "ConcreteSubject.hpp"

ConcreteSubject::ConcreteSubject(){
    
}

ConcreteSubject::~ConcreteSubject(){
    
}

int ConcreteSubject::getState(){
    return m_nState;
}

void ConcreteSubject::setState(int i){
    m_nState = i;
}
