all: foreach message

foreach: foreach.cpp
	g++ -I . -o $@ $<

message: message.cpp
	g++ -o $@ $<

clean:
	rm -f foreach message