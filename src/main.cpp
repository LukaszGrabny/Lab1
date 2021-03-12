#include "LaborkaConfig.h"
#include <iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
#include<trygonometria.h>
#else
#include<cmath>
#endif
int main()
 { 
    double asd = 45;
#ifdef USE_TRIGONOMETRY_DEGREE
  double  result = degreemath::cosinus(asd);
  
#else
   double result = cos(asd);
#endif

 //double degree=45;
 //double tg = degreemath::tangens(degree);
 std::cout<<result;
 //
 return 0; 
 }