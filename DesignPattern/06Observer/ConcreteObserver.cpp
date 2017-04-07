//
//  ConcreteObserver.cpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#include "ConcreteObserver.hpp"
#include <iostream>
#include <vector>
#include "Subject.hpp"
using namespace std;

ConcreteObeserver::ConcreteObeserver(string name){
    m_objName = name;
}

ConcreteObeserver::~ConcreteObeserver(){
    
}

void ConcreteObeserver::update(Subject *sub){
    m_obeserverState = sub->getState();
    cout << "update oberserver[" << m_objName << "] state:" << m_obeserverState << endl;
}
