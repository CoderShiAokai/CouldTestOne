#ifndef MYCL_START_H_INCLUDED
#define MYCL_START_H_INCLUDED


#ifdef __APPLE__
#include <OpenCL/cl.h>
#else
#include <CL/cl.h>
#endif

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>

cl_context CreateContext();
cl_command_queue CreateCommandQueue(cl_context context, cl_device_id *device);
cl_program CreateProgram(cl_context context, cl_device_id device, const char* fileName);
bool CreateMemObjects(cl_context context, cl_mem memObjects[3],float *a, float *b);
void Cleanup(cl_context context, cl_command_queue commandQueue,
             cl_program program, cl_kernel kernel, cl_mem memObjects[3]);



#endif // MYCL_START_H_INCLUDED
