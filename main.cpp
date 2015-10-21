

#include <iostream>
#include <vector>
using namespace std;




int main(){

/*
//// --- Test code to make a 2D array out of 2 seperate vectors --- ////
// Code to make two vectors
cout << "First we make 2 vectors.  " << endl;
vector<int> first(4,100);
vector<int> second(4,50);

// Code to merge two vectors into one lng vector
cout << "Second we merge them into one long vector. " << endl;
first.insert(first.end(), second.begin(), second.end());

// Now we make an Array to the size we want 
const int col=4;
const int row=2;
int Array[row][col];
cout << "Our Array will have " << row << " rows, and " << col << " columns.  " << endl;


// Now we will put each element into the right place in the array
for (int j=0; j<row; j++){
	for (int i=0; i<col; i++){

		int NElement=i+(j*col);
		cout << " J: " << j << " I: " << i << " N Element: " << NElement << endl;
		cout << "The element we will assign is: " << first[NElement] << endl;
		Array[j][i]=first[NElement];
	}
}; */


	/*
//// --- Lets test this for a larger 2D array --- ////
// Code to make two vectors
cout << "First we make 3 vectors.  " << endl;
vector<int> first(4,100);
vector<int> second(4,50);
vector<int> third(4,20);


// Code to merge two vectors into one lng vector
cout << "Second we merge them into one long vector. " << endl;
first.insert(first.end(), second.begin(), second.end());
first.insert(first.end(), third.begin(), third.end());


// Now we make an Array to the size we want 

const int col=4;
const int row=3;
int Array[row][col];
cout << "Our Array will have " << row << " rows, and " << col << " columns.  " << endl;


// Now we will put each element into the right place in the array
for (int j=0; j<row; j++){
	for (int i=0; i<col; i++){

		int NElement=i+(j*col);
		cout << " J: " << j << " I: " << i << " N Element: " << NElement << endl;
		cout << "The element we will assign is: " << first[NElement] << endl;
		Array[j][i]=first[NElement];
	}
};*/

//// --- Lets test this for a 3D array --- ////
// Code to make two vectors
cout << "First we make 3 vectors.  " << endl;
vector<int> first(4,100);
vector<int> second(4,50);
vector<int> third(4,20);
vector<int> fourth(4,10);
vector<int> fifth(4,40);
vector<int> sixth(4,5);

// Code to merge two vectors into one lng vector
cout << "Second we merge them into one long vector. " << endl;
first.insert(first.end(), second.begin(), second.end());
first.insert(first.end(), third.begin(), third.end());
first.insert(first.end(), fourth.begin(), fourth.end());
first.insert(first.end(), fifth.begin(), fifth.end());
first.insert(first.end(), sixth.begin(), sixth.end());

// Now we make an Array to the size we want 
const int levels=2;
const int col=4;
const int row=3;
int Array[levels][row][col];
cout << "Our Array will have " << levels << " levels " << row << " rows, and " << col << " columns.  " << endl;


// Now we will put each element into the right place in the array
for (int l=0; l<levels; l++){
	for (int j=0; j<row; j++){
		for (int i=0; i<col; i++){

			int NElement=i+(j*col)+(l*row*col);
			cout << "L: " << l << " J: " << j << " I: " << i << " N Element: " << NElement << endl;
			cout << "The element we will assign is: " << first[NElement] << endl;
			Array[l][j][i]=first[NElement];
		}
	}
};






return 0;
}

