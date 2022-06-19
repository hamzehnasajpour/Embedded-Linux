cmake_minimum_required(VERSION 3.10)
project(timers)

add_executable(timer_alarm src/alarm.c)

add_executable(linux_timer src/linux_timer.c)
