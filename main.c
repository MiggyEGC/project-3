#include <stdio.h>
#include <string.h>
#include "weather_processing.h"
#include "weather_csv.h"

int main() {

    char temp[OUTPUT_WEATHER_STRING_LENGTH * 2];
    format_stats_header(temp);
    printf("%s", temp);
    weather_reading_t data;
    data.low_temp = 42;
    data.high_temp = 64;
    data.temp_departure = -9;
    data.avg_temp = 52;
    data.avg_pressure = 42.2;
    data.precipitation = .03;
    format_stats(temp, data);
    printf("%s", temp);

    format_daily_header(temp);
    printf("%s", temp);
    daily_weather_reading_t monday_data;
    monday_data.day = 22;
    monday_data.month = 3;
    monday_data.year = 2022;
    monday_data.reading_stats = data;
    format_daily_reading(temp, monday_data);
    printf("%s", temp);


    char raw_reading[80];
    strcpy(raw_reading, "12/31/2021,54,48,51,16,1014,Trace");
    daily_weather_reading_t reading = parse_daily_reading(raw_reading);
    format_daily_reading(temp, reading);
    printf("%s\n", temp);
}