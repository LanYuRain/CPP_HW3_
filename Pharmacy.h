#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"

/*********************************************
 *該類別將存儲至少五種藥物的價格             *
 *並可更新 PatientAccount 類別的 charges 變數*
 *********************************************/

//儲存藥物類型與金額
struct MedType{
	char type;//藥物代號
	int price;//藥物金額
};

class Pharmacy{
	private:
		//需在建構式內初始化
		//設計五個藥物
		//代號M~Q，金額隨意
		MedType medType[5];
		
		//預期在此函數內呼叫 PatientAccount 的 addCharges方法(傳入手術金額)
		void updateCharge(int/*手術金額*/, PatientAccount &/*傳入PatientAccount的物件*/);	
	public:
		Pharmacy();//建構式，(在內部初始化medType[5])
		
		//傳入使用者輸入的藥物類型，遍歷medType[5]取得藥物金額後
		//呼叫updateCharge並傳入金額
		void updateMedType(char, PatientAccount &);
};

#endif