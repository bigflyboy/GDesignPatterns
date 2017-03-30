//
//  Product.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Product.hpp"

Product::Product(){
    
}

Product::~Product(){
    
}

void Product::setA(string str){
    m_a = str;
}

void Product::setB(string str){
    m_b = str;
}

void Product::setC(string str){
    m_c = str;
}

void Product::show(){
    cout << "product has" << m_a << m_b << m_c <<endl;
}
