//
//  Builder.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Builder.hpp"

Builder::Builder(){
    m_prod = new Product();
}



Builder::~Builder(){
    
}





void Builder::buildPartA(){
    
}


void Builder::buildPartB(){
    
}


void Builder::buildPartC(){
    
}


Product* Builder::getResult(){
    return m_prod;
}
