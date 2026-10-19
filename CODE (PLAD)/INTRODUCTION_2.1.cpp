# include <iostream>
using namespace std;

int main (){
	
string first_name = "";
string last_name = "";
string program = "";
string section = "";
string address = "";
string age = "";
string gender = "";

cout << "Enter First Name: ";
getline (cin, first_name);

cout << "Enter Last Name: ";
getline (cin, last_name);

cout << "Enter Program: ";
getline (cin, program);

cout << "Enter Grade and Section: ";
getline (cin, section);

cout << "Enter Address: ";
getline (cin, address);

cout << "Enter Age: ";
getline (cin, age);

cout << "Enter Gender: ";
getline (cin, gender);

cout << "Hello, my name is "<<first_name<<" "<<last_name<< "."
<< "Im a "<<program<<" "<<section<<" student and I live in "
<< address<< "."<< endl<< "Im currently "<<age<<" years old "
<< gender<< ".";

}

