//
//  ConcreteSubject.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef ConcreteSubject_hpp
#define ConcreteSubject_hpp

#include <stdio.h>
#include "Subject.hpp"

class ConcreteSubject : public Subject{
public:
    ConcreteSubject();
    virtual ~ConcreteSubject();
    
    virtual int getState();
    virtual void setState(int i);
    
private:
    int m_nState;
};

#endif /* ConcreteSubject_hpp */
