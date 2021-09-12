#include<iostream>
using namespace std;
class Time{
	int hour,min,sec;
	public:
		Time(int hour,int min,int sec){
			this->hour=hour;
			this->min=min;
			this->sec=sec;
			
		}
		void display(){
			cout<<"\n hour: min: sec"<<hour<<":"<<min<<":"<<sec;
			
		}
};
int main(void)
{
	Time T= Time(10,2,3);
	T.display();
	return 0;
}
