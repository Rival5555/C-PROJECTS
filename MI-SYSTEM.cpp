#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void enf();
void manu();
   // at every function end (for goto mainmanu)
void mainmanu();

void medical_system();
void workload();
void mainmillitarybases();
void rankmillitary();
void ammunication();
void budgetmain();
void QRF();
void academicmang();
void millitarytask();
void securitymang();
void intilligence();
void relationM();
void mission();

void missiontargetinfo(string task1);
void qrfbases();
void qrfbatch(string bass);
void batchold();
void oldbatch(string base1);
void oldbatchbt(string batch, string base);
void budget_mang(double budget);
void budget_percentage(double budget1);
void budget_spent(double budget);
void officerrank(string& base);
void sepoyrank();
void infoammunication();
void basesammunication();
void ammuincation_base_quantity();
void infoammunicatin_eof();


struct Patient {
    string name;
    int age;
    string sex;
    string blood_pressure;
    string temperature;
    string previous_disease;
};
struct securityduty{
	string name;
	string rank;
	string weapon;
};
struct traning{
	string name;
	int age;
	string education;
};
struct Soldier1{
	string name;
	int age;
	string rank;
};
      // for every function end and for go to main manu....
void enf(){
	int a;
    cout<<"\nif you want to go on main manu then press 1 other wise 0 : ";
    cin>>a;
    if(a==1){
  		system("cls");
        mainmanu();
    }
    else{
    cout<<"\n\t\tThanks";
    }
}
  
void checkagain(){
	cout<<"\nDO you check more? . press key:\n";
    int a;
    cout<<"\t\t\t yes---1 \t\t\t NO---0 :";
    cin>>a;
    if(a==1){
	  sepoyrank();
    }
    else{
		enf();
	}
} 

void relationM(){
	cout<<"\n\t\t\t\tWELCOME TO RELATION WITH OTHER MILLITARY \n";
	cout<<"\n\t\t\tISI       INTER SERVICE INTILLIGENCE \n\n";
	cout<<"this secret aggencies attech all the field of millitary and other task purpose.\n";
	cout<<" HERE THE LIST OF RELATION OF ISI WITH MILLITIARY AGENCIES \n";
	ifstream relation("Relation ISI.txt");
    if(!relation.is_open()){
    	cout<<"\n unable to open the file: \n";
 	    relationM();
	}
	string data;
	while (getline(relation, data)){
		cout<<data<<endl;
	}
	relation.close();
	int b;
	cout<<"\n\nfor goto manu plz press 1:  ";
	cin>>b;
	if(b==1){
	    millitarytask();
	}else{
		relationM();
	}	
}

void missiontargetinfo(string task1){
	cout<<"\n\t\t\t\t\t"<<task1<<"\n\n";
    cout<<"TOTAL SOLDIER in this epperation \t\t\t 1854\ncommander of this opperation \t\t\t CAPTAIN DANISH SB \n total shaheed \t\t\t\t\t 135\n total expensive \t\t\t\t 2455633 \n time foe opperation \t\t\t\t 1 year\n\n ";
	int a;
	cout<<"\n for main manu press ---1  : ";
	cin>>a;
	if(a==1){
		millitarytask();
	} else{
		missiontargetinfo(task1);
	}
}

void mission(){
	cout<<"\n\t\t\t\tWELCOME TO MISSION &TASK CONTROL MANAGMENT \n";
	cout<<"\n HERE THE LIST OF SOME MISSION & OPPERATION :\n";
	cout<<"\n Zarb-e-Azb---1 \t\t\t Rah-e-Nijat---2\n\n anti-terrorism in Balochistan---3 \t\t anti-terrorism in KPK---4.\n ";
	int a;
	cout<<"\npress the key you want to check information:  ";
	cin>>a;
	string task;
	switch(a){
		case 1:
			task="Zarb-e-Azb";
			missiontargetinfo(task);
			break;
		case 2:
			task="Rah-e-Nijat";
			missiontargetinfo(task);
			break;
		case 3:
			task="anti-terrorism in Balochistan";
			missiontargetinfo(task);
			break;
		case 4:
			task="anti-terrorism in KPK";
			missiontargetinfo(task);
			break;
		default:
			cout<<"\nplz enter correct key :\n";
			mission();
		break;
	}
}
void intilligence(){
		cout<<"\n\t\t\t\tWELCOME TO INTILLIGENCE \n";
		cout<<"\n\t\t\tISI       INTER SERVICE INTILLIGENCE \n\n";
		cout<<"this secret aggencies attech all the field of millitary and other task purpose.\n\n";
		cout<<"it also manage the other aggencies like :  \n\n \t\t IB (intilligence buero) \t\t MI(millitary intilligence) \t\t MP(millitary ploice) \n";
		cout<<"\nif you want to check more then press:\n\n\t\t 1-----mission$task\t\t2---- relation with other millitary \n\n \t\t\t\t3----mainmanu  : ";
		int a;
		cin>>a;
		switch(a){
			case 1:
				mission();
			break;
			case 2:
			    relationM();
			break;
			default:
				millitarytask();
			break;
		}
}

void securitymang(){
	cout<<"\n\t\t\t\tWELCOME TO SECURITY MANGMENT\n";
	cout<<"choose the option \n \n";
        int n;
        cout<<"\t\t\t new duty---1			old duty---2 \t\t  goto main---3   : ";
        cin>>n;
        if(n==1){
   	 	    // Get user input for a new soldier duty
   	 	    dobara:
			securityduty s1;
			cin.ignore();
    		cout << "Enter soldier name: ";
    		getline(cin, s1.name);
    		//cin.ignore();
    		cout << "Enter soldier rank: ";
 		    cin >> s1.rank;
 		    cin.ignore();
            cout << "Enter soldier weapon: ";
  		    getline(cin, s1.weapon);
    		cout << "\nNew soldier security duty added :\n";
    		cout << "Name: " << s1.name << "\n";
    		cout << "rank: " << s1.rank << "\n";
  		    cout << "weapon: " << s1.weapon << "\n";
  		    int d;
  		    cout<<"\n if add more press---1  other wise goto mainu press---2:  ";
  		    cin>>d;
  		    if(d==1){
  		    	goto dobara;
			  }
			  else{
			  	securitymang();
			  }
        }
        else if(n==2){
        	dbra:
		cout<<"\nname  bergadier salman.\nrank  bergadier \nweapons  LMG \nduty  onduty \n";
		cout<<"\nname  major shahbaz.\nrank  major  \nweapons  SR1 \nduty  onduty \n";
		cout<<"\nname  sobedar lal khan.\nrank  sobedar \nweapons  G5 \nduty  onduty \n";
		int c;
		cout<<"\npress 1 to goto manu;\n";
		cin>>c;
		if(c==1){
			securitymang();
		}
		else{
			cout<<"\nplz enter correct:";
			goto dbra;
		}
	}
		else{
			millitarytask();
		}
    }

void millitarytask(){
	cout<<"\npress key you want to check:\n \n";
	int a;
	cout<<" \t\tsecurity---1 \t\t\t Intilligence---2 \n\n \t\tmission$task---3 \t\t relation with other millitary---4 \n\n \t\tmain manu---5 \n ";
	cin >>a;
	switch(a){
		case 1:
			system("cls");
			securitymang();
		break;
		case 2:
    		system("cls");
    		intilligence();
		break;
		case 3:
		     system("cls");
			 mission();
		break;
		case 4:
			 system("cls");
			 relationM();
		break;
		case 5:
		//mainmanu();
		break;
		default:
		cout<<"\n plz enter correct key: ";
		millitarytask();
		break;	 	
	}	
}

void academicmang(){
        cout<<"choose the option \n \n";
        int n;
        cout<<"new entry---1			old batch---2      : ";
        cin>>n;
        if(n==1){
   	 	    // Get user input for a new soldier entry
			traning traning1;
			
            cin.ignore(); // Ignore the newline character left in the buffer
    		cout << "Enter trani name: ";
    		getline(cin, traning1.name);
    		
     	    //cin.ignore(); // Ignore the newline character left in the buffer
   			cout << "Enter trani age: ";
 		    cin >> traning1.age;

    		cin.ignore(); // Ignore the newline character left in the buffer
    		cout << "Enter trani rank: ";
  		    getline(cin, traning1.education);

    		// Display the entered soldier entry
    		cout << "\nNew trani entry added:\n";
    		cout << "Name: " << traning1.name << "\n";
    		cout << "Age: " << traning1.age << "\n";
  		    cout << "Education: " << traning1.education << "\n";
  		    
  		    enf();
        }
        else if(n==2){
			batchold();
		enf();
		}
 }
 
void QRF(){
	cout<<"\n plz enter key you want to chose: \n";
	int a;
	cout<<"\n\tQRF BATCH---1 \t\t\t details of QRF---2 \n\n\twork about QRF---3 \t\t\tmain manu---4 : ";
	cin>>a;
	switch(a){
		case 1:
			qrfbases();
		break;
		case 2:
		    cout<<"\n\t\t\t\t QUICK REACTION FORCE \n  \t YOU WANT TO GO ANY SIDE OF MILLITARY WITH QRF WITHIN 7 MINTUS";
		    cout<<"HERE THE LIST OF SOME SPECIAL BATCH OF QRF";
		    cout<<"\n1. Thunderhawks batch\t\t\t 2. Shadow Wolves batch\t\t 3. Iron Phalanx batch\n\n4. Storm Ravens batch \t\t\t 5. Night Sabers batch \t\t 6. Eagle Legion batch  \n\n7. Diamondback Brigade batch \t\t 8. Avalanche Vanguard batch \t 9. Cobra Strike Force batch \n\n10. Sentinel Guardians batch \n";
		    cout<<"A Quick Reaction Force (QRF) is like a rapid-response team in the military. Its main job is to quickly go to a location where there's a sudden need for help,";
		    cout<<" like during emergencies or unexpected situations, to provide support, security, or assistance. It is typically well-equipped and trained to quickly deploy to a specific location in order to provide immediate assistance, ";
		    cout<<" support, or security as needed. QRFs play a crucial role in enhancing the agility and responsiveness of military forces.";
		   	int b;
           	cout<<"\n\nfor goto manu plz press 1:  ";
        	cin>>b;
	        if(b==1){
		    QRF();		    
		break;
		case 3:
		cout<<"\n\n YOU WANT TO GO ANY SIDE OF MILLITARY WITH QRF WITHIN 7 MINTUS .\n";
		cout<<"press key u want to go: ";
		manu();
		break;
		case 4:
			enf();
		break;
		default:
		cout<<"\n plz enter key :  ";
		QRF();
		break;		
	}
}
}

void qrfbatch(string bass){
	system("cls");
	cout<<"WELCOME TO QUICK REACTION FORCE BATCH OF "<< bass <<" base\n\n";
	cout<<"QUICK REACTION FORCE HAVE ONLY 7 MINTIUS TO REACH THE TARGET AND HIT.\n";
	cout<<"HERE THE LIST OF BATCH QUICK REACTION FORCE OF THIS BASE \n\n ";
	cout << "Name" << "\t\t" << "ID" << "\t\t\t" << "age\t\t" << "RANK/TASK \n";
    ifstream bas("QRF BATCH.txt");
    if(!bas.is_open()){
    	cout<<"\n unable to open the file: \n";
 	    qrfbases();
	}
	string data;
	while (getline(bas, data)){
		cout<<data<<endl;
	}
	bas.close();
	int b;
	cout<<"\n\nfor goto manu plz press 1:  ";
	cin>>b;
	if(b==1){
		QRF();
	}
}

void qrfbases(){
	system("cls");
	cout<<"chose the base for QUICK REACTION FORCE \n";
    int a;
    cout<<"\n 1---MUSHAF BASE \t\t\t  2---KARACHI BASE \t\t\t  3---LAHORE BASE \n\n 4---SIALKOT BASES \t\t\t  5---KOHAAT BASE \t\t\t  6---RAWALPINDI BASE \n\n";
    cout<<" 7---KHARIAN BASE \t\t\t  8---GUJRANWALA \t\t\t  9---MULTAN BASE \n\n 10--- BHAWALNAGAR BASE \n";		
    cin>>a;
    string base;
    switch(a){
   	    case 1:
            base="MUSHAF ";
            qrfbatch(base);
        break;
        case 2:
          	base= "KARACHI ";
            qrfbatch(base);
	    break;
        case 3:
           	base= "LAHORE ";
            qrfbatch(base);
	    break;
        case 4:
        	base= "SIALKOT ";
            qrfbatch(base);
		break;
		case 5:
			base= "KOHAAT ";
            qrfbatch(base);
		break;
		case 6:
			base= "RAWAL PINDI ";
            qrfbatch(base);
		break;
	 	case 7:
	 		base="KHARIAN";
 		    qrfbatch(base);
	    break;
		case 8:
	 		base ="GUJRANWALA";
            qrfbatch(base);
	    break;
		case 9:
			base= "MULTAN";
            qrfbatch(base);
		break;
		case 10:
			base="BHAWALNAGAR";
            qrfbatch(base);
		break;
		default:
			cout<<"\nplz enter correct key:\n\n";
			QRF();			
		break;
    }
}

void oldbatchbt(string batch,string base){
	system("cls");
	cout<<"\t\t\t----------------------------------------------------------------\n";
	cout<<"\t\t\tWELCOME TO "<<batch <<" of "<< base <<" BASE of MILLITARY \n\n";
	cout<<"\t\t\t----------------------------------------------------------------\n\n";
	cout<<"HERE THE LIST OF THIS BATCH: \n";
    cout << "Name" << "\t\t" << "ID" << "\t\t\t" << "age\t\t" << "RANK \n";
    ifstream batc("old batch.txt");
    if(!batc.is_open()){
    	cout<<"\n unable to open the file: \n";
 	   batchold();
	}
	string data;
	while (getline(batc, data)){
		cout<<data<<endl;
	}
	batc.close();
	enf();
    
}

void oldbatch(string base1){
	system("cls");
	    string base=base1;
	    cout<<"\n\n\t\t\tWELL COME TO "<< base <<" BASE OF MILLITARY \n";
		cout<<"\t\t\t------------------------------------------\n";
		cout<<"\n chose the batch : \n";
		
		int a;
		cout<<"\n1. Thunderhawks batch\t\t\t 2. Shadow Wolves batch\t\t 3. Iron Phalanx batch\n\n4. Storm Ravens batch \t\t\t 5. Night Sabers batch \t\t 6. Eagle Legion batch  \n\n7. Diamondback Brigade batch \t\t 8. Avalanche Vanguard batch \t 9. Cobra Strike Force batch \n\n10. Sentinel Guardians batch \n";
	    cin>>a;
	    string batch;
	    switch(a){
	    	case 1:
	    		batch="Thunderhawks batch";
	    		oldbatchbt(batch,base);
    		break;
    		case 2:
	    		batch=" Shadow Wolves batch";
	    		oldbatchbt(batch, base);
    		break;
    		case 3:
	    		batch="Iron Phalanx batch";
	    		oldbatchbt(batch, base);
    		break;
    		case 4:
	    		batch="Storm Ravens batch";
	    		oldbatchbt(batch, base);
    		break;
    		case 5:
	    		batch="Night Sabers batch";
	    		oldbatchbt(batch, base);
    		break;
    		case 6:
	    		batch="Eagle Legion";
	    		oldbatchbt(batch, base);
    		break;
    		case 7:
	    		batch="Diamondback Brigade";
	    		oldbatchbt(batch, base);
    		break;
    		case 8:
	    		batch="Avalanche Vanguard";
	    		oldbatchbt(batch, base);
    		break;
    		case 9:
	    		batch="Cobra Strike Force";
	    		oldbatchbt(batch, base);
    		break;
    		case 10:
	    		batch="Sentinel Guardians";
	    		oldbatchbt(batch, base);
    		break;
    		default:
    			oldbatch(base);
    		break;
		}
}

void batchold(){
	cout << "\n\n\t\t\t\t++++++++++++++++++++++++++++++++++\n";
    cout << "\t\t\t\t     OLD BATCH OF MILLITARY \n";
    cout << "\t\t\t\t++++++++++++++++++++++++++++++++++\n";
    cout<<"chose the base \n";
    int a;
    cout<<"\n 1---MUSHAF BASE \t\t\t  2---KARACHI BASE \t\t\t  3---LAHORE BASE \n\n 4---SIALKOT BASES \t\t\t  5---KOHAAT BASE \t\t\t  6---RAWALPINDI BASE \n\n";
    cout<<" 7---KHARIAN BASE \t\t\t  8---GUJRANWALA \t\t\t  9---MULTAN BASE \n\n 10--- BHAWALNAGAR BASE \n";		
    cin>>a;
    string base;
    switch(a){
   	    case 1:
            base="MUSHAF ";
            oldbatch(base);
        break;
        case 2:
          	base= "KARACHI ";
            oldbatch(base);
	    break;
        case 3:
           	base= "LAHORE ";
            oldbatch(base);
	    break;
        case 4:
        	base= "SIALKOT ";
            oldbatch(base);
		break;
		case 5:
			base= "KOHAAT ";
            oldbatch(base);
		break;
		case 6:
			base= "RAWAL PINDI ";
            oldbatch(base);
		break;
	 	case 7:
	 		base="KHARIAN";
 		    oldbatch(base);
	    break;
		case 8:
	 		base ="GUJRANWALA";
            oldbatch(base);
	    break;
		case 9:
			base= "MULTAN";
            oldbatch(base);
		break;
		case 10:
			base="BHAWALNAGAR";
            oldbatch(base);
		break;
		default:
			cout<<"\nplz enter correct key:\n\n";
			batchold();			
		break;
    }
}
 
void budget_mang(double budget){
	cout<<" \n TOTAL BUDGET IS= "<<budget;
	int a;
	cout<<"\n\n if you want to check: \n \t DISTRIBUTION OF % BUDGET----1 \t\t\tDISTRIBUTION OF BUDGET----2 \t\t budget manu---3 \n ";
	cout<<" plz enter choise: ";
	cin >>a;
	switch(a){
		case 1:
			budget_percentage(budget);
		break;
		case 2:
			budget_spent(budget);
		break;
		case 3:
		    budgetmain();
		break;		
		default:
            cout<<"\n plz enter correct choise : ";
            budget_mang(budget);
		break; 
	}
}
void budget_spent(double budget){
	double budgt=budget;
	cout<<"\n\nHERE THE LIST OF DISTRIBUTION OF BUDGET IN MILLITAARY FIELD: \n\n";
	cout<<"TOTAL BUDGET : "<< budgt<<endl;
	double bgt5=(5*budgt)/100;
	double bgt10=(10*budgt)/100;
	double bgt15=(15*budgt)/100;
	cout<<"\n \t\tFIELD  \t\t\t\t\t\t\t SPENT of BUDGET \n\n	SECURITY SYSTEM  \t\t\t\t\t\t\t"<<bgt10 <<"\n\n	INTILLIGENCE  \t\t\t\t\t\t\t\t "<<bgt10<<"\n\n	AMMUNITION SYSTEM  \t\t\t\t\t\t\t "<<bgt5<<"\n\n	WORK LOAD  \t\t\t\t\t\t\t\t "<<bgt15<<"\n\n	MEDICAL SYSTEM  \t\t\t\t\t\t\t "<<bgt5<<"\n\n	MILITARY BASES MANGMENT  \t\t\t\t\t\t "<<bgt15<<"\n\n	ACADEMIC MANGMENT  \t\t\t\t\t\t\t "<<bgt10<<"\n\n	INVENTARY MANGMENT  \t\t\t\t\t\t\t "<<bgt10<<"\n\n	MISSION CMMAND &CONTROL TARGET SYSTEM  \t\t\t\t\t "<<bgt15<<"\n\n	QUICK FORCE MANGMENT  \t\t\t\t\t\t\t "<<bgt5<<"\n\n";
	budget_mang(budget);   	
}

void budget_percentage(double budget1){
	double budget = budget1;
	cout<<"total budget :"<<budget;
	cout<<"\n\nHERE THE LIST OF DISTRIBUTION OF % BUDGET IN MILLITAARY FIELD: \n\n";
	cout<<"\n \t\tFIELD  \t\t\t\t\t\t\t % of BUDGET \n\n	SECURITY SYSTEM  \t\t\t\t\t\t\t 10%.\n\n	INTILLIGENCE  \t\t\t\t\t\t\t\t 10%.\n\n	AMMUNITION SYSTEM  \t\t\t\t\t\t\t 5%.\n\n	WORK LOAD  \t\t\t\t\t\t\t\t 15%\n\n	MEDICAL SYSTEM  \t\t\t\t\t\t\t 5%.\n\n	MILITARY BASES MANGMENT  \t\t\t\t\t\t 15%.\n\n	ACADEMIC MANGMENT  \t\t\t\t\t\t\t 10%\n\n	INVENTARY MANGMENT  \t\t\t\t\t\t\t 10%\n\n	MISSION CMMAND &CONTROL TARGET SYSTEM  \t\t\t\t\t 15%.\n\n	QUICK FORCE MANGMENT  \t\t\t\t\t\t\t 5%\n\n";
    budget_mang(budget);
}

void budgetmain(){
	
	double budgt=900000 ,budget;
	int a;
	cout<<"\nif you want to check: \n \t\t previous budget---1 \t\t \t new budget---2 \t\t\t main manu---3 \n";
	cin >>a;
	switch(a){
		case 1:
			system("cls");
			budget=budgt;
			budget_mang(budget);
			
		break;
		case 2:
			system("cls");
			double newbgt;
		    cout<<"plz enter total budget of year if allocated : ";
 	        cin>>newbgt;
 	        budget_mang(newbgt);
        break;
        case 3:
        	system("cls");
        	mainmanu();
        break;	
        default:
        	system("cls");
        	cout<<"\n plz enter correct choise: ";
        	budgetmain();
       	break;
    }
}

void basesammunication(){
	system("cls");
	cout<<"press key:";
	int a;
    cout<<"\n 1---MUSHAF BASE \t\t\t  2---KARACHI BASE \t\t\t  3---LAHORE BASE \n\n 4---SIALKOT BASES \t\t\t  5---KOHAAT BASE \t\t\t  6---RAWALPINDI BASE \n\n";
    cout<<" 7---KHARIAN BASE \t\t\t  8---GUJRANWALA \t\t\t  9---MULTAN BASE \n\n 10--- BHAWALNAGAR BASE \n";		
	cin>>a;
	if(a>0 || a<11){
		cout<<"\nWELL COME TO AMMUNICATION MANAGMENT TO MILLITARY BASE";
		ammuincation_base_quantity();
	}
	else{
		cout<<"plz enter correct key :";
		basesammunication();
		
	}
	
}

void ammuincation_base_quantity(){
	cout<<"\nNAME \t\t Quantity \nMP5 \t\t 108065.  \nG3 \t\t 109283. \nSMG \t\t 732819 \nLMG \t\t 9823784\n12.7 \t\t 92772 \nRPG7 \t\t 827613 \nMATORS85 \t\t 7667 \nMATTOR120 \t\t 78652 \nMATOR106 \t\t 8767 \nMATOR108 \t\t 8665 \nTANK \t\t 135 \n";
    int a;
    cout<<"\npress a integer to go main ammuniation system:";
    cin>>a;
    if(a>0){
    	ammunication();
	}
	else{
		cout<<"main manue";
		ammunication();
	}
}
void infoammunicatin_eof(){
	int a;
	cout<<"\nfor check more ----1 \t\t\t for main manu----0 : ";
	cin>>a;
	if(a==1){
		infoammunication();
	}
	else{
		ammunication();
	}
}

void infoammunication(){
		again:
		int a;
		cout<<"\t\t Press key you want to check that ammunication: ";
		cin>>a;
		switch(a){
			case 1:
				cout<<"\nMP5: Maschinenpistole 5 (German for \"Machine Pistol 5\")\n";
				infoammunicatin_eof();
			break;
			case 2:
				cout<<"\nG3: Gewehr 3 (German for \"Rifle 3\")\n";       
				infoammunicatin_eof();
			break;
			case 3:
				cout<<"\nSMG: Submachine Gun\n";
				infoammunicatin_eof();
			break;
			case 4:
				cout<<"\nLMG: Light Machine Gun\n";
				infoammunicatin_eof();
			break;
			case 5:
				cout<<"\n12.7: Refers to the caliber of a firearm, typically .50 caliber\n";
				infoammunicatin_eof();
			break;
			case 6:
				cout<<"\nRPG7: Rocket Propelled Grenade 7\n";
				infoammunicatin_eof();
			break;
			case 7:
				cout<<"\n There are many type of MATTOR \n MATOR85, MATTOR120, MATOR106, MATOR 108,\n These seem to be custom or fictional names without widely recognized full forms.\n";
				infoammunicatin_eof();
			break;
			case 8:
			    cout<<"\nTANK: Originally derived from the military concept of a heavily armored vehicle.\n";
				infoammunicatin_eof();
			break;
			default:
				cout<<"\nPLZ enter correct key\n";
				goto again;
			break;
	}
	
}
void ammunication(){
    system("cls");
		cout<<"			____________________________________________\n";
		
		cout<<"				WELL COME TO AMMUNITION SYSTEM \n";
		cout<<"			____________________________________________\n\n";
		cout<<"\t\t HERE THE LIST OF TYPE AMMUNICATION USED IN MILLITARY INTILLIGANCE: \n\n";
		cout<<" 1---MP5 \t\t\t 2---G3 \t\t\t 3---SMG \n\n 4---LMG \t\t\t 5---12.7 \t\t\t 6---RPG7 \n\n 7---MATORS85,106,108,120\t 8---TANK\n\n";
		int b;
		cout<<"If you want to check: \n\n Information about that weapons-----1\t\t Information base ammunication----2 \t\t for goto mainmanu---0\n ";
		cin>>b;
		if(b==1){
			infoammunication();
		}
		else if(b==2){
			basesammunication();
				
		}
		else{
			enf();
		}
	
}

  
void sepoyrank(){
	system("cls");
	cout<<"\n\n HERE THE LIST OF PAKISTAN ARMY SOLDIER :\n\n";
	cout<<"1-SEPOY \t\t2-Lance Naik \t\t3-Naik \t\t4-Havaldar \n\n5-Naib-Subedar \t\t6-Subedar \t\t7-Subedar Major \n\n";
    int a;
	cout<<"press the key you want to check the rank \n\n ";
    cin>>a;
    switch(a){
    case 1:
	    cout<<"\nthe Scale of SEPOY IS : BPS-05 \n";
	    checkagain();
	break;
	case 2:
	    cout<<"\nthe Scale of LANCE NAIK IS : BPS-07 \n";
		checkagain();	
	break;
	case 3:
	    cout<<"\nthe Scale of NAIK IS : BPS-09 \n";
		checkagain();	
	break;
	case 4:
	    cout<<"\nthe Scale of HAVALDAR IS : BPS-11 \n";
		checkagain();	
	break;
	case 5:
	    cout<<"\nthe Scale of NAIB SUBEDAR IS : BPS-14 \n";
		checkagain();	
	break;
	case 6:
	    cout<<"\nthe Scale of SUBEDAR IS : BPS-16 \n";
		checkagain();	
	break;
	case 7:
	    cout<<"\nthe Scale of SUBEDAR MAJOR IS : BPS-17 \n";
		checkagain();	
	break;	
	}	
}  
 
void rankmillitary(){
	cout<<"\n\nThe highest Rank OF the MILLITARY is CHIEF OF ARMY: \n\n";
	cout<<"CHIEF OF ARMY OF PAKISTAN: \n\n \t\t\t\t *GENERAL SYED ASIM MUNEER*";
	cout<<"\n\n HERE THE LIST OF PAKISTAN ARMY OFFICERS :\n\n";
	cout<<"1-GENERAL \t\t2-LAIUTENANT GENERAL \t\t3-MAJOR GENERAL \t\t4-BRIGADIER \n\n5-COLONEL \t\t6-LAIUTENANT COLONEL \t\t7-MAJOR \t\t\t8-CAPTAIN \n\n9-LAIUTENANT \t\t10-2nd-LAIUTENANT \n\n";
	cout<<"\n\n HERE THE LIST OF PAKISTAN ARMY SOLDIER :\n\n";
	cout<<"1-SEPOY \t\t2-Lance Naik \t\t3-Naik \t\t4-Havaldar \n\n5-Naib-Subedar \t\t6-Subedar \t\t7-Subedar Major \n\n";
    cout<<"DO you want to check the order of the rank? \n ";
    int a;
	cout<<"YES---1 \t\t\t NO---0 :";
    cin>>a;
    string base;
    switch(a){
    	case 1:
    		cout<<"press key \n";
    		int a;
    		cout<<"for OFFICER RANK---1 \t\t\t SEPOY RANK ---2 :";
    		cin >>a;
    		if(a==1){
    		   base="MILLITARY ";
    		   officerrank(base);
    	    }
    	    else{
    	    	sepoyrank();
			}
   		break;
   		case 0:
   			enf();
	    break;
	}
}

void mainmillitarybases(){
	system("cls");
	cout<<"\nthere are 10 bases are here under control\n";
	cout<<"there are 6 bases are FLYING bases and 4 are non-flying bases\n";
	cout<<"flying bases means operational bases and non-flying bases means non-operational(training) bases";
	int a;
	cout<<"\n\n\t\t\tFLYING bases----1 \t\t\t non-FLYING bases----2\n";
	cin>>a;
	string base;
	if(a==1){
		system("cls");
		 cout<<"\t\t\t WELCOME TO FLYING BASES \n";
		 cout<<"\n\n here the list of flying (operational) bases\n\n";
		 int b;
		 cout<<" 1---MUSHAF BASE \t\t\t  2---KARACHI BASE \t\t\t  3---LAHORE BASE \n\n 4---SIALKOT BASES \t\t\t  5---KOHAAT BASE \t\t\t  6---RAWALPINDI BASE \n\n";
		 cin>>b;
		 //string base;
		 switch(b){
		 	case 1:
	 		     base="MUSHAF ";
		 		officerrank(base);
            break;
            case 2:
            	base= "KARACHI ";
            	officerrank(base);
            break;
            case 3:
            	base= "LAHORE ";
            	officerrank(base);
            break;
            case 4:
            	base= "SIALKOT ";
            	officerrank(base);
            break;
			case 5:
				base= "KOHAAT ";
            	officerrank(base);
            break;
			case 6:
				base= "RAWAL PINDI ";
            	officerrank(base);
            break;
            
	 	}
            	
	}
	else if(a==2){
		system("cls");
		cout<<"\t\t\t WELCOME TO NON- FLYING BASES\n";
		 cout<<"\n\n here the list of non-flying (non-operational) bases\n\n";
		 cout<<"press key :\n";
	     int g;
		 cout<<"1---KHARIAN BASE \t\t\t 2---GUJRANWALA \n3---MULTAN BASE \t\t\t 4--- BHAWALNAGAR BASE \n\n";
		 cin>>g;
		 switch(g){
		 	case 1:
		 		base="KHARIAN";
		 		officerrank(base);
	 		break;
	 		case 2:
	 			base ="GUJRANWALA";
	 	    	officerrank(base);
            break;
			case 3:
				base= "MULTAN";
				officerrank(base);
            break;
			case 4:
				base="BHAWALNAGAR";
				officerrank(base);
            break;
			default:
				cout<<"\nplz enter correct key:\n\n";
				mainmillitarybases();
			break;
				
		 		
		 }
	}
	else{
	cout<<"\n plz enter correct choise: \n\n";
	mainmillitarybases();
   }
}

void officerrank( string& base){
	system("cls");
	cout<<"\n\t\t\t\t WELCOME TO "<< base <<" BASE OF PAKISTAN \n\n";
    int a;
    cout<<"press number \n\n:";
    cout<<"\t1---GENERAL \t\t\t 2---BRIGADIER \t\t\t 3---CAPTAIN \n\n ";
    cin>>a;
    if(a==1){
     cout<<"the scale of GENERAL IS: BPS-22 \n\n";	
 	 cout<<"the GENERAL control the fowllowing RANK : \n";
   	 int a;
	 cout<<"1---LAIUTENANT GENERAL \t\t\t 2---MAJOR GENERAL \n";
 	 cin >>a;
 	 if(a==1){
 	 	cout<<"\t\t\t\t\t-----------------\n";
		cout<<"the Scale of LAIUTENANT GENERAL is:BPS-22 \n";
		goto brigadier;
     }
     else if(a==2){
			cout<<"the Scale of MAJOR GENERAL IS: BPS-22";
		goto brigadier;
     }
    }
    else if(a==2){
     brigadier:
	 cout<<"\t\t\t\t\t-----------------";
	 cout<<" \nTHE BRIGADIER IS UNDER THE LAIUTENANT GENERAL and MAJOR GENERAL \n  ";	
   	cout<<"\nthe scale of BRIGADIER is:BPS-21 \n\n";
	    cout<<"the BRIGADIER control the following rank: \n\n";
 	 int d;
   	 cout<<"1---COLONEL(Col) \t\t\t 2---LAIUTENANT COLONEL \t\t\t 3---MAJOR\n\n";
 	 cin>>d;
 	 if(d==1){
 	 	cout<<"\t\t\t\t\t-----------------\n";
		cout<<"the Scale of COLONEL IS:BPS-20 ";
		goto captain;
	 }
	 else if(d==2){
		cout<<"the Scale of LAIUTENANT COLONEL is:BPS-19 ";
		goto captain;
	 }
	 else if(d==3){
		cout<<"the Scale of MAJOR is:BPS-18 ";
		goto captain;
		 }	 
    }
    else if(a==3){
    	captain:
    	
   		cout<<"\n\n THE CAPTAIN IS UNDER THE COLONEL and LAIUTENANT COLONEL and MAJOR . ";
    	cout<<"\n\n the Scale of CAPTAIN is: BPS-17 \n";
		cout<<"\n the CAPTAIN control the following RANK :\n\n";
	 	int e;
 	    cout<<"1---lieutenant \t\t\t 2---2nd lieutenant \n\n";
 	    cin>>e;
 	    if(e==1){
 	    	cout<<"\t\t\t\t\t-----------------\n";
 		    cout<<"the Scale of lieutenant is:BPS-17\n\n ";
 		    goto lait2;
        }
	    else if(e==2){
	    	lait2:
    		cout<<"the 2nd-lieutenant is under the lieutenant\n\n";
		    cout<<"the Scale of 2nd-lieutenant is:BPS-17\n\n";
	    }
	    else
	    cout<<"plz enter correct number";
 	}
 	else
 	cout<<"plz enter correct number:";
 	enf();
}

void workload(){
	int num_of_soldiers;
    int num_of_working_soldiers;
    int total_hours_of_work;
    int average_hours_of_work;
    system("cls");
    
    cout << "Enter the number of available soldiers: ";
    cin >> num_of_soldiers;

    cout << "Enter the number of working soldiers: ";
    cin >> num_of_working_soldiers;

    cout << "Enter the total hours of work: ";
    cin >> total_hours_of_work;

    if (num_of_working_soldiers > num_of_soldiers) {
        cout << "Error: More soldiers are working than are available." << endl;
    }

    average_hours_of_work = total_hours_of_work / num_of_working_soldiers;

    cout << "The average hours of work per soldier is: " << average_hours_of_work << endl;
    enf();

}

void battalianinformatrion(){
	    system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO BATCH & BATTALIAN \n\n";
        cout<<"choose the option \n \n";
        int n;
        cout<<"new entry---1			old batch---2      : ";
        cin>>n;
        if(n==1){
   	 	    // Get user input for a new soldier entry
			Soldier1 newSoldier;
			
            cin.ignore(); // Ignore the newline character left in the buffer
    		cout << "Enter soldier name: ";
    		getline(cin, newSoldier.name);
    		
     	    //cin.ignore(); // Ignore the newline character left in the buffer
   			cout << "Enter soldier age: ";
 		    cin >> newSoldier.age;

    		cin.ignore(); // Ignore the newline character left in the buffer
    		cout << "Enter soldier rank: ";
  		    getline(cin, newSoldier.rank);

    		// Display the entered soldier entry
    		cout << "\nNew soldier entry added:\n";
    		cout << "Name: " << newSoldier.name << "\n";
    		cout << "Age: " << newSoldier.age << "\n";
  		    cout << "Rank: " << newSoldier.rank << "\n";
  		    
  		    enf();
        }
        else if(n==2){
			batchold();
		enf();
		}
		

    }
void medical_system(){
//	ofstream file;
     Patient patient;

    cin.ignore();//ignore first line character
	cout << "Enter patient name: ";
    getline(cin,patient.name);

    //cin.ignore();//ignore first line character 
    cout << "Enter patient age: ";
    cin >> patient.age;
    
    cin.ignore();//ignore first line character ge;
   
    cout<< "Enter patient gender: ";
    getline(cin,patient.sex);
    
	//cin.ignore();//ignore first line character
	cout << "Enter patient blood pressure: ";
    getline(cin,patient.blood_pressure);
    
	//cin.ignore();//ignore first line character
	
	cout << "Enter patient temperature: ";
   	getline(cin,patient.temperature);
      
    //cin.ignore();//ignore first line character
	
	cout << "Enter patient previous diseases (if any): ";
    getline(cin,patient.previous_disease);
   
    //cin.ignore();//ignore first line character
    
    //show details
    
    cout << "\n\n Patient information saved successfully." << endl;
    cout<<"_________________\n";
    cout<< "Name: "<< patient.name << endl;
    cout<<"Age: "<< patient.age << endl;
    cout<<"Gender : "<< patient.sex << endl;
    
    cout<<"BLOOD PRESSURE: "<< patient.blood_pressure << endl;
    cout<< "Temperature : "<< patient.temperature << endl;
    cout<< "Prevaious dieases : "<<patient.previous_disease << endl;
    
        enf();
}

void mainmanu()
{      // function for main manu...
	 cout<<"\n\n         				MAIN MANU\n\t\t\t\t ________________________";
	 manu();
}
void manu(){
	 cout<<"\n press the key you want to choose:--- \n\n";	
	int num;
	cout<<" BATCH---1				BUDGET & FINANCE---2					SECURITY SYSTEM---3				\n \n INTILLIGENCE---4 			AMMUNITION SYSTEM---5					WORK LOAD---6		\n\n MEDICAL SYSTEM---7			MILITARY BASES MANGMENT---8				RANK MANGMENT---9 \n \n\n RELATION WITH OTHER MILLITARY---10	ACADEMIC MANGMENT---11					INVENTARY MANGMENT---12			\n\n MISSION CMMAND &CONTROL TARGET SYSTEM---13							QUICK REACTION FORCE--14";
    cout << "\n\nEnter your choice =";
	cin>>num;
		if(num==1){
			system("cls");
		//cout<<"			____________________________________________\n";
		//cout<<"				WELL COME TO BATCH & BATTALIAN \n\n";
		 battalianinformatrion();
		}

	else if(num==2){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO BUDJET & FINANCE \n\n";
		budgetmain();	
	}
	else if(num==3){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO SECURITY SYSTEM \n\n";	
		millitarytask();
	}
	else if(num==4){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO INTILLIGENCE \n\n";	
		millitarytask();
	}
	else if(num==5){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO AMMUNITION SYSTEM \n\n";
		cout<<"			____________________________________________\n";
		ammunication();
			
	}
	else if(num==6){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO WORK LOAD \n\n";	
        workload();
	}
	else if(num==7){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO MEDICIAL SYSTEMT \n\n";	
        medical_system();
	}
	else if(num==8){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO MILLITARY BASES MANGMENT \n\n";
		mainmillitarybases();	
	
	}
	else if(num==9){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO RANK SYSTEM \n\n";	
		rankmillitary();
		
	}
	else if(num==10){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO RELATION WITH OTHER MILLITARY  \n\n";
		millitarytask();	
	}
	else if(num==11){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO ACADMIC MANGMENT \n\n";
		academicmang();	
	}
	else if(num==12){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO INVENTARY MANGMENT \n\n";	
		ammunication();
	}
	else if(num==13){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO MISSION COMMAND & CONTROL TARGET SYSTEM \n\n";	
		millitarytask();
	}
	else if(num==14){
		system("cls");
		cout<<"			____________________________________________\n";
		cout<<"				WELL COME TO QUICK REACTION FORCE MANGMENT \n\n";
		QRF();	
	}
	
}


int main(){
	
	cout<<"					**TURN TO ALLAH BEFORE YOU RETURN TO ALLAH** \n";
	cout<<"			____________________________________________\n";
	cout<<"                 	MILLITARY INTILLIGENCE (M.I) MANGMANT SYSTEM \n";
	cout<<"			____________________________________________\n";
	// for main manu;,nk,
	mainmanu();
return 0;

}

