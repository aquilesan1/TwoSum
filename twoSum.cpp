#include <iostream>
#include <string>

using namespace std;

int main(){

	// variables
	int arr1[3] = {2, 4, 3};
	int arr2[3] = {5, 6, 4};
	string s1;
	string s2;
	
	// this loop unpacks the arrays into string 
	for (int i = 2; i >= 0; i--){
		
		s1 += to_string(arr1[i]);
		s2 += to_string(arr2[i]);
	}
	
	// here the strings are converted to int then added and later converted back to string
	string sr = to_string(stoi(s1) + stoi(s2));

	// variables for final result
	char result[sr.size()];		//TODO: this must be an array of int
	string srr;

	// this loop reverses the string 
	for (int j = sr.size() - 1; j >= 0; j--){
		
		srr += sr[j];
	}
	
	// this loop packs the reversed string into the final array result
	for (int k = 0; k < sr.size(); k++){
		
		result[k] = srr[k];		//TODO: find a way to make this char into int
		cout << result[k];		// this is simply a means of showing the result
	}
	
	return 0;
}