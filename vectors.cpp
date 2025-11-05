//vector inbuilt functions
//vector is like a dynamic memory allocation of an array that can resize itself
vector<datatype>vec; //This declares an empty vector vec that can hold elements of datatype. Its initial size is 0.
vector<datatype>vec(n,0); //This declares a vector vec of size n, and initializes all n elements to 0. You can replace 0 with any other default value you want.
for(auto it:vec) cout<<it<<endl;
cout<<vec.front();  //gets the first element of the vector or can store in another variable by using front()
Example: int first_val=vec.front();
cout<<vec.back();   //gets the last element from the vector
Example: int lastval=vec.back();
//at() will throw an std::out_of_range exception, which can help in debugging. vec[index] does not perform bounds checking, leading to undefined behavior if the index is invalid.
cout<<vec.at(index); //it is same as the vec[index] it is also used to change the access.
vec.push_back(value) //adds the value at the last of vector  If the vector's current capacity is not enough to accommodate the new element, push_back() will automatically reallocate memory
vec.pop_back();    //Removes the last element from the vector. This reduces the vector's size by one. Note that it doesn't return the removed element
vec.size();       //Returns the number of elements currently in the vector.
vec.capacity();   //Returns the total number of elements the vector can hold without reallocating memory. This value is often greater than or equal to size()
vec.empty();      //Returns true if the vector has no elements and false otherwise.
vec.clear();    //Removes all elements from the vector, making it empty. The capacity() typically remains unchanged, but the size() becomes 0
vec.erase(position); //Removes the element at position. position is an iterator. This can also be computationally expensive.
vec.erase(vec.begin() + index) //removes one element at that index.
vec.erase(start, end) //removes a range: from start to just before end.
//erase function can't be used by index at a position but by vec.begin()+index value
vec.insert(position,value); //Inserts value before the element at position. position is an iterator. This can be computationally expensive as it may require shifting all subsequent elements.
vec.begin();     //Returns an iterator to the first element of the vector. Used for iterating through the vector.
vec.end();       //Returns an iterator to the theoretical element after the last element of the vector. Used to mark the end of iteration.
//while using begin() and end() functions we use auto as data type as it is used to as a pointer in cpp and the functions return address of elements
Example: auto it = vec.begin(); // points to first element in the vector
for(auto it = vec.begin(); it != vec.end(); ++it)  cout << *it << " ";
assign(count, value): //Assigns count copies of value to the vector, replacing its current contents. where it takes the integer values as count and value
assign(first, last): //Assigns elements from an iterator range [first, last) to the vector, replacing its current contents. where it takes the pointers as first and last
    vector<int> vec;
    vec.assign(5, 10); // assigns five 10s: {10, 10, 10, 10, 10}
    
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> vec;
    vec.assign(source.begin() + 1, source.begin() + 4); // {2, 3, 4}
vector<int> v1 = {1, 2, 3};

// resize(5): Increases size to 5. New elements are initialized to 0.
v1.resize(5);           // v1 becomes: {1, 2, 3, 0, 0}
// resize(7, 9): Increases size to 7. New elements initialized to 9.
v1.resize(7, 9);        // v1 becomes: {1, 2, 3, 0, 0, 9, 9}
vector<int> v2 = {10, 20};
// swap(): Exchanges contents of v1 and v2.
v1.swap(v2);            // Now v1 = {10, 20}, v2 = {1, 2, 3, 0, 0, 9, 9}
// emplace_back(): Constructs and inserts an element at the end.
// More efficient than push_back for complex types.
v1.emplace_back(30);    // v1 becomes: {10, 20, 30}

1. vector<int> vec;                   // Declares an empty vector of integers
2. vector<int> vec(n, 0);             // Declares a vector of size n, initializes all elements to 0

--- Modifiers ---
3. vec.push_back(value);              // Adds value at the end of the vector
4. vec.emplace_back(value);           // Constructs and inserts element at the end (more efficient for objects)
5. vec.pop_back();                    // Removes the last element
6. vec.insert(vec.begin()+pos, val);  // Inserts val at given position (iterator-based)
7. vec.erase(vec.begin()+pos);        // Removes element at given position
8. vec.erase(vec.begin()+start, vec.begin()+end); // Removes elements in range [start, end)
9. vec.clear();                       // Removes all elements (size becomes 0)
10. vec.assign(count, value);         // Assigns count copies of value
11. vec.assign(first, last);          // Assigns elements from iterator range [first, last)
12. vec.resize(n);                    // Changes size to n (default initializes new elements)
13. vec.resize(n, val);               // Changes size to n, new elements initialized to val
14. vec.swap(otherVec);               // Swaps contents with another vector
15. std::swap(vec1, vec2);            // Non-member swap for two vectors

--- Element Access ---
16. vec[index];                       // Access element at index (no bounds check)
17. vec.at(index);                    // Access element at index with bounds checking
18. vec.front();                      // Returns reference to first element
19. vec.back();                       // Returns reference to last element

--- Iterators ---
20. vec.begin();                      // Iterator to first element
21. vec.end();                        // Iterator to one past the last element
22. vec.rbegin();                     // Reverse iterator to last element
23. vec.rend();                       // Reverse iterator to one before first element
24. vec.cbegin();                     // Constant iterator to first element
25. vec.cend();                       // Constant iterator to one past last element
26. vec.crbegin();                    // Constant reverse iterator to last element
27. vec.crend();                      // Constant reverse iterator to one before first element

--- Capacity ---
28. vec.size();                       // Returns current number of elements
29. vec.capacity();                   // Returns allocated storage capacity
30. vec.empty();                      // Checks if vector is empty
31. vec.reserve(n);                   // Reserves storage for at least n elements
32. vec.shrink_to_fit();              // Reduces capacity to fit current size
33. vec.max_size();                   // Returns maximum elements vector can hold

--- Constructors / Assignments ---
34. vector<int> copyVec(vec);         // Copy constructor
35. vector<int> assignedVec = vec;    // Copy assignment
36. vector<int> movedVec(move(vec));  // Move constructor
37. assignedVec = move(movedVec);     // Move assignment


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30};

    1. size(): number of elements in vector
    cout << "Size of v: " << v.size() << endl; // 5

    2. capacity(): total storage currently allocated
    cout << "Capacity of v: " << v.capacity() << endl; // >=5 (implementation dependent)

    3. max_size(): maximum number of elements vector can hold
    cout << "Max size of v: " << v.max_size() << endl; // Very large number (system dependent)

    4. empty(): check if vector is empty (1=true,0=false)
    cout << "Is v empty? " << v.empty() << endl; // 0 (false)

    5. resize(n): resizes vector to contain n elements
    v.resize(3);
    cout << "After resize to 3: ";
    for (int x : v) cout << x << " "; cout << endl; // 1 2 3

     6. shrink_to_fit(): reduces capacity to fit current size
    v.shrink_to_fit();
    cout << "Shrink capacity to fit" << endl; // No visible effect (capacity reduced internally)

    7. reserve(n): reserves space for at least n elements
    v.reserve(20);
    cout << "Reserved capacity: " << v.capacity() << endl; // >=20

    8. at(index): access with bounds checking
    cout << "Element at index 1: " << v.at(1) << endl; // 2

    9. operator[]: access without bounds check
    cout << "Element at index 2: " << v[2] << endl; // 3

    10. front(): first element
    cout << "Front element: " << v.front() << endl; // 1

    11. back(): last element
    cout << "Back element: " << v.back() << endl; // 3

    12. data(): pointer to underlying array
    cout << "First element using data(): " << *v.data() << endl; // 1

    13. assign(n, val): assigns n copies of val
    v.assign(5, 100);
    cout << "After assign: ";
    for (int x : v) cout << x << " "; cout << endl; // 100 100 100 100 100

    14. push_back(): add element at end
    v.push_back(200);
    cout << "After push_back: " << v.back() << endl; // 200

    15. pop_back(): remove last element
    v.pop_back();
    cout << "After pop_back, back: " << v.back() << endl; // 100

    16. insert(): insert element at specific position
    v.insert(v.begin() + 2, 300);
    cout << "After insert at pos 2: ";
    for (int x : v) cout << x << " "; cout << endl; // 100 100 300 100 100

    17. emplace(): construct element in place
    v.emplace(v.begin() + 1, 400);
    cout << "After emplace at pos 1: ";
    for (int x : v) cout << x << " "; cout << endl; // 100 400 100 300 100 100

    18. emplace_back(): construct at end
    v.emplace_back(500);
    cout << "After emplace_back: " << v.back() << endl; // 500

    19. erase(): remove element at position
    v.erase(v.begin() + 1);
    cout << "After erase at pos 1: ";
    for (int x : v) cout << x << " "; cout << endl; // 100 100 300 100 100 500

    20. clear(): remove all elements
    v.clear();
    cout << "After clear, size: " << v.size() << endl; // 0

    // Reset vector for next examples
    v = {1,2,3,4,5};

     21. swap(): exchange contents with another vector
    v.swap(v2);
    cout << "After swap, v: ";
    for (int x : v) cout << x << " "; cout << endl; // 10 20 30

    22. begin(): iterator to start
    cout << "First element with begin(): " << *v.begin() << endl; // 10

    23. end(): iterator to one past last element
    cout << "Last element with end-1: " << *(v.end() - 1) << endl; // 30

    24. rbegin(): reverse iterator to last element
    cout << "First element in reverse: " << *v.rbegin() << endl; // 30

    25. rend(): reverse iterator one before first element
    cout << "Last element in reverse: " << *(v.rend() - 1) << endl; // 10

    26. cbegin(): const iterator to start
    cout << "cbegin(): " << *v.cbegin() << endl; // 10

    27. cend(): const iterator to end
    cout << "cend()-1: " << *(v.cend()-1) << endl; // 30

    28. crbegin(): const reverse iterator to last element
    cout << "crbegin(): " << *v.crbegin() << endl; // 30

    29. crend(): const reverse iterator one before first element
    cout << "crend()-1: " << *(v.crend()-1) << endl; // 10

    30. copy constructor: initialize v3 as copy of v
    vector<int> v3(v);
    cout << "Copy constructed v3: ";
    for (int x : v3) cout << x << " "; cout << endl; // 10 20 30

    31. copy assignment: assign contents of v3 to v4
    vector<int> v4;
    v4 = v3;
    cout << "Copy assigned v4: ";
    for (int x : v4) cout << x << " "; cout << endl; // 10 20 30

    32. move constructor: move contents of v3 into v5
    vector<int> v5(move(v3));
    cout << "Move constructed v5: ";
    for (int x : v5) cout << x << " "; cout << endl; // 10 20 30

    33. move assignment: move contents of v4 into v6
    vector<int> v6;
    v6 = move(v4);
    cout << "Move assigned v6: ";
    for (int x : v6) cout << x << " "; cout << endl; // 10 20 30

    34. get_allocator(): returns allocator object for memory handling
    vector<int> v7;
    auto alloc = v7.get_allocator();
    int* arr = alloc.allocate(5);  // Allocate memory for 5 ints
    alloc.deallocate(arr, 5);      // Deallocate
    cout << "get_allocator() example executed" << endl;

    35. relational operators: compare vectors lexicographically
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,4};
    cout << "a == b? " << (a==b) << endl; // 0 (false)
    cout << "a < b? " << (a<b) << endl;   // 1 (true, since 3<4)

    36. std::swap non-member: swap contents of a and b
    swap(a, b);
    cout << "After std::swap, a: ";
    for (int x : a) cout << x << " "; cout << endl; // 1 2 4

    37. assign from iterators: assign range of another vector
    vector<int> v8;
    v8.assign(b.begin(), b.end());
    cout << "After assign from iterators: ";
    for (int x : v8) cout << x << " "; cout << endl; // 1 2 3

    return 0;
}

// find(first, last, value): Searches for the first occurrence of value in the range [first, last).
// Returns an iterator to the element if found, otherwise returns last (vec.end()).
// To use: #include <algorithm>
Example:
    auto it = find(vec.begin(), vec.end(), value);
    if(it != vec.end()) cout << "Found at index " << it - vec.begin();
    else cout << "Not found";


// count(first, last, value): Counts the number of occurrences of value
// in the range [first, last). Returns an integer count.
// To use: #include <algorithm>
Example:
    int cnt = count(vec.begin(), vec.end(), value);
    cout << "Value occurs " << cnt << " times";

sort(v.begin(), v.end()); // Sorts in ascending order
sort(v.rbegin(), v.rend()); // Sorts in descending order
