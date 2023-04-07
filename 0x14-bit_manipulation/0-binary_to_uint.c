#include "main.h"

/**
 * Convert a binary string to an unsigned integer.
 * @param binary_string The binary string to convert.
 * @return The converted integer value.
 */
unsigned int binary_to_uint(const char *binary_string)
{
    if (binary_string == NULL) {
        return 0;
    }

    unsigned int decimal_value = 0;
    for (int i = 0; binary_string[i] != '\0'; ++i) {
        if (binary_string[i] < '0' || binary_string[i] > '1') {
            return 0;
        }

        decimal_value = decimal_value * 2 + (binary_string[i] - '0');
    }

    return decimal_value;
}

