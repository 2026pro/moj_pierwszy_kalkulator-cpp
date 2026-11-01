#include <iostream>
#include <cstdlib>

using namespace std;

float y, z, wybor;
float* liczba1 = &y;
float* liczba2 = &z;

int main()
{
    system("clear");
	while(wybor!=5)
		{
		cout<<"__________________"<<endl;
		cout<<"| Kalkulator     |"<<endl;
		cout<<"| ----------     |"<<endl;
		cout<<"| 1. dodawanie   |"<<endl;
		cout<<"| 2. odejmowanie |"<<endl;
		cout<<"| 3. mnozenie    |"<<endl;
		cout<<"| 4. dzielenie   |"<<endl;
		cout<<"| 5. koniec      |"<<endl;
		cout<<"------------------"<<endl;
		cin>>wybor;
		cout<<"Podaj pierwsza liczba."<<endl;
		cin>> *liczba1;
		cout<<"Podaj druga liczba."<<endl;
		cin>> *liczba2;
	
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
