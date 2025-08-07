min_cxx:
	$(CXX) -std=c++23 min.cc -o $@

min_c:
	rm -f min.c
	ln -s min.cc min.c
	$(CC) -std=c23 min.c -o $@
	rm -f min.c

.PHONY: clean
clean:
	git clean -xdf

