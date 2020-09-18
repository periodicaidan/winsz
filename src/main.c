// Throw a compiler error on a Windows machine that doesn't have Cygwin or MinGW
#if IS_WINDOWS
	#error "winsz uses the UNIX API, and will not work on Windows without Cygwin or MinGW"
#endif

#include <stdio.h>
#include <unistd.h>		// For STDIN_FILENO
#include <sys/ioctl.h>	// for ioctl and TIOCGWINSZ

#include "ansi.h"

// Wrapper around the ioctl call to TIOCGWINSZ
#define getWinSize(ws) (ioctl(STDIN_FILENO, TIOCGWINSZ, &ws))

#define IS_WINDOWS \
	(defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !(defined(__CYGWIN__) || defined(__MINGW32__)))

int main(void)
{
	struct winsize ws;
	if (getWinSize(ws) == 0) {
		puts(ansiUnderline("Rows\tCols"));
		printf("%d\t%d\n", ws.ws_row, ws.ws_col);
	} else {
		return EXIT_FAILURE;
	}
}