#include <iostream>
#include <Python.h>

int main(int argc, char** argv) {
  Py_Initialize();
  
  FILE* fp = fopen("test.py", "r");
  PyRun_SimpleFile(fp, "test.py");
  fclose(fp);
  
  Py_Finalize();

  return 0;
}