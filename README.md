# Array Memory Allocation Examples (C++ vs JavaScript)

## Categories Tested:
1. Fixed Stack Dynamic
2. Stack Dynamic
3. Fixed Heap Dynamic
4. Heap Dynamic

## 🆚 Comparison

| Category             | C++                            | JavaScript                            |
|----------------------|--------------------------------|----------------------------------------|
| Fixed Stack Dynamic  | Static array (e.g. int arr[5]) | Fixed array declared using literals   |
| Stack Dynamic        | VLA (Variable-Length Array)    | Array created with new Array(n)     |
| Fixed Heap Dynamic   | new int[5]                   | Array.from with fixed length         |
| Heap Dynamic         | new int[n] with user input   | Array grows using .push() method     |

> Note: JavaScript does not distinguish between stack/heap for arrays explicitly. Arrays are always dynamic and heap-allocated.

---

## 🔗 Repository Usage
- Clone the repo and run each file to observe the memory behavior.
- Use g++ filename.cpp to compile C++ code.
- Use node filename.js to run JavaScript code.

---

S M jahiduzzaman 
22103180
