/*
 * model1.h
 *
 *  Created on: 2019/08/02
 *      Author: Hikaru310
 */

#ifndef MODEL1_H_
#define MODEL1_H_

class model_1 {
public:
	model_1();
	virtual ~model_1();
	void distribute_speed(float,float,float);
	float  wheel_1, wheel_2, wheel_3;
};

#endif /* MODEL1_H_ */
