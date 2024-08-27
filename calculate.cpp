/*
Evin Sierra
9/15/23
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

  int principal;
  int annualInterestRate;
  int monthlyPayment;
  double months;
  double years;
  double newMonths;
  double earlyTotal;
  
  cout << "** Welcome to the CPSC 1071 Payment Calculator **"<<endl<<endl;

  cout << "Enter the principal amount: ";
  cin >>principal;

  cout << "Enter the annual interest rate (in %): ";
  cin >>annualInterestRate;

  cout << "Enter the monthly payment: ";
  cin >>monthlyPayment;

  cout << "\nCalculating...\n" << endl;

  months = (log(monthlyPayment) - log(monthlyPayment-(annualInterestRate/1200.0)*principal))/log(annualInterestRate/1200.0 + 1.0);

  years = months/12;

  newMonths = (log(monthlyPayment+15) - log((monthlyPayment+15)-(annualInterestRate/1200.0)*principal))/
  log(annualInterestRate/1200.0 + 1.0);

  earlyTotal = round(months) - round(newMonths);

  cout << fixed << setprecision(0) << months << " months ("<< fixed << setprecision(1) << years << " years) are needed to pay your loan off.\n"<<endl;

  cout << "Did you know if you paid an additional $15 per month, you would pay off your loan "<< fixed << setprecision(0) << earlyTotal << " months earlier?\n"<<endl;

  return 0;
   



}
