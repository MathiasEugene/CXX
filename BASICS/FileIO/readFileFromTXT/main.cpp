#include<fstream>
#include<string>
using namespace std;

void test_readMatrxi()
{
    string fileName = "F:/1. Code/Git/OSIS4.0/test/testCase2/test2EigVector_C++.txt";
    ifstream ifs;
    ifs.open(fileName, ifstream::in);

    int Row = 0;
    int Col = 0;
    if(ifs)
    {
        ifs>> Row >> Col;
        double *data = new double[Row*Col];

        for(int i = 0; i< Row; ++i)
        {
            for(int j = 0; j<Col; ++j)
            {
                ifs >> data[(i)];
            }
        }
    
        delete[] data;
        data = NULL;
    }

}

void main()
{


}