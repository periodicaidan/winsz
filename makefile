CC=gcc
CC_OPTS=-Wall
SOURCES=src/main.c src/ansi.c
COMPILE_SOURCES=${CC} ${SOURCES} ${CC_OPTS}

RELEASE_DIR=target/release
DEBUG_DIR=target/debug
ASM_DIR=target/debug

release:
	mkdir -p ${RELEASE_DIR}
	${COMPILE_SOURCES} -s -O2 -o target/release/winsz

debug:
	mkdir -p ${DEBUG_DIR}
	${COMPILE_SOURCES} -Og -o target/debug/winsz

asm:
	mkdir -p ${ASM_DIR}
	${COMPILE_SOURCES} -S -o target/asm/winsz.s
