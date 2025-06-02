# This is Makefile which lets us compile file with simple 'make' command

CandyShop: CandyList.c
	cc CandyList.c -o candyExecutable

.PHONY=clean # this is to reat clean as command and not as a file if it does exist
clean:
	rm -r candyExecutable
