// clang-format off
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"", "sbbat",	5,		10},
	// {"", "sbcpu",	30,		2},
	// {"", "sbmem",	30,		1},
	{"", "sbst",    5,      1},
	{"", "clock",	5,		3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
