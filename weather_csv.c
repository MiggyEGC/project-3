//
// Created by merlin on 3/18/2022.
//
#include <string.h>
#include <stdlib.h>
#include "weather_csv.h"

#define MAX_LINE_SIZE 100

FILE *open_weather_file(char *title)
{
    FILE *f = fopen(title, "r");
    //TODO skip the first two lines
    return f;
}

daily_weather_reading_t parse_daily_reading(char *raw_reading)
{
    {
        daily_weather_reading_t reading;
        char *s = raw_reading;
        char *f = strchr(s, '/');
        *f = '\0';
        reading.month = atoi(s);
        s = f+1;

        return reading;
    }

}

int get_next_int(char **s, char delimiter)
{
    char *f = strchr (*s, delimiter);
    *f = '\0';
    int result = atoi(*s);
    *s = f+1;
    return result;
}

daily_weather_reading_t get_next_daily_reading(FILE *file)
{
    //TODO read one line from the file, use parse_daily_reading to get its data and return the result
}



