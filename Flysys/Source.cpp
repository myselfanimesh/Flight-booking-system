#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
#define ctg 2500
#define raj 2700
#define khu 2300
#define bar 3200
#define syl 3000
#define ran 3500
class Customer
{
public:
	string name, passport;
	int phone;
	void getInfo()
	{
		cout << "Passenger's Name : ";
		getline(cin, name);
		cout << "Passport : ";
		getline(cin, passport);
		cout << "Phone : ";
		cin >> phone;
	}
	void dispInfo()
	{
		cout << "Name : " << name << endl;
		cout << "Passport :" << passport << endl;
		cout << "Phone : " << phone;
	}
};
class Flights
{
	int opt;
public:
	void FlightList()
	{
		cout << "1. Chittagong" << endl;
		cout << "2. Barisal" << endl;
		cout << "3. Sylhet" << endl;
		cout << "4. Rajshahi" << endl;
		cout << "5. Khulna" << endl;
		cout << "6. Rangpur" << endl;
	}
	void flightopt()
	{
		cin >> opt;
		switch (opt)
		{
		case 1:
			cout << "CTG at 8.00 a.m BDT "<<ctg<<endl;
			break;
		case 2:
			cout << "Barisal at 9.00 a.m BDT "<<bar<<endl;
			break;
		case 3:
			cout << "Sylhet at 11.00 a.m BDT "<<syl<<endl;
			break;
		case 4:
			cout << "Rajshahi at 11.30 a.m BDT "<<raj<<endl;
			break;
		case 5:
			cout << "Khulna at 1.00 p.m BDT "<<khu<<endl;
			break;
		case 6:
			cout << "Rangpur at 6.00 p.m BDT "<<ran<<endl;
			break;
		default:
			cout << "Invalid Selection\n";
		}
	}
};
class Seat : public Flights
{
public:
	int arr[120];
	int seatmap(int seats[])
	{
		for (int i = 0; i < 120; i++)
		{
			for (int j = 0; j < i; j++)
			{

			}
		}
	}
};
int main()
{
	Customer c;
	Flights f;
	string dest;
	cout << "\n\t\t\tWelcome to FlySys\n";
	c.getInfo();
	cout << "Choose one among the available flights below" << endl;
	f.FlightList();
	f.flightopt();
	cout << "Your Ticket : " << endl;
	c.dispInfo();
	return 0;
}