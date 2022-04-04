
#include <stdio.h>
#include <string.h>
#include "weather_processing.h"
#include "weather_csv.h"

void format_stats_header(char *output_string)
{
    sprintf(output_string, " High   Low   Avg  Temp     Avg    Tot\n");
    strcat(output_string, " Temp  Temp  Temp   Dep    Pres   Prec\n");
}

void format_stats(char *output_string, weather_reading_t stat)
{

    sprintf(output_string," %5d %5d %5d %5d  %7.2f %6.3f\n",

              stat.high_temp,
              stat.low_temp,
              stat.avg_temp,
              stat.temp_departure,
              stat.avg_pressure,
              stat.precipitation);
}

void format_daily_header(char *output_string)
{
    char temp[OUTPUT_WEATHER_STRING_LENGTH * 2];
    sprintf(output_string, "      Date  High   Low   Avg  Temp      Avg    Tot\n");
    strcat(output_string, "            Temp  Temp  Temp   Dep     Pres   Prec\n");
}

void format_daily_reading(char *output_string, daily_weather_reading_t reading)
{
    sprintf(output_string, "%02d/%02d/%4d %5d %5d %5d %5d  %7.2f %6.3f\n",
            reading.month,
            reading.day,
            reading.year,
            reading.reading_stats.high_temp,
            reading.reading_stats.low_temp,
            reading.reading_stats.avg_temp,
            reading.reading_stats.temp_departure,
            reading.reading_stats.avg_pressure,
            reading.reading_stats.precipitation);



}

void get_monthly_totals(char *file_title, weather_reading_t data[])
{

}

