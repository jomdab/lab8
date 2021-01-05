#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double x,y,z,a;
	cout << "Enter initial loan: ";
	cin  >>x; 
	cout << "Enter interest rate per year (%): ";
	cin  >>y;
	cout << "Enter amount you can pay per year: ";
	cin  >>z;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i=1;
	cout << fixed << setprecision(2); 
	do{
	cout << setw(13) << left << i; 
	cout << setw(13) << left << x;
	a=x*(y/100);
	cout << setw(13) << left << a;
	cout << setw(13) << left << x+a;
	if((x+a)<100)z=x+a;
	cout << setw(13) << left << z;
	x=(x+a)-z;
	cout << setw(13) << left << x;
	cout << "\n";
	i++	;
	}
	while(x>0);
	return 0;
}
