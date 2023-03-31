## Used By

This project is used by the following companies:

- Zidani
- Malal

## Description

This project contains a custom implementation of the `printf` function in C, named `_printf`. It allows printing formatted output to the console.

### FORMAT OF THE FORMAT STRING
The format string is a character string that starts and ends in its initial shift state, if any. It consists of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, which result in fetching zero or more subsequent arguments.

Each conversion specification begins with the character % and ends with a conversion specifier. Between them, there can be zero or more flags, an optional minimum field width, an optional precision, and an optional length modifier, in that order.

### CONVERSION SPECIFIERS
A conversion specifier is a character that indicates the type of conversion to be applied. The meaning of the conversion specifiers are as follows:
`d`, `i`      The int argument is converted to signed decimal notation.  The precision, if any, gives the minimum number of
              digits  that  must appear; if the converted value requires fewer digits, it is padded on the left with zeros.
              The default precision is 1.  When 0 is printed with an explicit precision 0, the output is empty.
              
 `c`          If no l modifier is present, the int argument is converted to an unsigned char, and the  resulting  character
              is  written.   If  an l modifier is present, the wint_t (wide character) argument is converted to a multibyte
              sequence by a call to the wcrtomb(3) function, with a conversion state starting in the initial state, and the
              resulting multibyte string is written.
              
 `s`         If  no  l modifier is present: the const char * argument is expected to be a pointer to an array of character
              type (pointer to a string).  Characters from the array are written up to (but not  including)  a  terminating
              null byte ('\0'); if a precision is specified, no more than the number specified are written.  If a precision
              is given, no null byte need be present; if the precision is not specified, or is greater than the size of the
              array, the array must contain a terminating null byte.
              
`%`           A '%' is written.  No argument is converted.  The complete conversion specification is '%%'.

### RETURN VALUE
Upon successful return, these functions return the number of characters printed (excluding the null byte used to end
       output to strings).

## EXAMPLE
![nom de l'image](https://samirzidani.000webhostapp.com/readme.png)
