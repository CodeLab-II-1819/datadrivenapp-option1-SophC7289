#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

	int input = 1; //Declaring variable for user input when they pick what number in the menu
	int count = 0; //Declaring variable number of tweets in sample file
	string Tweets; //Declaring tweet variable 

	//Prints to the console window what happens and tells the user to press a number to find out specific tweets
	cout << "This program will look through 1000's of tweets from the top 20 twitter users. Pick a number from the list below to find specific tweets.." << endl;
	cout << "1 - exact number of tweets collated" << endl; //This will search every tweet and give them the exact number of tweets in the file
	cout << "2 - mentioning money" << endl; //Search every tweet that mentions money
	cout << "3 - mentioning politics" << endl; //Search every tweet that mentions politics
	cout << "4 - mentioning the word 'Paris'" << endl; //Search every tweet that mentions/uses the word "Paris"
	cout << "5 - mentioning the word 'DreamWorks'" << endl; //Search every tweet that mentions/used the word "DreamWorks" 
	cout << "6 - mentioning the word 'Uber'" << endl; //Search every tweet that mentions/uses the word "Uber"

	cin >> input; //User input

	//Each number in the menu is included in one big if statement 
	if (input == 1) { //User presses 1 
		
		//This opens the file in read mode
		ifstream inFile;
		inFile.open("sampleTweets.csv"); //The sample tweet file

		if (inFile.good()) { //Checks the file is open

			while (!inFile.eof()) { //This while loop will keep looking through the file until it reaches the end
				getline(inFile, Tweets);
				count++; //Counts every tweet 1 by 1  
			}
			cout << "There are " << count << " lines of tweets being read." << endl; //Prints this line with the exact number of tweets in the file
			inFile.close(); //Closes the file
		}
		else {
			cout << "There is an error reading the tweet file" << endl; //If the file hasn't been read then this message will come up 
		}

	}
	else if (input == 2) { //If the user enters 2
		
		//This opens the file in read mode
		ifstream inFile;
		inFile.open("sampleTweets.csv"); //The sample tweet file

		if (inFile.good()) { //checks if the file is open

			while (!inFile.eof()) { //Will keep running until it reaches the end of the file 

			}
		}
	}
	system("pause");
	return 0;
}