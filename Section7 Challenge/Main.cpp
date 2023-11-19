#include <iostream>
#include <vector>

using namespace std;

int main() {

//Declare 2 empty vectors of integers named vector1 and vector2
	vector <int> Vector1;
	vector <int> Vector2;


//Vector 1
	Vector1.push_back(10);
	Vector1.push_back(20);

	cout << Vector1.at(0) << endl;
	cout << Vector1.at(1) << endl;
	cout << "vector1 contains" << Vector1.size() << "elements"  << endl;

//Vector2
	Vector2.push_back(100);
	Vector2.push_back(200);
	cout << Vector2.at(0) << endl;
	cout << Vector2.at(1) << endl;
	cout << Vector2.size() << endl;

//Vector_2d
	vector <vector <int>> Vector_2d;
	Vector_2d.push_back(Vector1);
	Vector_2d.push_back(Vector2);

//Display the elements in Vector_2d using the at() method

	cout << "\nvector_2d:" << endl;
	cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << endl;
	cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << endl;

// Change vecotr1.at(0) to 1000

	Vector1.at(0) = 1000;

// Display the elements in vector 2d again using the at() method

	cout << "\nvector_2d:" << endl;
	cout << Vector_2d.at(0).at(0) << " " << Vector_2d.at(0).at(1) << endl;
	cout << Vector_2d.at(1).at(0) << " " << Vector_2d.at(1).at(1) << endl;

// Display the elements in vector 1

	cout << Vector1.at(0) << endl;
	cout << Vector1.at(1) << endl;





	return 0;



}