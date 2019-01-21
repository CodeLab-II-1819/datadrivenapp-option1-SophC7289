#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

	int input = 1; //Declaring variable for user input when they pick what number in the menu
	int count = 0; //Declaring variable number of tweets in sample file
	string Tweets; //Declaring tweet variable 
	ifstream inFile; //Declaring File variable 


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
			inFile.open("sampleTweets.csv");

			if (inFile.good()) { 

				while (!inFile.eof()) {  
					getline(inFile, Tweets); 

					if (Tweets.find("politics") <= Tweets.length()) {
						count++; 
					}
				}
				cout << "There are " << count << " tweets mentioning the word Politics." << endl; 
			}
			else {
				cout << "There is an error reading this tweet file" << endl;
			}
		}
		else if (input == 4) {
			inFile.open("sampleTweets.csv"); 

			if (inFile.good()) {

				while (!inFile.eof()) {
					getline(inFile, Tweets);

					if (Tweets.find("Paris") <= Tweets.length()) { //Finds all the tweets with the word Paris 
						cout << Tweets << endl; //Prints each tweet in order with the word Paris
						count++; //Goes through the file tweet by tweet
					}
				}
				cout << "There are " << count << " tweets mentioning the word Paris." << endl; 
			}
			else {
				cout << "There was an error reading this file." << endl; 
			}

		}
		else if (input == 5) {
			inFile.open("sampleTweets.csv"); 

			if (inFile.good()) { 

				while (!inFile.eof()){
					getline(inFile, Tweets);

						if (Tweets.find("Dreamworks") <= Tweets.length()) {
							cout << Tweets << endl;
								count++;
						}
				}
				cout << "There are " << count << " tweets mention the word Dreamworks" << endl;
			}
			else {
				cout << "There was an error reading this file." << endl;
			}
		}
		else if (input == 6) {
			inFile.open("sampleTweets.csv");

			if (inFile.good()) {

				while (!inFile.eof()) {
					getline(inFile, Tweets);

					if (Tweets.find("Uber") <= Tweets.length()) {
						cout << Tweets << endl;
						count++;
					}
				}
				cout << "There are " << count << " tweets mentioning the word Uber." << endl;
			}
			else {
				cout << "There was an error reading this file." << endl;
			}
		}
		else if (input == 7) {
			inFile.open("sampleTweets.csv");

			if (inFile.good()) {

				while (!inFile.eof()) {
					getline(inFile, Tweets);

					if (Tweets.find("Youtube") <= Tweets.length()) {
						cout << Tweets << endl;
						count++;
					}
				}
				cout << "There are " << count << " tweets that mention YouTube." << endl;
			}
			else {
				cout << "There was an error reading this file." << endl;
			}
		}
		else if (input == 8) {
			inFile.open("sampleTweets.csv");

			if (inFile.good()) {
				
				while (!inFile.eof()) {
					getline(inFile, Tweets);

					if (Tweets.find("Animals") <= Tweets.length()) {
						count++;
					}
				}
				cout << "There are " << count << " tweets with the word Animals." << endl;
			}
			else {
				cout << "There was an error reading this file." << endl;
			}
		}
		else if (input == 9) {
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {

			while (!inFile.eof()) {
				getline(inFile, Tweets);

				if (Tweets.find("Music") <= Tweets.length()) {
					cout << Tweets << endl;
					count++;
				}
			}
			cout << "There are " << count << " tweets mentioning the word Music." << endl;
		}
		else {
			cout << "There was an error reading this file." << endl;
			}
		}
		else if (input == 10) {
		inFile.open("sampleTweets.csv");

		if (inFile.good()) {

			while (!inFile.eof()) {
				getline(inFile, Tweets);

				if (Tweets.find("Llama") <= Tweets.length()) {
					count++;
				}
			}
			cout << "There are " << count << " tweets with the word Llama." << endl;
		}
		else {
			cout << "There was an error reading this file." << endl; //Comes up if the file doesn't open
		}
		}
		inFile.close(); //Closes the file
		cout << "To carry on press 11 then enter. To finish press 0" << endl; //Gives the user the option to crry on or exit the program 
		int cont = 11; //Temporary variable so when it gets to "system("cls")" it won't close straight away
		cin >> cont; //Waits for the user to press enter to carry on or press 0 to quit
		if (cont == 11) { //If statment if the user enters 11 then the menu gets printed again
			break;
		}
		system("cls"); //Clears the console window

	} 
	cout << "Thanks for using this. Goodbye" << endl; //The final message when the user presses 0
	
	system("pause");
	return 0;
}