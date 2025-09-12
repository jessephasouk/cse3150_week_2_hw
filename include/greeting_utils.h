#pragma once

namespace greeting_utils {
	std::string create_message(const std::string& name);
	char* format_as_c_string(const std::string& msg);
}
