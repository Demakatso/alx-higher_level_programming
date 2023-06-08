#!/usr/bin/python3
import sys

arguments = sys.argv[1:]

num_arguments = len(arguments)

print(f"Number of argument(s): {num_arguments}")

if num_arguments == 0:
    print(".")
else:
    for i, arg in enumerate(arguments, start=1):
        print(f"{i}: {arg}")
