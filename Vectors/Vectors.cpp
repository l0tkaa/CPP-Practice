#include <iostream>
#include <vector>

using namespace std;

int main() {


	vector <char> vowels;

	vector <int> test_scores;

	vector <char> vowels(5); //this tells the compiler that you want 5 characters

	vector <int> test_scores(10); //this tells the compiler that you want 10 integers

	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	vector <int> test_scores{ 100, 98, 89, 85, 93 };
	vector <double> hi_temperatures(365, 80.0);







	return 0;
}