#include "read.h"
#include "Student.h"
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
	Student s('a', "Billy","Holmes", "CSCI-40");
	i64 ID = read("Please enter an ID:\n");
	s.set_ID(ID);
	cout << s.get_ID() << endl;
	string firstName = read("Please enter a student's first name:\n");
	s.set_firstName(firstName);
	string lastName = read("Please enter a last name:\n");
	s.set_lastName(lastName);
	i64 attempts = read("How many attempts did it take the student?\n");
	s.set_attempts(attempts);
	float score = read("What is the student's score on the assignment?\n");
	s.set_score(score);
	string correct = read("Did the student get the answer correct?\n");
	if (correct == "yes" || correct == "true" || correct == "1") s.set_isCorrect(true);
	else s.set_isCorrect(false);
	/*catch (invalid_argument const &e) {
		cout <<  e.what() << endl;
	}*/
}
