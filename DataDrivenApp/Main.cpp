#include <iostream>
#include <string>
using namespace std;

int main(){

	//Prints to the console window what happens and tells the user to press a number to find out specific tweets
	cout << "This program will look through 1000's of tweets from the top 20 twitter users. Pick a number from the list below to find specific tweets.." << endl;
	cout << "1 - exact number of tweets collated" << endl; //This will search every tweet and give them the exact number of tweets in the file
	cout << "2 - that mention money" << endl; //Search every tweet that mentions money
	cout << "3 - that mention politics" << endl; //Search every tweet that mentions politics
	cout << "4 - mentioning the word Paris" << endl; //Search every tweet that mentions/uses the word "Paris"
	cout << "5 - mentioning the word DreamWorks" << endl; //Search every tweet that mentions/used the word "DreamWorks" 
	cout << "6 - mentioning the word Uber" << endl; //Search every tweet that mentions/uses the word "Uber"


	system("pause");
	return 0;
}