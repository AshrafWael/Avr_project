/*
 * KPAD_config.h
 *
 *  Created on: Jul 8, 2023
 *      Author: User
 */

#ifndef KPAD_CONFIG_H_
#define KPAD_CONFIG_H_


#define NUM_OF_KEPAD   1

#define  KPD_ROW_NUM    4

#define  KPD_COLOM_NUM   4

typedef struct {
	struct {
		u8 Row_u8Port;
		u8 Row_u8Pin;
	}KPAD_strRows[KPD_ROW_NUM];
	struct {
		u8 Col_u8Port;
		u8 Col_u8Pin;
	}KPAD_strCol[KPD_COLOM_NUM];

}KPAD_t;


#define PAD_KEY_VALUES	{{'7','8','9','/'},\
						 {'4','5','6','*'},\
						 {'1','2','3','-'},\
						 {'#','0','=','+'}}
#endif /* KPAD_CONFIG_H_ */