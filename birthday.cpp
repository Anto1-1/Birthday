#include<iostream>
#include <Windows.h>
#include<fstream>
#include<string>
#include <ctime>

using namespace std;

int main()
{
	string name,extra;
	int bmon,bdat,date,month,year,temp=0;

	time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    date = local_time->tm_mday;
    month = 1+local_time->tm_mon;
    year= 1900 + local_time->tm_year;

	fstream file;
	file.open("list.txt");

	file>>extra;
	file>>extra;
	file>>extra;
	

	system("CLS");

	while(!file.eof())
	{
		file>>bdat;
		file>>bmon;
		file>>name;

		if(date==bdat)
		{	
			if(month==bmon)
			{	
				cout<<"\t\t\t******************************************************************************"<<endl;
				cout<<"\n\t\t\tDate :"<<date<<"/"<<month<<"/"<<year<<endl;
				cout<<"\t\t\t\t\t Happy Birthday My dear '"<<name<<"'\t\t\t"<<endl;
				cout<<"\n\t\t\t\tWishing you a beautiful day with good health and happiness forever."<<endl;
				cout<<"\n \t\t\t\t Once again we wish you many more happy returns of the day !"<<endl;
				cout<<"\n\t\t\t******************************************************************************"<<endl;
				system("Color 0A");

				temp=1;
			}
		}	
	}

	if(temp==0)
	{
		cout<<"\t\t\t******************************************************************************"<<endl;
		cout<<"\n\t\t\tDate :"<<date<<"/"<<month<<"/"<<year<<endl;
		cout<<"\t\t\t\t\t !! Today no one have birthday !! "<<endl;
		cout<<"\n \t\t\t\t\t    ! Have a wonderful day !"<<endl;
		cout<<"\n\t\t\t******************************************************************************"<<endl;
		system("Color 0A");
	}

	Sleep(3000);	
	return 0;
}