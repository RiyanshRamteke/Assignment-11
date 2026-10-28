# Assignment 11: list and vector Containers of the STL in C++

## About the Program

This C++ program uses two containers of the **Standard Template Library (STL)**:

- **(a) `list`:** a doubly linked list. Insertion and deletion is fast at any position, but elements cannot be accessed by index.
- **(b) `vector`:** a dynamic array. Elements can be accessed quickly by index, and the size grows automatically.

| Point | list | vector |
|---|---|---|
| Internal structure | Doubly linked list | Dynamic array (continuous memory) |
| Access by index | Not possible | Possible and fast |
| Insert / delete in the middle | Fast | Slow (elements are shifted) |
| Insert / delete at the end | Fast | Fast |
| Best used when | Many insertions and deletions | Fast access by index is needed |

## Functions Used

| Function | list | vector | Meaning |
|---|---|---|---|
| `push_back(x)` | Yes | Yes | Add x at the end |
| `push_front(x)` | Yes | No | Add x at the beginning |
| `pop_back()` | Yes | Yes | Remove the last element |
| `pop_front()` | Yes | No | Remove the first element |
| `size()` | Yes | Yes | Number of elements |
| `front()` / `back()` | No | Yes | First / last element |
| `insert(pos, x)` | No | Yes | Insert x at position pos |
| `erase(pos)` | No | Yes | Remove the element at pos |
| `remove(x)` | Yes | No | Remove all elements equal to x |
| `sort()` | `l.sort()` | `sort(v.begin(), v.end())` | Arrange in increasing order |
| `reverse()` | `l.reverse()` | Not used | Reverse the order |
| `at(i)` | No | Yes | Access element by index |
| `clear()` | No | Yes | Remove all elements |

## Program Flow

1. **Part A (list):** Adds the three input numbers with `push_back()`, adds 0 with `push_front()` and 99 with `push_back()`. Then it uses `pop_front()`, `pop_back()`, `sort()`, `reverse()` and `remove()`. The list is displayed using an iterator.
2. **Part B (vector):** Adds the three input numbers with `push_back()` and shows the size, first and last element. Then it uses `insert()`, `erase()`, `sort()`, `pop_back()`, `at()` and `clear()`. The vector is displayed using an index.

## Files

| File | Description |
|---|---|
| `assi11.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi11.cpp -o assi11
./assi11
```

On Windows PowerShell use `.\assi11` to run.

> **Note:** The compiler may show a small warning for `i < v.size()` (signed and unsigned comparison). It is harmless and the program runs correctly.

## Sample Input and Output

**Input:**

```
30 10 20
```

**Output:**

```
Enter three numbers: 
--- Part A: list ---
List after adding : 0 30 10 20 99 
Size of list      = 5
After pop_front and pop_back : 30 10 20 
After sort        : 10 20 30 
After reverse     : 30 20 10 
After remove(10)  : 30 20 

--- Part B: vector ---
Vector after adding : 30 10 20 
Size  = 3
First = 30, Last = 20
After insert 50 at start : 50 30 10 20 
After erase index 1      : 50 10 20 
After sort               : 10 20 50 
After pop_back           : 10 20 
Element at index 1 = 20
After clear, size = 0
```

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `30 10 20` | List: 0 30 10 20 99, then 30 10 20, sorted 10 20 30, reversed 30 20 10, after remove(10) 30 20. Vector: 30 10 20, insert 50 30 10 20, erase 50 10 20, sort 10 20 50, pop_back 10 20, at(1) = 20, size after clear = 0 |
| 2 | `5 8 2` | List: 0 5 8 2 99, then 5 8 2, sorted 2 5 8, reversed 8 5 2, after remove(8) 5 2. Vector: 5 8 2, insert 50 5 8 2, erase 50 8 2, sort 2 8 50, pop_back 2 8, at(1) = 8, size after clear = 0 |

## Learning Outcomes

- Include `<list>`, `<vector>` and `<algorithm>` and create containers.
- Add, remove, sort and display elements of a list and a vector.
- Use an iterator and an index to traverse containers.
- Choose between a list and a vector depending on the need.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment11
- **Branch:** main
