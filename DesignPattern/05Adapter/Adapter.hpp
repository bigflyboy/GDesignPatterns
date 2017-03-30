//
//  Adapter.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Adapter_hpp
#define Adapter_hpp

#include <stdio.h>
#include "Target.hpp"
#include "Adaptee.hpp"

class Adapter : public Target{
    
public:
    Adapter(Adaptee *adaptee);
    virtual ~Adapter();
    
    virtual void request();
    
private:
    Adaptee *m_pAdaptee;
    
};

#endif /* Adapter_hpp */
