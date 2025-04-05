#include "PatientAccount.h"

PatientAccount::PatientAccount(){
	charges = 0;
	days = 0;
	rate = 4500;
}

void PatientAccount::addCharges(int price){
	charges += price;
}

void PatientAccount::setDays(int days){
	this->days = days;
}

void PatientAccount::addDayRate(){
	charges += days * rate;
}

void PatientAccount::resetAll(){
	days = 0;
	charges = 0;
}