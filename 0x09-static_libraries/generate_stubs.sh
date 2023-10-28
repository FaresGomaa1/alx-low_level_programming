#!/bin/bash

declare -A functions
functions=(
    ["_putchar"]="char c"
    ["_islower"]="int c"
    ["_isalpha"]="int c"
    ["_abs"]="int n"
    ["_isupper"]="int c"
    ["_isdigit"]="int c"
    ["_strlen"]="char *s"
    ["_puts"]="char *s"
    ["_strcpy"]="char *dest, char *src"
    ["_atoi"]="char *s"
    ["_strcat"]="char *dest, char *src"
    ["_strncat"]="char *dest, char *src, int n"
    ["_strncpy"]="char *dest, char *src, int n"
    ["_strcmp"]="char *s1, char *s2"
    ["_memset"]="char *s, char b, unsigned int n"
    ["_memcpy"]="char *dest, char *src, unsigned int n"
    ["_strchr"]="char *s, char c"
    ["_strspn"]="char *s, char *accept"
    ["_strpbrk"]="char *s, char *accept"
    ["_strstr"]="char *haystack, char *needle"
)

for func in "${!functions[@]}"; do
    params="${functions[$func]}"
    if [[ $func == _puts ]]; then
        echo "#include \"main.h\"" > "${func}.c"
        echo "void $func($params) {" >> "${func}.c"
        echo "    while (*s) {" >> "${func}.c"
        echo "        _putchar(*s);" >> "${func}.c"
        echo "        s++;" >> "${func}.c"
        echo "    }" >> "${func}.c"
        echo "    _putchar('\\n');" >> "${func}.c"
        echo "}" >> "${func}.c"
    else
        echo "#include \"main.h\"" > "${func}.c"
        echo "int $func($params) {" >> "${func}.c"
	echo "    return (0);" >> "${func}.c"
        echo "}" >> "${func}.c"
    fi
done
