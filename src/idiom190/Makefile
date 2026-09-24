# build foo.c as library libfoo.a and run ../idiom190ex.fz using the C backend
run:
	cc -c foo.c -o foo.o
	ar rcs libfoo.a foo.o
	fz -c -CFlags="-I$(CURDIR) -L$(CURDIR)" -CInclude=foo.h -CLink=foo -o=idiom190ex ../idiom190ex.fz
	./idiom190ex

clean:
	rm -f foo.o libfoo.a idiom190ex

.PHONY: run clean
