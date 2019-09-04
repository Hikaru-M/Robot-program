/*
 * model1.cpp
 *
 *  Created on: 2019/08/02
 *      Author: Hikaru310
 */

#include "../Hikaru/model/model1.h"
#include <math.h>
model_1::model_1() {
	// TODO Auto-generated constructor stub

}

model_1::~model_1() {
	// TODO Auto-generated destructor stub
}

model_1::distribute_speed(a,x,y,rw){
#define pi 3.141592
	float a,x,vy;
	wheel_1=cos(a)*x+sin(a)*y+rw;
	wheel_2=cos(a+2/3*pi)*x+sin(a+2/3*pi)*y+rw;
	wheel_3=cos(a+4/3*pi)*x+sin(a+4/3*pi)*y+rw;
}
