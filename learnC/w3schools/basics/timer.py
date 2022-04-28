import time

start = time.time()
for x in range(1, 1000000):
    t = x

print(f'{time.time() - start:.3f}')
