// Write down macro definitions for the following:
// 1. To test whether a character entered is a small case letter or
// not.
// 2. To test whether a character entered is a upper case letter or
// not.
// 3. To test whether a character is an alphabet or not. Make
// use of the macros you defined in (1) and (2) above.
// 4. To obtain the bigger of two numbers.

#define IS_LOWER_CASE(c) ((c >= 'a' && c <= 'z') ? 1 : 0)
#define IS_UPPER_CASE(c) ((c >= 'A' && c <= 'Z') ? 1 : 0)
#define IS_ALPHABET(c) (IS_LOWER_CASE(c) || IS_UPPER_CASE(c))
#define MAX(x, y) ((x > y) ? x : y)