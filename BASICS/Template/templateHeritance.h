#pragma once

#ifdef templateHeritance_EXPORTS
#define templateHeritance_API __declspec(dllexport)
#else
#define templateHeritance_API __declspec(dllimport)
#endif

#include<iostream>
class templateHeritance_API CBase{

public:
	CBase(){};
    CBase(int _a): a(_a){}
    virtual ~CBase(){};
	virtual void Print(){};
public:
    int a;


};
template<typename T>
class templateHeritance_API CTemplateDerived: public CBase
{
public:
	CTemplateDerived();

    CTemplateDerived(int _a, T _b);
    //~CTemplateDerived(){};
    void Print();
protected:
    T b;
};
