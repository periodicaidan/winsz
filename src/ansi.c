#include "ansi.h"

const char* ansiUnderline(const char* s)
{
	char* underlined;
	size_t underlinedLen = strlen(s) + UNDERLINE_ESCSEQ_LEN;
	underlined = (char*) malloc(underlinedLen * sizeof(char));

	//                 don't forget the NUL!
	snprintf(underlined, underlinedLen + 1, UNDERLINE_ESCSEQ, s);
	return underlined;
}