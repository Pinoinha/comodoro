#include "pomodoro.h"

// TODO
// Implement timer_* functions
// Implement list_timers function

void 
timer_start(int duration) 
{
	if (duration <= 0) {
		puts("Please provide a valid duration value.");
		return;
	}

	puts("Timer successfully initialized");
}

void 
timer_pause() {
	pause();
}

void 
timer_stop() 
{
	puts("Timer finished!");
}

void 
counter(int duration) 
{
	sleep(duration);
	timer_stop();
}
void
list_timers() {
	return;
}

int 
main(int argc, char* argv[])
{
	/* EXAMPLE: getting arguments from command line*/
	if (argc == 2 && strcmp("list", argv[1]))
		list_timers();
	return 0;
}
