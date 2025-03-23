#include<iostream>
using namespace std;

int main() {
	string creatorName;
	int numberofprints;
	
	cout<<"Enter the creator's name:";
	getline(cin, creatorName);
	
	cout<<"Enter the number of time you want to print:";
	cin >> numberofprints;
	
	cout << "\nprinting your message "<< numberofprints << " times:\n";
	for (int i =0; i < numberofprints; i++) {
		cout<< "creator: " << creatorName <<endl;
		
	}
  
     return 0;
 }
