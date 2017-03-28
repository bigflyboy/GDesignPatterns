//
//  main.cpp
//  02FactoryMethod
//
//  Created by 王志远 on 2017/3/28.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "ConcreteProduct.hpp"
#include "Product.hpp"
#include "Factory.hpp"
#include "ConcreteFactory.hpp"

int main(int argc, const char * argv[]) {
    Factory* fc = new ConcreteFactory();
    Product* prod = fc->factoryMethod();
    prod->Use();
    
    delete fc;
    delete prod;
    
    return 0;
}
