#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); //seed random number generator
    int lottery = rand() % 900 + 100;
	// Prompt the user to enter a guess

	cout << "Enter your lottery pick (3 digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	// Get digits from lottery
	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = (lottery / 10)%10;
	int lotteryDigit3 = lottery%10;
	// Get digits from guess
	int guessDigit1 = guess / 100;
	int guessDigit2 = (guess/10) % 10;
	int guessDigit3 = guess % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if (guessDigit2 == lotteryDigit1
	&& guessDigit1 == lotteryDigit2 && guessDigit3==lotteryDigit3 or guessDigit1 == lotteryDigit3
	&& guessDigit3 == lotteryDigit1 && guessDigit2== guessDigit2 or guessDigit2 == lotteryDigit3
	&& guessDigit3 == lotteryDigit2 && guessDigit1==lotteryDigit1)
	{
		cout << "Match all digits: you win $3,000";
	}
	else if (guessDigit2 == lotteryDigit1
	&& guessDigit1 == lotteryDigit2 or guessDigit1 == lotteryDigit3
	&& guessDigit3 == lotteryDigit1 or guessDigit2 == lotteryDigit3
	&& guessDigit3 == lotteryDigit2)
	{
		cout << "Match 2 digits: you win $2,000";
	}
	else if (guessDigit1 == lotteryDigit1
	|| guessDigit1 == lotteryDigit2
	|| guessDigit1 == lotteryDigit3
	|| guessDigit2 == lotteryDigit1
	|| guessDigit2 == lotteryDigit2
	|| guessDigit2 == lotteryDigit3
	|| guessDigit3 == lotteryDigit1
	|| guessDigit3 == lotteryDigit2
	|| guessDigit3 == lotteryDigit3)
    {
		cout << "Match one digit: you win $1,000";
	}
	else{
		cout << "Sorry, no match";
	}
}
