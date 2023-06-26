#include <Python.h>
#include <stdio.h>
#include <floatobject.h>

void print_python_float(PyObject *p) {
    double value;

    if (!PyFloat_Check(p)) {
        printf("[ERROR] Invalid PyFloatObject\n");
        return;
    }

    value = PyFloat_AsDouble(p);
    printf("[.] float object info\n");

    printf("  [.] value: %f\n", value);
}

