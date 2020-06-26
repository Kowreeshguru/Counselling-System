#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<sstream>
using namespace std;

//Specified number of seats for each community	
int oc=10,bc=8,mbc=8,bcm=5,sc=5,sca=3,st=1;
	
class Student
{
 int admno;
 char name[30];
 char gender;
 float marks;
 char com[3];
 struct date
 {
	int date;
	int month;
	int year;
 }d;

 public:
  void getData();
  void importfile();
  int getAdmno(){return admno;}
}s;

void Student::importfile()
{
	ifstream file("adsanamelist.csv");       //importing of the Excel DB as .csv file
	string a[500],b[500],c[500],d[500],f[500],g[500],e[500];
	string ssa[40],ssb[40],ssc[40],ssd[40],ssf[40],ssg[40],sse[40];
	string dsa[40],dsb[40],dsc[40],dsd[40],dsf[40],dsg[40],dse[40];
	string dcsa[40],dcsb[40],dcsc[40],dcsd[40],dcsf[40],dcsg[40],dcse[40];
	int digit[500],mark[500];
	int ss=1,ds=1,dcs=1;
	int count=0,i=0;
	string line;
	if(!file)
	cout<<"open";

	//import excel value and stored in the array 
	while(file.good())
	{
		getline(file,a[i],',');
		getline(file,b[i],',');
		getline(file,c[i],',');
		getline(file,d[i],',');
		getline(file,e[i],',');
		getline(file,f[i],',');
		getline(file,g[i],'\n');
		count++;
		i++;
	}
	file.close();
//Swaping the content array according to thier marks using bubble sort
for(int i=0;i<count;i++)
{
	for(int j=0;j<500;j++)
	{
		if(e[i]>e[j])
		{
			swap(e[j],e[i]);
			swap(a[j],a[i]);
			swap(b[j],b[i]);
			swap(c[j],c[i]);
			swap(d[j],d[i]);
			swap(f[j],f[i]);
			swap(g[j],g[i]);
		}
	}
}

//Seat allocation for softare systems according to their community
for(i=0;i<count;i++)
{
	if(ss>=1 && ss<=40)
	{
	if(f[i]=="OC" && oc>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		oc--;
		ss++;
	}
	else if(f[i]=="BC" && bc>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		bc--;
		ss++;
	}
	else if(f[i]=="MBC" && mbc>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		mbc--;
		ss++;
	}
	else if(f[i]=="BCM" && bcm>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		bcm--;
		ss++;
	}
	else if(f[i]=="SC" && sc>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		sc--;
		ss++;
	}
	else if(f[i]=="SCA" && sca>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		sca--;
		ss++;
		//cout<<sca<<endl;
	}
	else if(f[i]=="ST" && st>0 && g[i]=="0")
	{
		ssa[ss]=a[i];ssb[ss]=b[i];ssc[ss]=c[i];ssd[ss]=d[i];sse[ss]=e[i];ssf[ss]=f[i];g[i]="1";
		st--;
		ss++;
	}
}
}

//Seat allocation for Data science according to their community
oc=10;bc=8;mbc=8;bcm=5;sc=5;sca=3;st=1;
if(ds>=1 && ds<=40)
{
for(i=0;i<count;i++)
{
	if(f[i]=="OC" && oc>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		oc--;
		ds++;
	}
	else if(f[i]=="BC" && bc>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		bc--;
		ds++;
	}
	else if(f[i]=="MBC" && mbc>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		mbc--;
		ds++;
	}
	else if(f[i]=="BCM" && bcm>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		bcm--;
		ds++;
	}
	else if(f[i]=="SC" && sc>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		sc--;
		ds++;
	}
	else if(f[i]=="SCA" && sca>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		sca--;
		ds++;
	}
	else if(f[i]=="ST" && st>0 && g[i]=="0")
	{
		dsa[ds]=a[i];dsb[ds]=b[i];dsc[ds]=c[i];dsd[ds]=d[i];dse[ds]=e[i];dsf[ds]=f[i];g[i]="1";
		st--;
		ds++;
	}	
}
}

//Seat allocation for Decision and computing science according to their community
oc=10;bc=8;mbc=8;bcm=5;sc=5;sca=3;st=1;
for(i=0;i<count;i++)
{
	if(f[i]=="OC" && oc>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		oc--;
		dcs++;
	}
	else if(f[i]=="BC" && bc>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		bc--;
		dcs++;
	}
	else if(f[i]=="MBC" && mbc>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		mbc--;
		dcs++;
	}
	else if(f[i]=="BCM" && bcm>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		bcm--;
		dcs++;
	}
	else if(f[i]=="SC" && sc>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		sc--;
		dcs++;
	}
	else if(f[i]=="SCA" && sca>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		sca--;
		dcs++;
	}
	else if(f[i]=="ST" && st>0 && g[i]=="0")
	{
		dcsa[dcs]=a[i];dcsb[dcs]=b[i];dcsc[dcs]=c[i];dcsd[dcs]=d[i];dcse[dcs]=e[i];dcsf[dcs]=f[i];g[i]="1";
		st--;
		dcs++;
	}	
}	


int ch;
while(1)
{
cout<<"\n\t\t\t\t\t\t\t1.To view Software Systems\n\t\t\t\t\t\t\t2.To view Data Science\n\t\t\t\t\t\t\t3.To view Decision and Computing Science\n\t\t\t\t\t\t\t4.To view Hashing table\n\n\t\t\t\t\t\t\tEnter your choice::";
cin>>ch;
if(ch==1)
{
	cout<<"\t\t\t"<<"============================================================"<<"\n";
	cout<<"\t\t\t"<<"=     ****SELECTED CANDIDATES FOR SOFTWARE SYSTEMS****     ="<<"\n";
	cout<<"\t\t\t"<<"============================================================"<<"\n";		
for(i=0;i<ss;i++)
{
	cout<<ssa[i]<<"\n"<<ssb[i]<<"\n"<<ssc[i]<<"\n"<<ssd[i]<<"\n"<<sse[i]<<"\n"<<ssf[i]<<"\n"<<"=============================="<<endl;
}
cout<<"NO OF CANDIDATES IN SS::"<<ss-1<<endl;
}

else if(ch==2)
{
cout<<"\t\t\t"<<"============================================================"<<"\n";
cout<<"\t\t\t"<<"=       ****SELECTED CANDIDATES FOR DATA SCIENCE****       ="<<"\n";
cout<<"\t\t\t"<<"============================================================"<<"\n";
for(i=0;i<ds;i++)
{
	cout<<dsa[i]<<"\n"<<dsb[i]<<"\n"<<dsc[i]<<"\n"<<dsd[i]<<"\n"<<dse[i]<<"\n"<<dsf[i]<<"\n"<<"=============================="<<endl;
}
cout<<"NO OF CANDIDATES IN DS::"<<ds-1<<endl;
}

else if(ch==3)
{
cout<<"\t\t\t"<<"========================================================================"<<"\n";
cout<<"\t\t\t"<<"     ****SELECTED CANDIDATES FOR DECISION AND COMPUTING SCIENCE****     ="<<"\n";
cout<<"\t\t\t"<<"========================================================================="<<"\n";
for(i=0;i<ds;i++)
{
	cout<<dcsa[i]<<"\n"<<dcsb[i]<<"\n"<<dcsc[i]<<"\n"<<dcsd[i]<<"\n"<<dcse[i]<<"\n"<<dcsf[i]<<"\n"<<"=============================="<<endl;
}
cout<<"NO OF CANDIDATES IN DCS::"<<dcs-1<<endl;
}

//Hashing the application number
else if(ch==4)
{
	int hash[500];
	for(i=0;i<count-1;i++)
	{
		
		cout<<"|"<<a[i]<<"\t|\t";
		if(sscanf(a[i].c_str(), "%d", &hash[i])==1)
			digit[i]=hash[i]%1000;
		if(sscanf(e[i].c_str(), "%d", &mark[i])==1)
		{
		}
		cout<<digit[i]<<"\t|\t";
		cout<<hash[i]<<"//"<<mark[i]<<"\t|"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
	}
}
else if(ch==0)
{
	break;
}
}
}

void project()
{
 int ch;
 do
 {
  cout<<"\t\t\t"<<"=======================================================\n";
  cout<<"\t\t\t"<<"***************WELCOME TO CIT ADMISSIONS***************\n";
  cout<<"\t\t\t"<<"=======================================================\n";
  cout<<"0. Exit from Program\n";
  cout<<"1. START COUNCELLING\n";
  cout<<"Enter your choice  : ";
  cin>>ch;
  system("cls");
  switch(ch)
  {
   	case 1: s.importfile();
	        break;
  }
  system("pause");
 }while(ch);
}

int main()
{
 project();
}
