#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

	int input = 1; //Declaring variable for user input when they pick what number in the menu
	int count = 0; //Declaring variable number of tweets in sample file
	string Tweets; //Declaring tweet variable 
	ifstream inFile;


	while (input != 0) {
		count = 0;

		//Prints to the console window what happens and tells the user to press a number to find out specific tweets
		cout << "This program will look through 1000's of tweets from the top 20 twitter users. Pick a number from the list below to find specific tweets.." << endl;
		cout << "1 - exact number of tweets collated" << endl; //This will search every tweet and give them the exact number of tweets in the file
		cout << "2 - mentioning Money" << endl; //Search amount of tweets that mentions money
		cout << "3 - mentioning Politics" << endl; //Search amount of tweets that mentions politics
		cout << "4 - mentioning the word 'Paris'" << endl; //Search every tweet that mentions/uses the word "Paris"
		cout << "5 - mentioning the word 'DreamWorks'" << endl; //Search every tweet that mentions/used the word "DreamWorks" 
		cout << "6 - mentioning the word 'Uber'" << endl; //Search every tweet that mentions/uses the word "Uber"
		cout << "7 - mentioning the word 'Youtube'" << endl; //Searches every tweet that mentions the word "YouTube"
		cout << "8 - mentioning Animals" << endl; //Searches the amount of tweets that says the word animals
		cout << "9 - mentioning the word 'Music'" << endl; //Searches tweets with the word "Music" 
		cout << "10 - mentioning the word 'Llama'" << endl; //Searches tweets with the word "Llama"

		cin >> input; //User input

		//Each number in the menu is included in one big if statement 
		if (input == 1) { //User presses 1 

			//This opens the file in read mode
			inFile.open("sampleTweets.csv"); //The sample tweet file

			if (inFile.good()) { //Checks the file is open

				while (!inFile.eof()) { //This while loop will keep looking through the file until it reaches the end
					getline(inFile, Tweets); //Get line from the file
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
			inFile.open("sampleTweets.csv"); //The sample tweet file

			if (inFile.good()) { //checks if the file is open

				while (!inFile.eof()) { //Will keep running until it reaches the end of the file 
					getline(inFile, Tweets); //Get line from the file

					if (Tweets.find("money") <= Tweets.length()) { //Using this 
						count++; //Prints the tweets one by one in the file
					}
				}
				cout << "There are " << count << " tweets mentioning the word Money." << endl; //Output statement with amount of tweets with the word "money"
			}
			else {
				cout << "There is an error reading this tweet file" << endl; //If the file can't be read then this will come up
			}
		}
		else if (input == 3) {
			inFile.open("sampleTweets.csv"); //The sample tweet file

			if (inFile.good()) { //checks if the file is open

				while (!inFile.eof()) { //Will keep running until it reaches the end of the file 
					getline(inFile, Tweets); //Get line from the file

					if (Tweets.find("politics") <= Tweets.length()) { //Using this 
						count++; //Go through the tweets one by one
					}
				}
				cout << "There are " << count << " tweets mentioning the word Politics." << endl; //Output statement with amount of tweets with the word "money"
			}
			else {
				cout << "There is an error reading this tweet file" << endl; //If the file can't be read then this will come up
			}
		}
		cout << "To carry on press enter to finish press 0" << endl;
		int cont; //Temporary variable so when it gets to "system("cls")" it won't close straight away
		cin >> cont; //Waits for the user to press enter to carry on or press 0 to quit
		if (cont == 0) {
			break;
		}
		system("cls"); //Clears the console window

	} 
	cout << "Thanks for using this. Goodbye" << endl; //The final message when the user presses 0
	
	system("pause");
	return 0;
}