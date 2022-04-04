//
// Created by merlin on 3/18/2022.
//

#ifndef PROJECT3_WEATHER_CSV_H
#define PROJECT3_WEATHER_CSV_H

#include <stdio.h>
#include "weather_processing.h"

#define OUTPUT_WEATHER_STRING_LENGTH 80

/**
 * Open a csv file of weather data
 *
 * @param title the name of the file to be opened
 * @return a pointer to the open file
 */
FILE *open_weather_file(char *title);

/**
 * Given one line of the csv file, build a structure holding that data
 * @param raw_data the line of the file
 * @return a struct filled with the data in the given line
 */
daily_weather_reading_t parse_daily_reading(char *raw_data);

/**
 * Get the next reading from the given file
 * @param file the file we are processing
 * @return a struct filled with the data from the next line of the file
 */
daily_weather_reading_t get_next_daily_reading(FILE *file);


#endif //PROJECT3_WEATHER_CSV_H

