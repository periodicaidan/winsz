CC=gcc
CC_OPTS=-Wall
SOURCES=src/main.c src/ansi.c
COMPILE_SOURCES=${CC} ${SOURCES} ${CC_OPTS}

release:
	${COMPILE_SOURCES} -s -O2 -o target/release/winsz

debug:
	${COMPILE_SOURCES} -Og -o target/debug/winsz

asm:
	${COMPILE_SOURCES} -S -o target/asm/winsz.s