/*
 * PID1.cpp
 *
 *  Created on: 2019/08/02
 *      Author: Hikaru310
 */

#include "PID1.h"
#include <math.h>
PID_1::PID() {
	//　X座標
	cte_X = goal_X - now_X;
	P_X = Kp * cte_X;
	I_X = Ki * cte_X + Ki * sum_cte_X;
	sum_cte_X += goal_X = now_X;
	D_X = Kd * (cte_X - past_cte_X);
	past_cte_X = cte_X;
	now_X += P_X + I_X - D_X;

	//　Y座標
	cte_Y= goal_Y - now_Y;
	P_Y= Kp * cte_Y;
	I_Y = Ki * cte_Y + Ki * sum_cte_Y;
	sum_cte_Y += goal_Y = now_Y;
	D_Y = Kd * (cte_Y - past_cte_Y);
	past_cte_Y = cte_Y;
	now_Y += P_Y + I_Y - D_Y;
}



