gcc-opt = -std=c++17 -Wall --pedantic-errors

ls : myls.cpp
	g++ $(gcc-opt) $< -o $@

run :
	./ls

clean :
	rm -f ./ls

.PHONY : run clean
