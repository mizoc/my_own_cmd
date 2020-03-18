gcc-opt = -std=c++17 -Wall --pedantic-errors

cat : mycat.cpp
	g++ $(gcc-opt) $< -o $@

clean :
	rm -f ./cat

.PHONY :clean
