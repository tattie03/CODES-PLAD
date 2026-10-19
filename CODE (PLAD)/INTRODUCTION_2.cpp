# include <iostream>
using namespace std;

int main (){
	
string first_name = "";
string last_name = "";
string program = "";
string section = "";
string address = "";
int age = 0;
string gender = "";

cout << "Enter First Name: ";
cin>>first_name;

cout << "Enter Last Name: ";
cin>>last_name;

cout << "Enter Program";
cin>>program;

cout << "Enter Grade and Section: ";
cin>>section;

cout << "Enter Address: ";
cin>>address;

cout << "Enter Age: ";
cin>>age;

cout << "Enter Gender: ";
cin>>gender;

cout << "Hello, my name is "<<first_name<<" "<<last_name<< "."
<< "Im a "<<program<<" "<<section<<" student and I live in "
<< address<< "."<< endl<< "Im currently "<<age<<" years old "
<< gender<< ".";

}
