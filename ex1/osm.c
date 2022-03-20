#include <stdio.h>
#include <time.h>
#include "osm.h"
#include <math.h>

#include <sys/time.h>


void do_nothing(){}

double osm_operation_time(unsigned int iterations)
{
	printf("osm_operation_time() starts \n");
    struct timeval begin, end;
    unsigned int iteration = 0;
    gettimeofday(&begin, 0);
    while(iteration < iterations)
	{
        iteration++;
	}
    gettimeofday(&end, 0);
    long microseconds = (end.tv_usec - begin.tv_usec);
    printf("osm_operation_time() ends \n");
    printf("microseconds is %d \n", microseconds*1000);
    return (double) microseconds*1000;// * ( pow(10,9));
}
double osm_syscall_time(unsigned int iterations){
    clock_t start_time = clock();
    printf("osm_syscall_time() starts \n");
    unsigned int iteration = 0;
    while(iteration < iterations)
    {
        iteration++;
        OSM_NULLSYSCALL;
    }
    printf("osm_syscall_time() ends \n");
    return (clock() - start_time) * 1000000;
}
double osm_function_time(unsigned int iterations){
    clock_t start_time = clock();
    printf("osm_function_time() starts \n");
    unsigned int iteration = 0;
    while(iteration < iterations)
    {
        iteration++;
        do_nothing();
    }
    printf("osm_function_time() ends \n");
    return (clock() - start_time) * 1000000;
}
