//
//  Adapter.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Adapter.hpp"

Adapter::Adapter(Adaptee *adaptee){
    m_pAdaptee = adaptee;
}

Adapter::~Adapter(){
    
}

void Adapter::request(){
    m_pAdaptee->specificRequest();
}
