//
//  Adaptee.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "Adaptee.hpp"

Adaptee::Adaptee(){
    
}

Adaptee::~Adaptee(){
    
}

void Adaptee::specificRequest(){
    cout << "specificRequest()|this is real Request from Adaptee!" << endl;
}
