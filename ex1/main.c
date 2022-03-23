#include <stdio.h>
#include <math.h>
#include "osm.h"

int main()
{
    printf("osm_operation_time is %lf\n", osm_operation_time(pow(10,5)));
    printf("osm_function_time is %lf\n", osm_function_time(pow(10,5)));
    printf("osm_syscall_time is %lf\n", osm_syscall_time(pow(10,5)));
    return 0;
}
