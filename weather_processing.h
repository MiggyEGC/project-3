//
// Created by merlin on 3/18/2022.
//

#ifndef PROJECT3_WEATHER_PROCESSING_H
#define PROJECT3_WEATHER_PROCESSING_H

// the amount we should add to a total for days that have "Trace" precipitation
#define TRACE_PRECIPITATION 0.001

typedef struct{
    int high_temp;
    int low_temp;
    int avg_temp;
    int temp_departure;
    double avg_pressure;
    double precipitation;
} weather_reading_t;

typedef struct {
    int day;
    int month;
    int year;
    weather_reading_t reading_stats;
} daily_weather_reading_t;

/**
 * Put the text of a heading for the formatted summary statistics created by
 * format_stats
 *
 * @param output_string The string in which the heading will be built.
 * It must be at least 80 characters long
 */
void format_stats_header(char *output_string);

/**
 * Format one weather reading into a string
 * @param output_string The string in which the data will be formatted (must be
 * at least 80 characters long)
 * @param stat The data that should be formatted
 */
void format_stats(char *output_string, weather_reading_t stat);

/**
 * Put the text of a heading for the formatted daily statistics created by
 * format_daily_stats
 *
 * @param output_string The string in which the heading will be built.
 * It must be at least 80 characters long
 */
void format_daily_header(char *output_string);

/**
 * Format one daily weather reading into a string
 * @param output_string The string in which the data will be formatted (must be
 * at least 80 characters long)
 * @param reading The data that should be formatted
 */
void format_daily_reading(char *output_string, daily_weather_reading_t reading);

/**
 * Compute monthly totals of all stats that are in a given file
 *
 * @param file_title The name of the file
 * @param data An array of 12 weather_reading_t's that will store the summary data
 */
void get_monthly_totals(char *file_title, weather_reading_t *data);

#endif //PROJECT3_WEATHER_PROCESSING_H
