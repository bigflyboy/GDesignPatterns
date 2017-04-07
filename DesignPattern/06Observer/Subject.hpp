//
//  Subject.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/4/7.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include <stdio.h>
#include <vector>
#include "Obeserver.hpp"
using namespace std;

class Subject{
public:
    Subject();
    virtual ~Subject();
    Obeserver *m_Obeserver;
    
    void attach(Obeserver* pObeserver);
    void detach(Obeserver* pObeserver);
    void notify();
    
    virtual int getState() = 0;
    virtual void setState(int i) = 0;
    
private:
    vector<Obeserver*> m_vtObj;
    
};

#endif /* Subject_hpp */
