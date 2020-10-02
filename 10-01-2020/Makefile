all: color1 student1

color1: color1.o color.o
	g++ -o $@ $^

color1.o: color1.cpp color.h
	g++ -c $<

color.o: color.cpp color.h
	g++ -c $<

student1: student1.o student.o
	g++ -o $@ $^

student1.o: student1.cpp
	g++ -c $<

student.o: student.cpp student.h
	g++ -c $<

clean:
	rm -f *.o color? student?
