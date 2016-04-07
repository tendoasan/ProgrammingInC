#define MIN(a, b) (((a) < (b))?(a):(b))
#define MAX2(a, b) (((a) > (b))?(a):(b))
#define MAX3(a, b, c) (((MAX2(a, b) > (c))?MAX2(a, b):(c)))
#define SHIFT(v, n) (((n) > 0)?((v) << (n)):((v) >> -(n)))
#define IS_UPPER_CASE(x) (((x) >= 'A' && (x) <= 'Z')?(1):(0))
#define IS_LOWER_CASE(x) (((x) >= 'a' && (x) <= 'z')?(1):(0)) 
#define IS_ALPHABETIC(x) (((IS_UPPER_CASE(x) || IS_LOWER_CASE(x))?(1):(0)))
#define IS_DIGIT(x) (((x) >= '0' && (x) <= '9')?(1):(0))
#define IS_SPECIAL(x) ((IS_ALPHABETIC(x) || IS_DIGIT(x))?(0):(1))
#define ABSOLUTE_VALUE(x) (((x) >= 0)?(x):(-(x)))
