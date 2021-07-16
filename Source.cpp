#include <iostream> 
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Variable Declaration 
	double Salary, Federal, State, Social = double();
	double Pension, Medicare, Health, Net = double();
	string fullName = string();
	

	//Header
	cout << "====================================================================\n";
	cout << "Monthly Paycheck Calculator\n";
	cout << "Long Beach City College\n";
	cout << "Author: Douglas Lopez\n";
	cout << "Sept. 30, 2018\n";
	cout << "====================================================================\n";

	//Inputs
	cout << "This program will caclulate the user's Net pay after deductions.\n";
	cout << endl;
	cout << "Please enter your full name: ";
	getline(cin, fullName);
	cout << endl;
	cout << "Please enter your Gross amount: $";
	cin >> Salary;
	cout << endl;
	cout << "====================================================================\n";
	
	/*ofstream out;
	out.open("output.txt");*/ //originally used to copy output to textfile

	//Processing
	if (Salary <= 0)   //If Salary is less than 0 error message will appear
	{
		cout << "Invalid! Salary has to be a positive number." << endl;
	}

	else
	{
		//Variable Operations (Percentage can be changed to accomodate user)
		Federal = Salary * 0.15; //15% 
		State = Salary * 0.035; //3.5%
		Social = Salary * 0.0575; //5.75%
		Medicare = Salary * 0.0275; //2.75%
		Pension = Salary * 0.05; //5%
		Health = 75.00; //Flat $75.00


		Net = Salary - Federal - State - Social - Medicare -Pension- Health; //total after deductions
		
		cout << fixed << showpoint << setprecision(2) << endl;

		cout << left <<  "Name: " << fullName << endl;
		cout << setw(25) << setfill('.')<< left << "Gross Amount: " << setfill('.') << setw(15) << right << "$" << Salary << endl;
		cout << setw(25) << left << "Federal tax: " << setfill('.') << setw(15) << right << "$" <<Federal << endl;
		cout << setw(25) << left<<"State tax: " <<setfill('.') << setw(15) << right << "$" << State << endl;
		cout << setw(25) << left<<"Social security tax: " << setfill('.') << setw(15) << right << "$" << Social << endl;
		cout << setw(25) << left<<"Medicare: " << setfill('.') << setw(15) << right << "$" << Medicare << endl;
		cout << setw(25) << left<<"Pension: " << setfill('.') << setw(15) << right << "$" << Pension << endl;
		cout << setw(25) << left<<"Health deduction: " << setfill('.') << setw(15) << right << "$" << Health << endl;
		cout << setw(25) << left << "Net salary is: " << setfill('.') << setw(15) << right << "$" << Net << endl;
		cout << endl;


		/*out << left << "Name: " << fullName << endl; part of output
		out << setw(25) << setfill('.') << left << "Gross Amount: " << setfill('.') << setw(15) << right << "$" << Salary << endl;
		out << setw(25) << left << "Federal tax: " << setfill('.') << setw(15) << right << "$" << Federal << endl;
		out << setw(25) << left << "State tax: " << setfill('.') << setw(15) << right << "$" << State << endl;
		out << setw(25) << left << "Social security tax: " << setfill('.') << setw(15) << right << "$" << Social << endl;
		out << setw(25) << left << "Medicare: " << setfill('.') << setw(15) << right << "$" << Medicare << endl;
		out << setw(25) << left << "Pension: " << setfill('.') << setw(15) << right << "$" << Pension << endl;
		out << setw(25) << left << "Health deduction: " << setfill('.') << setw(15) << right << "$" << Health << endl;
		out << setw(25) << left << "Net salary is: " << setfill('.') << setw(15) << right << "$" << Net << endl;
		out.close();*/
	}
	
	//Output
	cout << "Thank you for using the Paycheck Calculator!" << endl;
	cout<< "Goodbye..." << endl;
	cout << "====================================================================" << endl;

	system("Pause");
	return 0;
}