#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;
// Global Variables
bool counter = 0;
ofstream output_file;

int main() {

	string user_in, name;
	char selection_variable;
	int no;
	string color_name;
	string total = "";
	do {
		
		counter = 1;
		//Promopt User to enter the name of the file 
		cout << "Name of the file :  \n";
		cin >> user_in;
		cout << "\nNo of the colour you want : ";
		cin >> no;
		// Taking the name of the file for output in css format
		name = user_in + ".css";
		output_file.open(name);
		if (output_file) {
			cout << "#";
			
			cout << "#";
			
			cout << "#";
			
			cout << "#";
			
			cout << " Creating File ";
			cout << "#";
						cout << "#";
						cout << "#";
					cout << "#";

			cout << endl << ":)\tFile Created Successfully\n";
		}
		else {
			cout << endl << ":(\tUnable to create file\n";
			
		}
	} while (!counter);
	//change the colour of the console

	for (int i = 1; i <= no; i++) {
		cout << "Colour Name : " << i<<" :  ";
		cin.ignore();
		getline(cin, color_name);
		total = total+color_name + "\n";
	}
	// writing data to the file

	if (output_file.is_open()) {
		cout << "#";
		
		cout << "#";
		
		cout << "#";
		
		cout << "#";
		
		cout << " Writing File ";
		cout << "#";
					cout << "#";
				cout << "#";
					cout << "#";
		
		
		cout << endl << ":)\tSuccessfully writen the file\n";
		output_file << total;
		output_file.close();
	}

}
