#include <iostream>
#include <vectors>

using namespace std;

int main() {





	//vector_name [element_index]
	//test_scores[1]


	vector<int> tests_scores{ 100, 95, 99, 87, 88 };

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;

	/*vector syntax
	* vector_name.at(element_index)
	* test_scores.at(1)
	*/

	vector<int> test_scores {100,99,98,97,96};

	cout << "First score at index 0: " << test_scores.at(0) << endl;
	cout << "Second score at index 1: " << test_scores.at(1) << endl;
	cout << "Third score at index 2: " << test_scores.at(2) << endl;

	test_scores.at(0) = 90; //assignment statement



	//vector_name.push_back(element)

	vector<int> test_scores(100, 99, 98); //size is 3

	test_scores.push_back(80); //100, 99, 98, 80
	test_scores.push_back(90); //100, 99, 98, 80, 90

	





	return 0;

}