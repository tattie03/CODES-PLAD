#include <iostream>
using namespace std;

int main(){
	string age;
	
	cout << "Enter your age: ";
	getline(cin, age);
	
	if (age>= "18" ){
		cout << "Eligible for Driver's Licence";
	}
	else if (age == "17"){
		cout << "Eligible for Student Permit only";
	}
	else if (age < "16"){
		cout << "Not Eligible for Driver's License'";
	}
	//at the back
	else{
		cout << "Not Eligible yet. You can apply next year";
	} 
}
