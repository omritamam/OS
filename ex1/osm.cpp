#include <time.h>
#include "osm.h"
#include <sys/time.h>

int do_nothing(){
  return 0;
}

double osm_operation_time(unsigned int iterations){
  if(iterations <= 0 ){
      return -1;
    }
  struct timeval begin, end;
  unsigned int iteration = 0;
  gettimeofday(&begin, 0);
  int temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10;
  while(iteration < iterations)
    {
      iteration +=10;
      temp1++;
      temp2++;
      temp3++;
      temp4++;
      temp5++;
      temp6++;
      temp7++;
      temp8++;
      temp9++;
      temp10++;
    }
  gettimeofday(&end, 0);
  return ((double)(end.tv_usec - begin.tv_usec)) * ((double) 1000 / iterations);
}
double osm_syscall_time(unsigned int iterations){
  if(iterations <= 0 ){
      return -1;
    }
  struct timeval begin, end;
  unsigned int iteration = 0;
  gettimeofday(&begin, 0);
  while(iteration < iterations)
    {
      iteration+=10;
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
  return ((double)(end.tv_usec - begin.tv_usec)) * ((double) 1000 / iterations);
}
double osm_function_time(unsigned int iterations){
  if(iterations <= 0 ){
      return -1;
    }
  struct timeval begin, end;
  unsigned int iteration = 0;
  gettimeofday(&begin, 0);
  while(iteration < iterations)
    {
      iteration+=10;
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
  return ((double)(end.tv_usec - begin.tv_usec)) * ((double) 1000 / iterations);
}
