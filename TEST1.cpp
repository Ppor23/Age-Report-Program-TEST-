#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int input15=0,input25=0,input35=0,input36=0;
	int male15=0 , female15=0 , male25=0 , female25=0 , male35=0 , female35=0 , male36=0 , female36=0;
	int barM15=0,barM25=0,barM35=0,barM36=0  ,  barF15=0,barF25=0,barF35=0,barF36=0;
	int bar15=0,bar25=0,bar35=0,bar36=0;
	int allM=0,allF=0,allP=0;
	char con='N';
	int maleR=0,femaleR=0,maleR15=0,femaleR15=0,maleR25=0 , femaleR25=0 , maleR35=0 , femaleR35=0 , maleR36=0 , femaleR36=0;
	
	do{ //0-15
		system("cls");
		cout<<endl<<"Enter People Age 0-15:";
		cin>>input15;
		bar15=input15;
		cout<<endl<<"Enter Male:";
		cin>>male15;
		barM15=male15;
		cout<<endl<<"Enter Female:";
		cin>>female15;
		barF15=female15; 
		cout<<endl;
		cout<<"Continue?(Y/N):";
		cin>>con;
	}
	while((con=='N')||(con=='n'));
	
	system("cls");
	
	do{ //16-25
		system("cls");
		cout<<endl<<"Enter People Age 16-25:";
		cin>>input25;
		bar25=input25;
		cout<<endl<<"Enter Male:";
		cin>>male25;
		barM25=male25;
		cout<<endl<<"Enter Female:";
		cin>>female25;
		barF25=female25;
		cout<<endl;
		cout<<"Continue?(Y/N):";
		cin>>con;
	}
	while((con=='N')||(con=='n'));
	
	system("cls");
	
	do{ //26-35
		system("cls");
		cout<<endl<<"Enter People Age 26-35:";
		cin>>input35;
		bar35=input35;
		cout<<endl<<"Enter Male:";
		cin>>male35;
		barM35=male35;
		cout<<endl<<"Enter Female:";
		cin>>female35;
		barF35=female35;
		cout<<endl;
		cout<<"Continue?(Y/N):";
		cin>>con;
	}
	while((con=='N')||(con=='n'));
	
	system("cls");
	
	do{ // >36
		system("cls");
		cout<<endl<<"Enter People Age >36:";
		cin>>input36;
		bar36=input36;
		cout<<endl<<"Enter Male:";
		cin>>male36;
		barM36=male36;
		cout<<endl<<"Enter Female:";
		cin>>female36;
		barF36=female36;
		cout<<endl;
		cout<<"Continue?(Y/N):";
		cin>>con;
	}
	while((con=='N')||(con=='n'));
	
	allP=input15+input25+input35+input36;
	allM = male15+male25+male35+male36;
	allF = female15+female25+female35+female36;
	
	system("cls");
	
	cout<<"Summary Report"<<endl<<endl;
	cout<<"Total ["<<allP<<"]"<<" Person"<<endl;
	
	cout<<"Male ";
	
	//ALL MALE
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		cout<<"|";
		maleR+=1;
	}
	while(allM>maleR);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<allM<<"]";
	
	cout<<endl<<endl;
	
	cout<<"Female ";
	
	//ALL FEMALE
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		cout<<"|";
		femaleR+=1;
	}
	while(allF>femaleR);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<allF<<"]";
	
	cout<<endl<<endl;
	cout<<"Age Report"<<endl<<endl;
	//male,Female 0-15
	cout<<"0-15 Total ["<<male15+female15<<"]";
	cout<<endl;
	cout<<"Male";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		maleR15+=1; //malereport + 1
		cout<<"|";
	}
	while(male15>maleR15);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<male15<<"]";
	
	cout<<endl<<endl;
	
	cout<<"Female";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		femaleR15+=1; //femalereport + 1
		cout<<"|";
	}
	while(female15>femaleR15);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<female15<<"]";
	
	cout<<endl<<endl;
	
	//Male,Female 16-25
	cout<<"16-25 Total ["<<male25+female25<<"]";
	cout<<endl;
	cout<<"Male";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		maleR25+=1; //malereport + 1
		cout<<"|";
	}
	while(male25>maleR25);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<male25<<"]";
	
	cout<<endl<<endl;
		
	cout<<"Female";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		femaleR25+=1; //femalereport + 1
		cout<<"|";
	}
	while(female25>femaleR25);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<female25<<"]";
	
	cout<<endl<<endl;
	
	//Male,Female 26-35
	cout<<"26-35 Total ["<<male35+female35<<"]";
	cout<<endl;
	cout<<"Male";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		maleR35+=1; //malereport + 1
		cout<<"|";
	}
	while(male35>maleR35);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<male35<<"]";
	
	cout<<endl<<endl;
	
	cout<<"Female";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		femaleR35+=1; //femalereport + 1
		cout<<"|";
	}
	while(female35>femaleR35);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<female35<<"]";
	
	cout<<endl<<endl;
	
	//Male,Female >36
	cout<<" >36 Total ["<<male36+female36<<"]";
	cout<<endl;
	cout<<"Male";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		maleR36+=1; //malereport + 1
		cout<<"|";
	}
	while(male36>maleR36);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<male36<<"]";
	
	cout<<endl<<endl;
	
	cout<<"Female";
	do{
		SetConsoleTextAttribute(hStdOut, 1);
		femaleR36+=1; //femalereport + 1
		cout<<"|";
	}
	while(female36>femaleR36);
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<"["<<female36<<"]";
	
	cout<<endl<<endl;
	SetConsoleTextAttribute(hStdOut, 12);
	cout<<"Thank You!!";
	SetConsoleTextAttribute(hStdOut, 10);
	cout<<endl<<endl;
	cout<<"You Can Report Bug at[ FB.Punnapat Prathipasen ]";
	SetConsoleTextAttribute(hStdOut, 15);
	cout<<endl;
	system("pause");
	return 0;
}
