import os
import time

#create sample.txt
with open('sample.txt', 'w') as file:
    for _ in range(1000):
        file.write("Never gonna give you up.\n")

# compute time
start_time = time.time()
total = 0
for _ in range(10**7):
    total += 1
compute_time = time.time() - start_time

# I/O time
start_time = time.time()
with open('sample.txt', 'r') as file:
    for line in file:
        time.sleep(0.001)  
io_time = time.time() - start_time

# Clean up the dummy file
os.remove('sample.txt')

print(f"Compute Time: {compute_time:.4f} seconds")
print(f"I/O Time: {io_time:.4f} seconds")