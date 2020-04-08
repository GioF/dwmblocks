//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sudo apt update && apt list --upgradable | sed 1d | wc -l",					600,		0},
	
	{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	4,		0},

	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{"", "date +\"%a %d/%m/%y %H:%M:%S\"",						1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
