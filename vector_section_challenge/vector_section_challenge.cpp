#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> vector1;                 //declare 2 empty vectors of integers named vector1 and vector 2
vector<int> vector2;

vector1.push_back(10);               //add 10 and 20 to vector1 dynamically using push_back
vector1.push_back(20);

//display the elements in vector1 using the at() method as well as its size using the size() method
cout << "vector1 contains elements " << vector1.at(0) << " and " << vector1.at(1) << endl;
cout << "the size of vector1 is " << vector1.size() << endl << endl;

vector2.push_back(100);              //add 100 and 200 to vector2 dynamically using push_back
vector2.push_back(200);

//display the elements in vector2 using the at() method as well as its size using the size() method
cout << "vector2 contains elements " << vector2.at(0) << " and " << vector2.at(1) << endl;
cout << "the size of vector2 is " << vector2.size() << endl << endl;

vector <vector<int>> vector_2d;      //declare an empty 2D vector called vector_2d

vector_2d.push_back(vector1);        //add vector1 to vector_2d dynamically using push_back
vector_2d.push_back(vector2);        //add vector2 to vector_2d dynamically using push_back

//display the elements in vector_2d using the at() method
cout << "vector_2d elements:" << endl << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

//change vector1.at(0) to 1000
vector1.at(0) = 1000;

cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1);
cout << " " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1);


return 0;
}