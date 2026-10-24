#include <iostream>

using namespace std;

int y, z, wybor;

int main()
{
	while(wybor!=5)
	{
	cout<<"         ";
	cout<<"Kalkulator"<<endl;
	cout<<"----------"<<endl;
	cout<<"1. dodawanie"<<endl;
	cout<<"2. odejmowanie"<<endl;
	cout<<"3. mnozenie"<<endl;
	cout<<"4. dzielenie"<<endl;
	cout<<"5. koniec"<<endl;
	cin>>wybor;
	cout<<"Podaj pierwsza liczba."<<endl;
	cin>>y;
	cout<<"Podaj druga liczba."<<endl;
	cin>>z;

	if(wybor==1)
	{
		cout<<"Wynik to "<<y+z;
	}
	if(wybor==2)
	{
		cout<<"Wynik to "<<y-z;
	}
	if(wybor==3)
	{
		cout<<"Wynik to "<<y*z;
	}
	if(wybor==4)
	{
		cout<<"Wynik to "<<y/z;
	}
	}

	return 0;
}
