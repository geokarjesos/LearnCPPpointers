/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
				XenOptimzeCd:TOADAMVWZPBIO#KT63_$?$5_@@#MILVBG&?_

*******************************************************************************/

#include <iostream>

using namespace std;

int multiplyby3(int &x)
{
    return x*3;
}


int main()
{
    cout<<"Hello World";
    
    int y = 14;
    int *p = &y ;
    
    cout<<"\n value of y = "<<y;
    cout<<"\n address of y = "<<&y;
    cout<<"\n pointer to y = "<<p;
    cout<<"\n multiplyby 3 = "<< multiplyby3(&y);

    return 0;
}

