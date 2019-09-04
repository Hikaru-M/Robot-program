/*
 * PID1.h
 *
 *  Created on: 2019/08/02
 *      Author: Hikaru310
 */

#ifndef PID1_H_
#define PID1_H_

class PID_1 {
public:
	PID_1();
	virtual ~PID_1();

	void PID (float goal_X,float goal_Y)
	{
		float cte_X, cte_Y, P_X, P_Y, I_X, I_Y, D_X, D_Y;
		static float past_cte_X = 0.0, sum_cte_X = 0.0, past_cte_Y = 0.0, sum_cte_Y = 0.0;
	}

#endif /* PID1_H_ */
