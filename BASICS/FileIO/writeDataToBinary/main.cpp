#include<string>
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
#include"myClass.h"


void main(){

    int arrSize = 5;
    double myArr[5] = {1.1,2.2,3.3,4.4,5.5};
    myClass mc = myClass(myArr, arrSize);
	string fileName = "F:/1. Code/Git/OSIS4.0/test/testCase2/binaryFile.dat";
    
    ofstream outfile;
    outfile.open(fileName, ios::binary);

    if(outfile)
    {
        outfile.write((char * ) &mc.arrSize, sizeof(mc.arrSize));
		outfile.write((char * ) &mc.arr[0], sizeof(mc.arr[0])*mc.arrSize);
    }
    outfile.close();

	int n=0;	
	ifstream infile;
	infile.open(fileName,ios::binary);
	if(infile)
	{
		infile.read( (char *) &n, sizeof(n));
		double *tempArr = new double[n];
		for(int i=0;i< n; ++i)
		{	
			infile.read( (char *) &tempArr[i], sizeof(tempArr[i]) );
			std::cout << tempArr[i] <<std::endl;
		}
		delete[] tempArr;
		tempArr = NULL;
	}

	infile.close();

	

}