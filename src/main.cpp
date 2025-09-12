#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::cout, std::cin, std::string, std::endl, std::getline;

int main(){
	string name;
	getline(cin, name);

	//get message
	string message = greeting_utils::create_message(name);
	
	//put in c string function
	char* c_message = greeting_utils::format_as_c_string(message);

	cout << c_message << endl;

	delete[] c_message;

	return 0;
}
