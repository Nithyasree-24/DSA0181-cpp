#include<iostream>
using namespace std;
class largest{
	int a,b,m;
	public:
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		friend void find_max(largest obj);
};
void find_max(largest obj) {
    obj.m = (obj.a > obj.b) ? obj.a : obj.b;
    cout << "The largest number is: " << obj.m << endl;
}

int main() {
    largest obj;
    int num1, num2;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    obj.setdata(num1, num2); 
    find_max(obj); 
    return 0;
}
