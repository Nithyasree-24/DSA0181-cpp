#include<iostream>
using namespace std;
class car{
	private:
	int id,marks;
	string model;
	static int oc;
	public:
		car(int ID,int num,string type){
			id=ID;
			marks=num;
			model=type;
		}
		void display(){
			cout<<"car Id:"<<id<<endl;
			cout<<"car model:"<<model<<endl;
			cout<<"Marks:"<<marks<<endl;
			oc++;
		}
	static void displayoc(){
			cout<<"total objects created:"<<oc<<endl;
		}
};
int car::oc=0;
int main(){
	car c1(100,10,"Ferrari");
	c1.display();
	car c2(102,9,"Mercedes");
	c2.display();
	car::displayoc();
	return 0;
}
