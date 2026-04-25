prefix=/usr
bindir=$(prefix)/bin

all:
	gcc -O2 main.c -o mycalc

install:
	install -D mycalc $(DESTDIR)$(bindir)/mycalc

clean:
	rm -f mycalc
