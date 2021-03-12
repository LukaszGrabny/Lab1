#include "LaborkaConfig.h"
#include <iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
#include<trygonometria.h>
#else
#include<cmath>
#endif
int main(int argc, char* argv[])
 { 
  
#ifdef USE_TRIGONOMETRY_DEGREE
    if (argc >= 2) {
        double deg = strtod(argv[1], NULL);
        double  result = degreemath::cosinus(deg);
        std::cout << result;
    }
#else
    double asd = 100;
   double result = cos(asd);
   std::cout << result;
#endif

 return 0; 
 }