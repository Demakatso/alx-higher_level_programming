#include <Python.h>
#include <stdio.h>

void print_python_bytes(PyObject *p) {
    Py_ssize_t size, i;
    unsigned char *str;

    if (!PyBytes_Check(p)) {
        printf("[ERROR] Invalid PyBytesObject\n");
        return;
    }

    size = PyBytes_Size(p);
    str = (unsigned char *)PyBytes_AsString(p);

    printf("[.] bytes object info\n");
    printf("  [.] size: %ld\n", size);
    printf("  [.] trying string: %s\n", str);

    if (size > 10)
        size = 10;

    printf("  [.] first %ld bytes: ", size);
    for (i = 0; i < size; i++) {
        printf("%02x", str[i]);
        if (i < size - 1)
            printf(" ");
    }
    printf("\n");
}

