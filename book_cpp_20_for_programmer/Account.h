#pragma once
#include <string>
#include <string_view>

namespace book_cpp_20_for_programmers
{
	class Account
	{
	public:
		//custom constructor
		//Account(std::string_view name) {
		//	name_ = name; //name_ is initialized with name, copy be value
		//}

		//custom constructor using member initialization list
		//single parameter constructors must also use explicit keyword to prevent
		//implicit calls used in type conversions. 
		Account(std::string_view name) : name_{name}
		{}

		// member function that sets m_name in the object
		void setName(std::string_view name) {
			name_ = name;
		}

		// member function that retrieves the account name from the object
		// the first const ensures that the caller cannot modify the returned reference
		// the const to the right of parameter list tells us that this function should not be able to do any modifications
		// to any data members of the object of the Account class.
		const std::string& getName() const
		{
			return name_;
		}

	private:
		std::string name_;// string variable that will be initialized to "" when account is created, 
		//std::string m_name{ "test" };
		
	};


	void test_account();

}