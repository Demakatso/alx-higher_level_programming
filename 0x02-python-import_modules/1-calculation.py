#!/usr/bin/python3
from calculator_1 import add, sub, mul, div

a = 10
b = 5

result_add = add(a, b)
result_sub = sub(a, b)
result_mul = mul(a, b)
result_div = div(a, b)

print(f"The addition of {a} and {b} is: {result_add}")
print(f"The subtraction of {a} and {b} is: {result_sub}")
print(f"The multiplication of {a} and {b} is: {result_mul}")
print(f"The division of {a} and {b} is: {result_div}")
