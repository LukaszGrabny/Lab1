#define M_PI 3.14159265358979323846
#include "trygonometria.h"
#include <cmath>

double degreemath::sinus(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
double radian= degree  * (M_PI/180);
return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::cosinus(double degree) {

	double radian = degree * (M_PI / 180);
return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::tangens(double degree) {
	double radian = degree * (M_PI / 180);
return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}
double degreemath::ctgens(double degree) {

	double radian = degree * (M_PI / 180);
double tg=std::tan(radian);
double ctg=1/tg;
return ctg;
}