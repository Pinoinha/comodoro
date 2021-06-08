#ifndef POMODORO_H
#define POMODORO_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void timer_start();

void timer_pause();

void timer_stop();

void counter(int duration);

#endif /* POMODORO_H */
