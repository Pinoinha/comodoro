#include "pomodoro.h"

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
