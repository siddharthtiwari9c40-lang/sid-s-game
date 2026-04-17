# Write a Python program that takes a NumPy array as input and performs the following operations: 
# slicing, searching an element, splitting and sorting. Display the results in a structured format

import numpy as np

arr = np.array([5, 2, 9, 1, 7])

print("Original:", arr)

print("Slice:", arr[:3])

x = 9
print(f"Index of {x}:{ np.where(arr == x)[0]}")

print("Split:", np.array_split(arr, 2))

print("Sorted:", np.sort(arr))

# Prepare an array and show different types of reshaping operations on it

import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6])
print("Original Array:", arr)

a = arr.reshape(2, 3)
print("\nReshape to 2x3:", a)

b = arr.reshape(3, 2)
print("\nReshape to 3x2:", b)

c = a.reshape(-1)
print("\nFlattened Array:", c)

d = arr.reshape(2, -1)
print("\nReshape with -1:", d)