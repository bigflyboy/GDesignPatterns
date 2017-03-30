//
//  Director.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Director.hpp"

Diretor::Diretor(){
    
}

Diretor::~Diretor(){
    
}

Product* Diretor::constuct(){
    m_pbuilder->buildPartA();
    m_pbuilder->buildPartB();
    m_pbuilder->buildPartC();
    
    return m_pbuilder->getResult();
}

void Diretor::setBuilder(Builder *builder){
    m_pbuilder = builder;
}
