CC=gcc
CFLAGS=-g -Wall
SPECLIBS=
EXECUTABLES=tanums1 tanums2

# the tanums group signify: take numbers. Meant to be used as a pipe
# either ./tanums1 < numberfile or cat numberfile | ./tanums1
tanums01: tanums1.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

tanums2: tanums2.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

.PHONY: clean

clean:
	rm -f ${EXECUTABLES}
