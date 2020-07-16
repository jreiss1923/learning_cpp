#include <iostream>
#include <string>
using namespace std;

void main() {
	int gens_back;
	int gens_separated;
	string ordinal;

	cout << "How many generations back is your first common ancestor? \n";
	cin >> gens_back;
	cout << "How many generations separated are you and this cousin? \n";
	cin >> gens_separated;

	gens_back = gens_back - 1;

	if (gens_back % 10 == 1) {
		ordinal = "st";
	}
	else if (gens_back % 10 == 2) {
		ordinal = "nd";
	}
	else if (gens_back % 10 == 3) {
		ordinal = "rd";
	}
	else {
		ordinal = "th";
	}

	string plural = (gens_separated == 1) ? "s" : "";

	if (gens_separated == 0) {
		cout << "Your cousin is your " << gens_back << ordinal << " cousin.";
	}
	else {
		cout << "Your cousin is your " << gens_back << ordinal << " cousin " << gens_separated << " time" << plural << " removed.";
	}

	

	




}
