#include "iostream"
#include <math.h>
#include "osm.h"

int main()
{
  std::cout << "operation_time is "<< osm_operation_time(pow(10,5))<<std::endl;
  std::cout <<"osm_function_time is "<<osm_function_time(pow(10,5))<<std::endl;
  std::cout << "osm_syscall_time is "<< osm_syscall_time(pow(10,5))<<std::endl;
  return 0;
}
