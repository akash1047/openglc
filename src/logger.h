#include <stdio.h>

#define LOG_LEVEL_DEBUG 5 // Debug logs ( USE ENV TO DISABLE OR ENABLE IT AT BUILD TIME )
#define LOG_LEVEL_INFO 4 // Information related stuffs
#define LOG_LEVEL_WARN 3 // Some minor threats present
#define LOG_LEVEL_ERROR 2 // Some error happened, gracefully exit the program
#define LOG_LEVEL_FATAL 1 // Something terible happened, can't exit gracefully

static char LOG_LEVEL_STRING[][6] = {
	"OPPS!",
	"FATAL",
	"ERROR",
	"WARN",
	"INFO",
	"DEBUG"
};

#define LOG(LEVEL, MSG, ...) printf("[%s] " MSG "\n", ((LEVEL) < 6 && (LEVEL) > 0) ? LOG_LEVEL_STRING[LEVEL] : LOG_LEVEL_STRING[0], __VA_ARGS__);

#define LOG_DEBUG(MSG, ...) LOG(LOG_LEVEL_DEBUG, MSG, __VA_ARGS__)
#define LOG_INFO(MSG, ...) LOG(LOG_LEVEL_INFO, MSG, __VA_ARGS__)
#define LOG_WARN(MSG, ...) LOG(LOG_LEVEL_WARN, MSG, __VA_ARGS__)
#define LOG_ERROR(MSG, ...) LOG(LOG_LEVEL_ERROR, MSG, __VA_ARGS__)
#define LOG_FATAL(MSG, ...) LOG(LOG_LEVEL_FATAL, MSG, __VA_ARGS__)
