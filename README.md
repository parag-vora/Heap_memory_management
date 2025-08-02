# Dynamic Array Management in C (Heap Memory Management)
This project demonstrates a simple dynamic array (container) implementation in C that dynamically resizes its storage in heap memory as new elements are added. It is designed for embedded system scenarios where memory efficiency and dynamic allocation are critical.

## Project Structure
<pre> 
/project-root
  ├── main.c               # Application entry point
  └── core
      ├── inc
      │   └── container.h   # Header file defining the dynamic array interface
      └── src
          └── container.c   # Source file implementing dynamic array logic </pre>


 ## Features
 * Implements a dynamically growing array (container).
 * Supports:
     - Structure initialization with heap memory allocation.
     - Inserting items (auto-resizes when full).
     - Printing array elements and its size/capacity.
     - Fetching an item by index.
     - Modifying an item at a specific index.
     - Deleting an item and adjusting the array.
* Suitable for embedded systems with constrained memory.

## Future Improvements
* Implement a dynamic shrinking mechanism when deleting items.
* Add error codes instead of using exit().
* Optimize memory reallocation strategy.
* Convert to a generic container (void pointers) for multiple data types.
* Unit tests integration.
