#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{
double y, z, wybor;
double* liczba1 = &y;
double* liczba2 = &z;

    system("clear");
	while(true)
		{
		cout<<"                  "<<endl;
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

        if(wybor==5)
        {
        	break;
        }
		
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
