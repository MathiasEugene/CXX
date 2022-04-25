#ifndef __CN_TaxStrategy
#define __CN_TaxStrategy
#pragma once
#include <iostream>
// class TaxStrategy;

class CN_TaxStrategy:public TaxStrategy{
public:
    // 默认构造函数
	CN_TaxStrategy(double _Salary){ mSalary = _Salary; }
 //   // 在子类中overide基类的Calculate方法。
	virtual double Calculate(const Context & context){
		std::cout<< "Current tax is" << mSalary * 5 /00;
		return  0;
	}
    // virtual show()
};
#endif