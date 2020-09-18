#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The sequence is <ESC>[4m to start an underlined string
// and <ESC>[m to clear all ANSI styling
#define UNDERLINE_ESCSEQ "\x1b[4m%s\x1b[m"

// The length added to a string by UNDERLINE_ESCSEQ 
#define UNDERLINE_ESCSEQ_LEN 7

const char* ansiUnderline(const char* s);