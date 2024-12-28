#include<iostream>
#include<string>
using namespace std;
class Employee{
		string name,emp_id,address,email,mobile_no;
		public:
			void setDetails(){
				cout<<"Enter the Name of the employee:";
				cin>>name;
				cout<<"Enter the Address of the employee:";
				cin>>address;
				cout<<"Enter the Id of the employee:";
				cin>>emp_id;
				cout<<"Enter the Email of the employee:";
				cin>>email;
				cout<<"Enter the Mobile of the employee:";
				cin>>mobile_no;
			}
};
class Programmer:public Employee{
	float basic_pay;
	public:
		void setBasicPay(){
			cout<<"enter the basic pay of the programmer:";
			cin>>basic_pay;
		}
		void calculateAndDisplayPaySlip(){
			float da=0.97*basic_pay;
			float hra=0.10*basic_pay;
			float pf=0.12*basic_pay;
			float club_fund=0.001*basic_pay;
			float gross_pay=basic_pay+da+hra;
			float net_pay=gross_pay-(pf+club_fund);
			
			cout<<"\nProgrammer payment slip\n";
			cout<<"Basic pay:"<<basic_pay<<endl;
			cout<<"Dearness Allowance:"<<da<<endl;
			cout<<"House Rent Allowance:"<<hra<<endl;
			cout<<"Provident Fund:"<<pf<<endl;
			cout<<"Club Fund:"<<club_fund<<endl;
			cout<<"Gross Pay:"<<gross_pay<<endl;
			cout<<"Net Pay:"<<net_pay<<endl;
		}
};
int main(){
	Programmer programmer;
	programmer.setDetails();
	programmer.setBasicPay();
	programmer.calculateAndDisplayPaySlip();
	return 0;
}
