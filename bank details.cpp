#include<iostream>
using namespace std;
class BankAccount{
	private:
		string accountHolderName;
		double balance;
		public:
			BankAccount(string name,double initialBalance){
				accountHolderName=name;
				balance=initialBalance;
				cout<<"the account created for"<<accountHolderName<<"with balance of"<<balance<<endl;
			}
			void displayAccountDetails(){
				cout<<"Account Holder:"<<accountHolderName<<endl;
				cout<<"Current Balance:"<<balance<<endl;
			}
};
int main(){
	BankAccount account1("John",500.0);
	account1.displayAccountDetails();
	return 0;
}
