#!/bin/python3.11


class A:
    X = 0
    def __init__(self, v = 0):
        self.Y = v
        A.X += v


o = A()
b = A(1)
c = A(2)
print(c.X)

