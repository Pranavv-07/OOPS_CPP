//string is a inbuilt data type in cpp 
//string is used as a character in c but in cpp it is treated as a inbuilt function
//It is included in cpp header file as #include<string>
//intitialisation 
string s;

// --- Declaration ---
1. string str;                        // Declares an empty string
2. string str2 = "Hello";             // Initializes with "Hello"
3. string str3(str2);                 // Copy constructor: str3 = "Hello"
4. string str4 = str2 + " World";     // Concatenation using + operator

// --- Capacity ---
5. str.size();                        // Returns number of characters in the string
6. str.length();                      // Same as size()
7. str.empty();                       // Returns true if string is empty
8. str.resize(n);                     // Resizes string to n characters
9. str.reserve(n);                    // Reserves capacity of at least n characters
10. str.shrink_to_fit();              // Reduces capacity to fit current size

// --- Modifiers ---
11. str.clear();                      // Clears all characters (becomes empty)
12. str.append(" World");             // Appends another string at the end
13. str.push_back('!');               // Appends a single character at the end
14. str.pop_back();                   // Removes the last character
15. str.insert(5, " C++");            // Inserts " C++" at position 5
16. str.erase(5, 3);                  // Erases 3 characters starting at index 5
17. str.replace(0, 5, "Hi");          // Replaces first 5 characters with "Hi"
18. str.swap(str2);                   // Swaps contents with another string

// --- Element Access ---
19. str.at(0);                        // Returns character at index 0 (with bounds checking)
20. str[1];                           // Returns character at index 1 (no bounds check)
21. str.front();                      // Returns first character
22. str.back();                       // Returns last character

// --- String Operations ---
23. str.substr(0, 5);                 // Returns substring from index 0 of length 5
24. str.find("World");                // Finds first occurrence of "World"
25. str.rfind("l");                   // Finds last occurrence of 'l'
26. str.find_first_of("aeiou");       // Finds first occurrence of any vowel
27. str.find_last_of("aeiou");        // Finds last occurrence of any vowel
28. str.compare(str2);                // Compares two strings (0 if equal, <0 if smaller, >0 if greater)

// --- Iterators ---
29. str.begin();                      // Iterator to first character
30. str.end();                        // Iterator one past last character
31. str.rbegin();                     // Reverse iterator to last character
32. str.rend();                       // Reverse iterator one before first

// --- Conversion ---
33. str.c_str();                      // Returns C-style null-terminated char array
34. str.data();                       // Returns pointer to internal character array


#include <iostream>
#include <string>
#include <cctype>   // For toupper, tolower, isdigit, isalpha
#include <algorithm>// For sort, reverse, transform
using namespace std;

int main() {
    string str = "Hello";
    string str2 = "World";

    1. length() / size(): returns number of characters
    cout << "Length of str: " << str.length() << endl; // 5
    cout << "Size of str: " << str.size() << endl;     // 5

    2. empty(): check if string is empty
    cout << "Is str empty? " << str.empty() << endl;   // 0 (false, because "Hello" is not empty)

    3. clear(): remove all characters
    str2.clear(); // str2 becomes ""
    cout << "str2 after clear: '" << str2 << "'" << endl; // ''

    // Reset str2
    str2 = "World";

    4. append(): add another string at end
    str.append(" " + str2); // "Hello World"
    cout << "After append: " << str << endl;

    5. + operator: concatenate
    string combined = str + "!!!"; // "Hello World!!!"
    cout << "Concatenation using + : " << combined << endl;

     6. push_back(char): add single character
    str.push_back('!'); // "Hello World!"
    cout << "After push_back: " << str << endl;

    7. pop_back(): remove last character
    str.pop_back(); // back to "Hello World"
    cout << "After pop_back: " << str << endl;

    8. front(): get first character
    cout << "First char: " << str.front() << endl; // 'H'

    9. back(): get last character
    cout << "Last char: " << str.back() << endl;   // 'd'

    10. at(index): safe way to access a char
    cout << "Character at index 1: " << str.at(1) << endl; // 'e'

    11. substr(pos, len): extract substring
    cout << "Substring from 6 of length 5: " << str.substr(6, 5) << endl; // "World"

    12. insert(pos, str): insert another string
    str.insert(5, ","); // "Hello, World"
    cout << "After insert: " << str << endl;

    13. erase(pos, len): remove substring
    str.erase(5, 1); // removes "," → "Hello World"
    cout << "After erase: " << str << endl;

    14. replace(pos, len, str): replace part with another
    str.replace(6, 5, "C++"); // "Hello C++"
    cout << "After replace: " << str << endl;

    15. find(str): index of first occurrence
    cout << "Index of 'C++': " << str.find("C++") << endl; // 6

    16. rfind(str): index of last occurrence
    cout << "Last index of 'l': " << str.rfind("l") << endl; // 3

    17. compare(str): compare two strings lexicographically
    string a = "apple", b = "banana";
    cout << "Compare apple vs banana: " << a.compare(b) << endl; // <0 (apple < banana)

    18. swap(str2): exchange contents
    string s1 = "first", s2 = "second";
    s1.swap(s2); // s1="second", s2="first"
    cout << "After swap: s1=" << s1 << ", s2=" << s2 << endl;

    19. resize(n): change length
    str.resize(5); // keep only first 5 chars → "Hello"
    cout << "After resize: " << str << endl;

    20. reserve(n): pre-allocate capacity (not visible in output)
    str.reserve(100);
    cout << "Reserved capacity (no visible change, internal optimization)" << endl;

    21. shrink_to_fit(): reduce capacity to size
    str.shrink_to_fit();
    cout << "Shrink capacity to fit (no visible change)" << endl;

    22. c_str(): return const char* (C-style string)
    const char* cstr = str.c_str(); // "Hello"
    cout << "C-style string: " << cstr << endl;

    23. data(): similar to c_str()
    cout << "Data pointer: " << str.data() << endl; // prints "Hello"

    24. copy(): copy part of string into char array
    char buffer[6];
    str.copy(buffer, 5, 0); // copies "Hello"
    buffer[5] = '\0';
    cout << "Copied into char array: " << buffer << endl;

     25. begin() / end(): iterators
    cout << "Iterating using begin/end: ";
    for (auto it = str.begin(); it != str.end(); ++it)
        cout << *it; // prints Hello
    cout << endl;

    26. rbegin() / rend(): reverse iterators
    cout << "Iterating in reverse: ";
    for (auto it = str.rbegin(); it != str.rend(); ++it)
        cout << *it; // prints olleH
    cout << endl;

    27. getline(): read full line including spaces
    string line;
    cout << "Enter a line: ";
    getline(cin, line); // user input
    cout << "You entered: " << line << endl;

    28. stoi(), stol(), stoll(): convert string → integer
    string numStr = "12345";
    int num = stoi(numStr); // 12345
    cout << "stoi result: " << num << endl;

    29. to_string(): convert number → string
    string numToStr = to_string(6789); // "6789"
    cout << "to_string result: " << numToStr << endl;

    30. toupper / tolower: character-level transformation not for strings
    char ch = 'a';
    cout << "toupper('a'): " << (char)toupper(ch) << endl;   // 'A'
    cout << "tolower('A'): " << (char)tolower('A') << endl; // 'a'

    31. transform(): apply operation to each character
    string up = str; // "Hello"
    transform(up.begin(), up.end(), up.begin(), ::toupper); // "HELLO"
    cout << "After transform (toupper): " << up << endl;

    32. sort(): sort characters in string
    string sortStr = "dbca";
    sort(sortStr.begin(), sortStr.end()); // "abcd"
    cout << "Sorted string: " << sortStr << endl;

    33. reverse(): reverse string order
    reverse(sortStr.begin(), sortStr.end()); // "dcba"
    cout << "Reversed string: " << sortStr << endl;

    34. isdigit / isalpha: check character type
    char c1 = '9', c2 = 'a';
    cout << "Is '9' digit? " << isdigit(c1) << endl;  // 1 (true)
    cout << "Is 'a' alpha? " << isalpha(c2) << endl;  // 1 (true)

    return 0;
}


sorting of a number in string format

sort(nums.begin(), nums.end(), [](string &a, string &b) {
            if (a.size() != b.size()) return a.size() < b.size();
            return a < b;
        });
