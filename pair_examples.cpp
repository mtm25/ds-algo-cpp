#include "pair_examples.h"
#include <iostream>
#include <vector>
#include <algorithm>


namespace practice_cpp {

	//create a pair with an initializer
	void create_pair() {
		std::pair<std::string, std::string> author{ "James", "Joyce" };
		//print
		printPair(author);
	}

	//create a list/vector of pair of string, int with an initializer list
	void create_vector_of_pairs() {
		std::vector<std::pair<std::string, int>> data = {
			{"Tom", 28},
			{"Ryan", 50},
			{"Muffa", 30},
			{"Brian", 52}
		};

		//loop through the vector to print each pair
		int i = 0; // to check the address of each obj in the vector
		for (auto &obj : data) {
			std::cout << "Address of obj " << &obj;
			std::cout << "\tAddress of actual data " << &data[i++] << std::endl;;
			
			printPair(obj);
		}
		std::cout << std::endl;

		//Sort the vector - by default it will sort by first member
		//in this case the string will be sorted lexicographically
		//std::sort(data.begin(), data.end());

		// Sort the pairs based on the second value (age)
		std::sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
			return a.second < b.second;
		});

		i = 0; 
		for (auto& obj : data) {
			std::cout << "Address of obj " << &obj;
			std::cout << "\tAddress of actual data " << &data[i++] << std::endl;;

			printPair(obj);
		}

	}













	template<class T>
	void printPair(T& obj) {
		std::cout << "First: " << obj.first << "  Second: " << obj.second << std::endl;
	}
	

	void test_pair() {
		//create_pair();
		create_vector_of_pairs();

	}


}
