all: list1

list1: list1.o list.o
	g++ -o $@ $^

# Generic way to compile all .cpp files
.o: .cpp
	g++ -c $<

clean:
	rm -f list? *.o