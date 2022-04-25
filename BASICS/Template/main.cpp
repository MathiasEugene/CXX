#include<iostream>
#include"templateHeritance.h"
using namespace std;

void main()
{
    int a = 10;
    double b = 3./4.;
	
	CBase *c = new CTemplateDerived<double>(a,b) ;
    c->Print();
    
	CTemplateDerived<double> d =  CTemplateDerived<double>(a,b);
	d.Print();


	cout<< "Main function finished"<<endl;   
}