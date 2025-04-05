#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"

/***********************************************
 *該類別將存儲至少五種手術的費用               *
 *並可更新 PatientAccount 類別的 charges 變數。*
 ***********************************************/

//儲存手術類型與金額
struct SurType{
	char type;//手術代號
	int price;//手術金額
};

class Surgery{
	private:
		//需在建構式內初始化
		//設計五個手術
		//代號A~E，金額隨意
		SurType surType[5];
		
		//預期在此函數內呼叫 PatientAccount 的 addCharges方法(傳入手術金額)
		void updateCharge(int/*手術金額*/, PatientAccount &/*傳入PatientAccount的物件*/);
	public:
		Surgery();//建構式(在內部初始化surType[5])
		
		//傳入使用者輸入的手術類型，遍歷surType[5]取得手術金額後
		//呼叫updateCharge並傳入金額
		void updateSurType(char, PatientAccount &);
};

#endif