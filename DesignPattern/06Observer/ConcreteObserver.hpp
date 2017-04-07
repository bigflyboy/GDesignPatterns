//
//  ConcreteObserver.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteObserver_hpp
#define ConcreteObserver_hpp

#include <stdio.h>
#include "Obeserver.hpp"
#include <string>
using namespace std;

class ConcreteObeserver : public Obeserver{
public:
    ConcreteObeserver(string name);
    virtual ~ConcreteObeserver();
    virtual void update(Subject* sub);
    
private:
    string m_objName;
    int m_obeserverState;
};

#endif /* ConcreteObserver_hpp */
