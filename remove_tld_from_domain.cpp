#include "remove_tld_from_domain.h"
#include "vector"


namespace practice_cpp {
	void removeTldFromDomain(std::string& domain) {
		size_t pos = domain.length();
		size_t itr = domain.length() - 1;
		while (itr >= 0) {
			std::cout << " Current position and character: " << itr << "\t" << domain[itr] << std::endl;
			if (domain[itr] == '.') {
				pos = itr;
				break;
			}
			--itr;
		}
		std::string new_string = domain.substr(0, pos);

		std::cout << " Domain without TLD: " << new_string << std::endl;
	}

	void removeSpecificTLD(std::string& domain) {
		std::vector<std::string> listOfTLDs = { ".com", ".in", ".jp" };
		std::string new_string = "";
		for (std::string& ele : listOfTLDs) {
			//if tld is prenst find pos
			size_t pos = domain.rfind(ele);
			if (pos != std::string::npos) {
				new_string = domain.substr(0, pos);
				break;
			}
		}
		std::cout << " Domain without TLD: " << new_string << std::endl;
	}

	void test_removeTldFromDomain() {
		std::string domain_name = "amazon.com";
		//std::string domain_name = "amazon.in";
		//std::string domain_name = "amazon.jp";
		//std::string domain_name = "amazon.jp.com";
		//removeTldFromDomain(domain_name);
		removeSpecificTLD(domain_name);
	}
}