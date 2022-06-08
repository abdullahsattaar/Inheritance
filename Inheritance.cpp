#include<iostream>
using namespace std;

class Mobile
{
protected:

	int battery;
	float camera;
	char* OSversion;

public:

	Mobile()
	{
		battery = 0;
		camera = 0;
		OSversion = 0;
	}
	Mobile inputinfo()
	{
		int a;
		float b;
		char c[10];
		cout << "Enter battery: " << endl;
		cin>>a;
		battery = a;
		cout << "Enter camera" << endl;
		cin>>b;
		camera = b;
		cout << "Enter OSversion: " << endl;
		cin>> c;
		OSversion = new char[strlen(c) + 1];
		for (int i = 0; c[i] != 0; i++)
			OSversion[i] = c[i];
	}
	Mobile printinfo()
	{
		cout << "Battery is: " << battery << endl << "Camera is: " << camera << endl << "OSversion is: " << OSversion << endl;
		return *this;
	}
	
};

class Android :public Mobile
{
private:
	int ram;

public: 

	Android()
	{
		ram = 0;
	}
	Android inputinfo()
	{
		int a;
		float b;
		char c[10];
		int r;
		cout << "Enter Android battery: " << endl;
		cin >> a;
		battery = a;
		cout << "Enter Andriod camera" << endl;
		cin >> b;
		camera = b;
		cout << "Enter Android version: " << endl;
		cin >> c;
		OSversion = new char[strlen(c) + 1];
		for (int i = 0; c[i] != 0; i++)
			OSversion[i] = c[i];
		cout << "Enter Android RAM: " << endl;
		cin >> r;
		ram = r;
		return *this;
	}
	Android printinfo()
	{
		cout << "Android Battery is: " << battery << endl << "Android Camera is: " << camera << endl << "Android version is: " << OSversion << endl << "Android Ram is: " << ram << endl;
		return *this;
	}
	
};
class Iphone :public Mobile
{
private:
	bool audiojack;

public:
	Iphone()
	{
		audiojack = 0;
	}
	Iphone inputinfo()
	{
		int a;
		float b;
		char c[10];
		bool r;
		cout << "Enter Iphone battery: " << endl;
		cin >> a;
		battery = a;
		cout << "Enter Iphone camera" << endl;
		cin >> b;
		camera = b;
		cout << "Enter OSversion: " << endl;
		cin >> c;
		OSversion = new char[strlen(c) + 1];
		for (int i = 0; c[i] != 0; i++)
			OSversion[i] = c[i];
		cout << "Enter audiojack : " << endl;
		cin >> r;
		audiojack = r;
		return *this;
	}
	Iphone printinfo()
	{
		cout << "Iphone Battery is: " << battery << endl << "Iphone Camera is: " << camera << endl << "OSversion is: " << OSversion << endl << "audiojack is: " << audiojack << endl;
		return *this;
	}	
	
};

void main()
{
	Android A1;
	A1.inputinfo();	
	Iphone I1;
	I1.inputinfo();

	A1.printinfo();
	I1.printinfo();

	system("pause");
}