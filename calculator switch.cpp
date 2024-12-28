#include<iostream>
using namespace std;
int main(){
cout<<"1.Add"<<endl<<"2.Sub"<<endl<<"3.Mul"<<endl<<"4.Div"<<endl<<"5.Mod"<<endl;
int choice,n1=2,n2=2;
cout<<"enter choice:"<<endl;
cin>>choice;
switch(choice){
	case 1:
		cout<<"result:"<<n1+n2;
		break;
		case 2:
			cout<<"result:"<<n1-n2;
		break;
		case 3:
			cout<<"result:"<<n1*n2;
		break;
		case 4:
			cout<<"result:"<<n1/n2;
		break;
		case 5:
			cout<<"result:"<<n1%n2;
		break;
		default:
			cout<<"invalid!";
		}
		
}
