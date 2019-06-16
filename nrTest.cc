// Simple Hello World
 
#include <iostream>

#include "header/nr3.h"
#include "header/calendar.h"
#include "header/moment.h"
 
int main(void)
{
    const Int NTOT = 20;
    Int i, jd, nph = 2;
    Doub frac, ave, vrnce;
    
    VecDoub data(NTOT);

    std::cout << "Inizio Test!" << std::endl;
    
    for(i=0; i < NTOT; i++) 
    {
        flmoon(i, nph, jd, frac);
        data[i] = jd;
    }
    
    avevar(data, ave, vrnce);
    
    cout << "Average  = " << setw(12) << ave << endl;
    cout << "Variance = " << setw(12) << vrnce << endl;
    
    
    std::cout << "Fine Test!" << std::endl;
  
    return 0;
}