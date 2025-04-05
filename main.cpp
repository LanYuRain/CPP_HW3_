#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "pharmacy.h"

using namespace std;

void printMenu();//列印選單

int main(int argc, char** argv) {
	
	PatientAccount pacc;
	Pharmacy phar;
	Surgery sur;
	
	printMenu();

	while(true){
		int command;
		
		cout<<"Enter a command(1~5) > ";
		cin>>command;
				
		if(command == 5){
			break;			
		}else if(command == 1){
			char type;
			cout<<"Choose surgery type(A~E): ";
			cin>>type;
			sur.updateSurType(type, pacc);
		}else if(command == 2){
			char type;
			cout<<"Add Medician(M~Q): ";
			cin>>type;
			phar.updateMedType(type, pacc);
		}else if(command == 3){
			int days;
			cout<<"Set number of days in hospital: ";
			cin>>days;
			pacc.setDays(days);
		}else if(command == 4){
			pacc.addDayRate();
			cout<<"----- RESULT -----"<<endl;
			cout<<"Total";
			cout<<setw(10)<<setfill('*');
			cout<<pacc.getCharges()<<"$"<<endl<<endl;
			pacc.resetAll();
			printMenu();
		}else{
			cout<<"Command ERROR!!";
		}
		
	}
	return 0;
}

void printMenu(){
	cout<<"===== Patient Price Management System ====="<<endl;
	cout<<"1. Choose surgery type(A~E)."<<endl;
	cout<<"2. Add Medician(M~Q)."<<endl;
	cout<<"3. Set number of days in hospital."<<endl;
	cout<<"4. Discharge and show total charges"<<endl;
	cout<<"5. EXIT"<<endl;
}