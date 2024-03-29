//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon, Command, Update Interval, Update Signal*/

	{"", "bash ~/.local/bin/statusbar/music.sh", 1, 20},

	{"", "bash ~/.local/bin/statusbar/temp.sh", 5, 0},

	{"", "bash ~/.local/bin/statusbar/ram.sh", 5, 0},

	{"", "bash ~/.local/bin/statusbar/battery.sh", 1, 0},

	{"", "bash ~/.local/bin/statusbar/datetime.sh", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
