#include<iostream>
using namespace std;
class box{
	private:
	int length;
	int width;
	public:
		box(int l,int w){
			length=l;
			width=w;
		}
		void display(){
			cout<<"length of the box:"<<length<<endl;
			cout<<"width of the box:"<<width<<endl;
		}
};
int main(){
	box b1(9,6);
	b1.display();
	return 0;
}
