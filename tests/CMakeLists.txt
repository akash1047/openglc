add_executable(simple_log simple_log.c)
add_test(
	NAME "Logger logs with format: `[level] message`"
	COMMAND simple_log
)
