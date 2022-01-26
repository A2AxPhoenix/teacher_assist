a.out: 
	g++ -Wall -Wextra -Wpedantic -pedantic-errors -Wno-unused-variable -std=c++2a -g -fmax-errors=1 -Wfatal-errors -D_GLIBCXX_DEBUG -fsanitize=undefined -fsanitize=address tester.cc Student.cc

clean:
	rm a.out
