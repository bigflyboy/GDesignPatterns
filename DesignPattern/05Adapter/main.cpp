//
//  main.cpp
//  05Adapter
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include <iostream>
#include "Target.hpp"
#include "Adaptee.hpp"
#include "Adapter.hpp"

int main(int argc, const char * argv[]) {
    Adaptee *adaptee = new Adaptee();
    Target *tar = new Adapter(adaptee);
    tar->request();
    delete adaptee;
    delete tar;
    return 0;
}
