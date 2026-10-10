CC=gcc
CFLAGS=-g -Wall
SPECLIBS=
EXECUTABLES=tanums1 tanums2 tanums3 tanums4

# the tanums group signify: take numbers. Meant to be used as a pipe
# either ./tanums1 < numberfile or cat numberfile | ./tanums1
tanums01: tanums1.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

tanums2: tanums2.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

tanums3: tanums3.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

tanums4: tanums4.c
	${CC} ${CFLAGS} -o $@ $^ ${SPECLIBS}

.PHONY: clean

clean:
	rm -f ${EXECUTABLES}
