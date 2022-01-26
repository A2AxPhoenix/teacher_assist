#ifndef STUDENT_H
#define STUDENT_H
#include <stdexcept>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <utility>
using namespace std;
using i64 = int64_t;

class Student {
	private:
		i64 ID; 
		string firstName;
		string lastName;
		string className;
		i64 attempts;
		float score;
		unordered_map<string, float> scores;
		bool gotCorrect;
	public:
		// Standard Constructor for a student.
		Student();
		// Use this if you have the student's ID, name, and class. IDs must be whole numbers and greater than 0.
		Student(i64 newID, string newFirstName, string newLastName, string className);
		// Return Student's ID
		i64 get_ID() const;
		// Return Student's name
		string get_name() const;
		// Return Student's class name
		string get_className() const;
		// Return student's attempts
		i64 get_attempts() const;
		// Return student's score
		float get_score() const;
		// Return if they got it correct on one of their attempts
		bool get_isCorrect() const;
		// Sets a student's ID to a whole number greater than 1. No floats, doubles, strings, chars!
		// Example: s.set_ID(1);
		void set_ID(i64 newID);
		// Sets a student's first name.
		// Example: s.set_firstName(firstName);
		void set_firstName(string newFirstName);
		// Sets a student's last name.
		// Example: s.set_lastName(lastName);
		void set_lastName(string newLastName);
		// Sets what class the student is in
		// Example: s.set_className(className);
		void set_className(string newClassName);
		// Sets the number of attempts a student took for a specific lab or assignment.
		// Example: s.set_attempts(10);
		void set_attempts(i64 newAttempts);
		// Sets the score a student received on the total assignment with floating point values.
		// Defaults to 2 decimal places.
		// Example: s.setScore(85.37);
		void set_score(float newScore);
		// Sets if the student got the answer correct.
		// Example: s.set_isCorrect(true);
		void set_isCorrect(bool isCorrect);
		// Return all of the assignment and the score the Student received
		void print_scores();
		bool operator<(const Student &s) const;
		bool operator==(const Student &s) const;
		// How to output a student
		friend ostream& operator<<(ostream& outs, const Student &s);
		// How to read into a student
		friend istream& operator>>(istream& ins, Student &s);
};
#endif
