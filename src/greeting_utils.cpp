#include <iostream>
#include "greeting_utils.h"
#include <string>

namespace greeting_utils {
	std::string create_message(const std::string& name){
		std::string greeting = "Hello, " + name + '!';
		return greeting;
	}

	char* format_as_c_string(const std::string& msg){
		char* char_arr = new char[msg.size() + 1];
		//loop through every character in msg
		for (int i = 0; i < msg.size(); ++i){
			char_arr[i] = msg[i];
		}
		char_arr[msg.size()] = '\0';
		return char_arr;
	}
}
