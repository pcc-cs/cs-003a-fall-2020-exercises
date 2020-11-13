all: list1 template1 lambda1 lambda2 lambda3

list1: list1.cpp list.h
	g++ -o $@ $<

template1: template1.cpp
	g++ -o $@ $<

lambda1: lambda1.cpp
	g++ -o $@ $<

lambda2: lambda2.cpp
	g++ -o $@ $<

lambda3: lambda3.cpp
	g++ -o $@ $<

clean:
	rm -f list? template? lambda?