//
//  main.cpp
//  04Singleton
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "Singleton.hpp"

int main(int argc, const char * argv[]) {
    Singleton *singleton = Singleton::getInstance();
    singleton->singletonOperation();
    return 0;
}
