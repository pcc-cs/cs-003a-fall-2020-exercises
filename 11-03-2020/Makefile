all: class1 class2 except1

class1: class1.cpp
	g++ -o $@ $<

class2: class2.cpp
	g++ -o $@ $<

except1: except1.cpp
	g++ -o $@ $<

clean:
	rm -f class? except?