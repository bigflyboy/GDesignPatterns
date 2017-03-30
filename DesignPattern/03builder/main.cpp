//
//  main.cpp
//  03builder
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "Product.hpp"
#include "Builder.hpp"
#include "Director.hpp"
#include "ConcreteBuilder.hpp"

int main(int argc, const char * argv[]) {
    Builder *builder = new ConcreteBuilder();
    Diretor diretor;
    diretor.setBuilder(builder);
    Product *product = diretor.constuct();
    product->show();
    delete builder;
    delete product;
    return 0;
}
