#ifndef SHD_PYTHON_INTERPRETER_H_
#define SHD_PYTHON_INTERPRETER_H_

#include "Python.h"

#ifdef __FreeBSD__
#include <floatingpoint.h>
#endif

int python_main(int, char **);

#endif /* SHD_PYTHON_INTERPRETER_H_ */
