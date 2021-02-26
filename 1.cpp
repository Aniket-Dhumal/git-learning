#include<iostream>
using namespace std;
class criketer
{
	protected:
		char name[20];
		int age;
		public:
			void getinfo()
			{
				cout<<"enter criketer name:";
				cin>>name;
				cout<<"Enter age";
				cin>>age;
			}
};
class bowler:public criketer
{
	protected:
		int bowling_status;
		public:
			void getdata()
			{
				cout<<"enter bowling status";
				cin>>bowling status;
				
			}
			all rounder:public bowler:public data
			{
				void display()
				{
					cout<<"batman name"<<name;
					cout<<"Age"<<age;
					cout<<"bowling status"<<bowling_status;
					if(bowling_status>5&&bowling>95)
					{
						cout<<"He is all round";
					}
				}
			}
}
