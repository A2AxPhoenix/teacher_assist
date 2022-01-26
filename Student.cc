#include "Student.h"
#include <stdexcept>
using namespace std;
using S = Student;

// A first name and a last name can only be 25 characters long each for a total 50 character long name.
const i64 MAX_CHARS = 25;
// Attempts, IDs, and Scores cannot be less than 0
const i64 MIN = 0;
// Scores can only be from 0 - 100. Precision is only to the second decimal place
const float MAX_SCORE = 100.00; 

S::Student() {
	ID = 1;
	firstName = "Place";
	lastName = "Holder";
	className = "CSCI-00";
	attempts = 0;
	score = 0.00;
	gotCorrect = false;
}
S::Student(i64 newID, string newFirstName, string newLastName, string newClassName) {
	set_ID(newID);
	set_firstName(newFirstName);
	set_lastName(newLastName);
	set_className(newClassName);
}

i64 S::get_ID() const { return ID; }
string S::get_name() const { return firstName + " " + lastName; }
string S::get_className() const { return className; }
i64 S::get_attempts() const { return attempts; }
float S::get_score() const { return score; }
bool S::get_isCorrect() const { return gotCorrect; }

void S::set_ID(i64 newID) { 
	if (newID <= MIN) {
		throw invalid_argument("Error: Inputted a number that is fewer than 0.\n"
								"Students must have a positive number ID starting at 1.");
	}
	if (newID > numeric_limits<i64>::max()) {
		throw invalid_argument("Error: Inputted an ID greater than the maximum capacity of the type.\n"
							   "IDs cannot be greater than 18,446,744,073,709,551,615.");
	} 
	ID = newID;
}
void S::set_firstName(string newFirstName) {
	if (newFirstName.size() > MAX_CHARS) {
		throw length_error("Error: Inputted a Student's name that is longer than maximum allowed size.\n"
							"Students must have a name shorter than 25 characters.");
	}
	for (const char c : newFirstName) {
		if (!isalpha(c)) {
			throw invalid_argument("Error: Inputted a number in a student's name.\n"
								   "Student's names must contain only letters between A and Z.");
		}
	}
	firstName = newFirstName;
}
void S::set_lastName(string newLastName) {
	if (newLastName.size() > MAX_CHARS) {
		throw length_error("Error: Inputted a Student's name that is longer than maximum allowed size.\n"
							"Students must have a name shorter than 25 characters.");
	}
	for (const char c : newLastName) {
		if (!isalpha(c)) {
			throw invalid_argument("Error: Inputted a number in a student's name.\n"
								   "Student's names must contain only letters between A and Z.");
		}
	}
	lastName = newLastName;
}
void S::set_className(string newClassName) {
	if (newClassName.size() > MAX_CHARS) {
		throw length_error("Error: Inputted a class name that is longer than maximum allowed size.\n"
							"Class Names must be shorter than 25 characters. Recommend using abbreviation of course.");
	}
	className = newClassName;;
}
void S::set_attempts(i64 newAttempts) {
	if (newAttempts < MIN) {
		throw invalid_argument("Error: Inputted attempts less than allowed amount.\n"
							   "Minimum allowed attempts is 0.");
	}
	if (newAttempts > MAX_CHARS) {
		throw invalid_argument("Error: Inputted attempts greater than allowed amount.\n"
							   "Maximum allowed attempts is 25.");
	}
	attempts = newAttempts;
}
void S::set_score(float newScore) {
	if (newScore < MIN || newScore > MAX_SCORE) {
		throw invalid_argument("Error: Inputted an invalid score.\n"
							   "Scores can only be positive from 0 to 100.");
	}
	score = newScore;
}
void S::set_isCorrect(bool isCorrect) {
	gotCorrect = isCorrect;
} 
