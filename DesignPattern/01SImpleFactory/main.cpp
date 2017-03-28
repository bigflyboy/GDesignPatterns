//
//  main.cpp
//  01SImpleFactory
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "Product.hpp"
#include "Factory.hpp"

int main(int argc, const char * argv[]) {
    Product* prodA = Factory::createProduct("A");
    prodA->Use();
    Product* prodB = Factory::createProduct("B");
    prodB->Use();
    
    delete prodA;
    delete prodB;
    
    return 0;
}
