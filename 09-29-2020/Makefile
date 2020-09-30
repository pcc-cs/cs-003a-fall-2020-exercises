all: color1 char1

color1: color1.o color.o
	g++ -o $@ $^

color1.o: color1.cpp color.h
	g++ -c $<

color.o: color.cpp color.h
	g++ -c $<

char1: char1.cpp
	g++ -o $@ $^

clean:
	rm -f *.o color? char?
