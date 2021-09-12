/*
Q.1 Create the following classes and write member functions and display
proper information to user using constructor and destructor also use this
pointer.
a) Time b) Date c) Person d) Student e) Fan f) Point

*/
#include<iostream>
using namespace std;
class Time
{
	int hour,min,sec;
	public:
		Time(int hour,int min,int sec){
			this->hour=hour;
			this->min=min;
			this->sec=sec;
			
		}
		void display(){
			cout<<"hour: min: sec"<<hour<<":"<<min<<":"<<sec;
			
		}
		~Time(){
			cout<<"/n";
		}
	
};

class Date{
	int year, month,date;
	public:
		Date(int year,int month,int date){
			this->year=year;
			this->month=month;
			this->date=date;
		}
	void display(){
		cout<<date<<year<<"/"<<month<<"/"<<date;
	}
	~Date()
	{
		cout<<"\n";
	}
};

class Person{
	int id;
	string name;
	string address;
	Person(int id, string name,string address){
		this->id=id;
		this->name=name;
		this->address=address;
	}
	void display()
	{
		cout<<"\n id :"<<id;
		cout<<"\n name :"<<name;
		cout<<"\n address :"<<address;
	}
	~Person()
	{
		cout<<"\n";
	}
};
class Student{
	int rn;
	string name;
	float fees;
	public:
		Student(int rn, string name ,double fees){
			this->rn=rn;
			this->name=name;
			this->fees=fees;
		}
	void display(){
		cout<<"\n Roll No :"<<rn;
		cout<<"\n Name :"<<name;
		cout<<"\n Fees :"<<fees;
	}
    
	~ Student()
	{
		cout<<"\n";
	}
	
};
class Fan{
	int id;
	string color;
	double price;
	Fan(int id,string color,double price){
		this->id=id;
		this->color=color;
		this->price=price;
	}
	void display()
	{
		cout<<"\n id :"<<id;
		cout<<"\n color :"<<color;
		cout<<"\n price :"<<price;
	}
	~Fan(){
		cout<<"\n";
		
	}
};
class Point{
	int x,y,z;
	Point(int x, int y,int z){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	void display(){
		cout<<"Point :"<<x<<":"<<y<<":"<<z;
	}
    ~Point()
	{
		cout<<"\n";
	}
};
int main()
{
	Time t=Time(12,34,56);
	Date d(2000,14,4);
	Person p(1,,nagar);
	Student s(1,ashwini,34.5);
	Fan f(1,blue,100);
	Point o(1,1,1);
	t.display();
	d.display();
	p.display();
	s.display();
	o.display();
	f.display();
	return 0;
	
}

