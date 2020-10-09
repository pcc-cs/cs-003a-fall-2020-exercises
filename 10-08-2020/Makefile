all: namespace1 namespace2

namespace1: namespace1.cpp
	g++ -o $@ $^

namespace2: namespace2.cpp namespace3.cpp
	g++ -o $@ $^

clean:
	rm -f namespace?