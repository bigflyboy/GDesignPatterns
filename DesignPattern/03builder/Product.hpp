//
//  Product.hpp
//  DesignPattern
//
//  Created by 王志远 on 2017/3/30.
//  Copyright © 2017年 王志远. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <iostream>
#include <string>
using namespace std;

class Product{
public:
    Product();
    virtual ~Product();
    
    void setA(string str);
    void setB(string str);
    void setC(string str);
    
    void show();
    
private:
    string m_a;
    string m_b;
    string m_c;
    
};

#endif /* Product_hpp */
