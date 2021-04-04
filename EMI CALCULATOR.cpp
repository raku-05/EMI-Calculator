#include <iostream>
using namespace std;
int main( ) {
	    int princi_amnt;
	    float int_rate;
	    float num_of_years;
	    float sim_int;
	    cout << "Plz enteryour principal amount: " ;
	    cin >> princi_amnt;
	    
	    cout << "Enter your interest rate: " ;
	    cin >> int_rate;
	    cout << "Enter number of years: " ;
	    cin >> num_of_years;
	    
	    sim_int= (princi_amnt *  int_rate * num_of_years) / 100;
	           cout<<"Your simple interest value is: " <<sim_int; 
	    return 0;		   }
