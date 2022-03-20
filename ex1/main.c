#include <stdio.h>
#include <math.h>
#include "osm.h"

int main()
{
    double x = osm_syscall_time(pow(10,8));
    printf("%lf\n",x);

    //printf("%d\n",osm_function_time(100000000));
    //printf("%d\n",osm_syscall_time(100000000));

    return 0;
}
