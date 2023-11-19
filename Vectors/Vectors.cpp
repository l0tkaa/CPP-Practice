//Section 7
//Vectors
#include <iostream>
#include <vector> // Don't forget this in order to use vectors

using namespace std;

int main() {


	vector <char> vowels; //empty
	vector <char> vowels{ 5 }; // 5 initialized to zero
	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };

	cout << vowels[0] << endl;
	cout << vowels[4] << endl;

	// vector <int> test_scores (3); //3 elements all initialized to zero
	//vector <int> test_scores (3, 100); //3 elements all initialized to 100

	vector <int> test_scores{ 100, 98, 89 }; 


	cout << "\nTest scores using array syntax:" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;


	cout << "\nTest scores using vvector syntax:" << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "\nThere are " << test_scores.size() << "scores in the vector" << endl;

	cout << "\nEnter 3 test scores:";
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	//enter in terminal

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;


	cout << "\nEnter a test score to add to the Vector:";

	int score_to_add(0);
	
	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\nEnter one more test score to add to the vector:";

	cin >> score_to_add;

	test_scores.push_back(score_to_add);

	cout << "\n Test scores are now:" << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;	
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;

	cout << "\nThere are now" << test_scores.size() << "scores in the vector" << endl;


// Example of a 2D-vector

	vector < vector<int>> movie_ratings
	{
		// vertically: 1st movie, 2nd, 3rd, 4th
		{1,2,3, 4}, // horizontally 1st, 2nd, 3rd, 4th reviewer
		{1,2,4,4},
		{1,3,4,5}

	};

	cout << "\n Here are the movie ratings for reviewer #1 using array syntax: " << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;




	//cout << "\nTest scores using vector syntax:" << endl;





/*
	vector <int> test_scores;

	vector <char> vowels(5); //this tells the compiler that you want 5 characters

	vector <int> test_scores(10); //this tells the compiler that you want 10 integers

	
	vector <int> test_scores{ 100, 98, 89, 85, 93 };
	vector <double> hi_temperatures(365, 80.0);
	*/






	return 0;
}