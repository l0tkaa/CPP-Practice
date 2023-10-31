//Arrays

#include <iostream>

using namespace std;

int main() {


	char vowels[]{'a', 'e', 'i', 'o', 'u'};
	cout << "\n The first vowel is: " << vowels[0] << endl;
	cout << "\n The last vowel is: " << vowels[4] << endl;  


// cin >> vowels[5]; OUT OF BOUNDS DON'T DO THIS!!!!!!!!!!!!
	
	
	
	


//	double hi_temps[]{90.1, 89.8, 77.5, 81.6};
	cout << "\nthe first high temperature is: " << hi_temps[0] << endl;

	hi_temps[0] = 100.7; // set the first element in hi_temps to 100.7

	cout << "the first high temperature is now: " << hi_temps[0] << endl;
	
	int test_scores[5]{};

	cout << "\nFirst score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;


	cout << "/Notice what the value of the array name is: " << test_scores << endl;
	//comes back with memory address of array rather than array name

	cout << endl;
	return 0;





}