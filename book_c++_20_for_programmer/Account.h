#pragma once
#include <string>
#include <string_view>

class Account {
public:
	// member function that sets m_name in the object
	void setName(std::string_view name) {
		m_name = name;
	}

	// member function that retrieves the account name from the object
	// the first const ensures that the caller cannot modify the returned reference
	// the const to the right of parameter list tells us that this function should not be able to do any modifications 
	// to any data members of the object of the Account class. 
	const std::string& getName() const {
		return m_name;
	}

private:
	std::string m_name;

};