// Simple Numerical Recipes Test in C++
 
#include <iostream>

#ifndef _USENRERRORCLASS_
#define _USENRERRORCLASS_
#include "header/nr3.h"
#endif


#include "header/cholesky.h"
 
int main(void)
{
    MatDoub a(3,3);
    
    a[0][0] = 4;
    a[0][1] = 12;
    a[0][2] = -16;
    
    a[1][0] = 12;
    a[1][1] = 37;
    a[1][2] = -43;
    
    a[2][0] = -16;
    a[2][1] = -43;
    a[2][2] = 98;
    
    std::cout << "Inizio Test!" << std::endl;
    
    try
    {
       Cholesky achol(a);  
       
       for(Int j=0; j<3; j++)
       {
           for(Int k=0; k<3; k++)
           {
               std::cout << achol.el[j][k] << " ";
           } 
           std::cout << "\t" << std::endl;
       } 
    }
    catch(NRerror err)
    {
        NRcatch(err);
    }
    std::cout << "Fine Test!" << std::endl;
  
    return 0;
}