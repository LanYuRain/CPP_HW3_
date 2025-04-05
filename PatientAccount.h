#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

/********************************************************
 *該類別將記錄病人的總費用，並追蹤病人在醫院的住院天數。*
 *小組需決定醫院的每日費率。                            *
 ********************************************************/

class PatientAccount{
	private:
		int charges;//總金額
		int days;//住院天數
		int rate;//費率(固定)
	public:
		PatientAccount();//建構式
		
		void addCharges(int);//修改總金額(charges變數)
		int getCharges(){
			return charges;
		}
		void setDays(int);//設定住院天數
		void addDayRate();//將費率 * 天數後得到的價錢加到charges裡
		void resetAll();//重置charges, days
};

#endif