all: map1 iter1 iter2

# Note the "-g" flag that adds additional info to prep for debugging
map1: map1.cpp
	g++ -g -o $@ $<

iter1: iter1.cpp
	g++ -g -o $@ $<

iter2: iter2.cpp
	g++ -g -o $@ $<

clean:
	rm -f map? iter?