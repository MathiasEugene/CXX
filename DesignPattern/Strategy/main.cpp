#include<iostream>
#include"TaxStrategyInc.h"

void main(){

    // 创建CN_TaxStrategy实例
    double mySalary = 100;
    CN_TaxStrategy* ptrCnStgy = new CN_TaxStrategy(mySalary);
    Context *ptrContext = new Context(ptrCnStgy);

	ptrContext->CalculateTax();

    // delete ptrContext;
    //delete ptrcnStgy;
}