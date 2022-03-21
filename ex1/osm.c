
#include <time.h>
#include "osm.h"
#include <sys/time.h>


void do_nothing(){}

double osm_operation_time(unsigned int iterations)
{
    struct timeval begin, end;
    unsigned int iteration = 0;
    gettimeofday(&begin, 0);
    while(iteration < iterations)
	{
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
    }
    gettimeofday(&end, 0);
    long microseconds = (end.tv_usec - begin.tv_usec);
    return (double) microseconds*1000;
}
double osm_syscall_time(unsigned int iterations){
    struct timeval begin, end;
    unsigned int iteration = 0;
    gettimeofday(&begin, 0);
    while(iteration < iterations)
    {
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
    }
    gettimeofday(&end, 0);
    long microseconds = (end.tv_usec - begin.tv_usec);
    return (double) microseconds*1000;
}
double osm_function_time(unsigned int iterations){
    struct timeval begin, end;
    unsigned int iteration = 0;
    gettimeofday(&begin, 0);
    while(iteration < iterations)
    {
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        iteration++;
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
        do_nothing();
    }
    gettimeofday(&end, 0);
    long microseconds = (end.tv_usec - begin.tv_usec);
    return (double) microseconds*1000;
}
