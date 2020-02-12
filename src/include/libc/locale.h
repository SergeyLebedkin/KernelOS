#ifndef LOCALE_H
#define LOCALE_H

// Formatting info for numeric values
struct lconv {
    char* decimal_point;     // Decimal-point separator used for non-monetary quantities.
    char* thousands_sep;     // Separators used to delimit groups of digits to the left of the decimal point for non-monetary quantities.
                             // Specifies the amount of digits that form each of the groups to be separated by thousands_sep separator for non-monetary quantities. This is a zero-terminated sequence of char values that may contain different grouping sizes for each successive group starting from the right, each number indicating the amount of digits for the group; the last number before the ending zero in this string is used for the remaining groups. For example, assuming thousand_sep is set to "," and the number to represent is one million (1000000):
                             // with grouping set to "\3", the number would be represented as: 1,000,000
                             // with grouping set to "\1\2\3", the number would be represented as: 1,000,00,0
                             // with grouping set to "\3\1", the number would be represented as: 1,0,0,0,000
    char* grouping;          // CHAR_MAX indicates that no further grouping is to be performed.
    char* int_curr_symbol;   // International currency symbol. This is formed by the three-letter ISO-4217 entry code for the currency, like "USD" for U.S.-Dollar or "GBP" for Pound Sterling, followed by the character used to separate this symbol from the monetary quantity
    char* currency_symbol;   // Local currency symbol, like "$".
    char* mon_decimal_point; // Decimal-point separator used for monetary quantities.
    char* mon_thousands_sep; // Separators used to delimit groups of digits to the left of the decimal point for monetary quantities.
    char* mon_grouping;      // Specifies the amount of digits that form each of the groups to be separated by mon_thousands_sep separator for monetary quantities. See grouping description above.
    char* positive_sign;     // Sign to be used for nonnegative (positive or zero) monetary quantities.
    char* negative_sign;     // Sign to be used for negative monetary quantities.
    char frac_digits;        // Amount of fractional digits to the right of the decimal point for monetary quantities in the local format.
    char p_cs_precedes;      // Whether the currency symbol should precede nonnegative (positive or zero) monetary quantities. If this value is 1, the currency symbol should precede; if it is 0, it should follow.
    char n_cs_precedes;      // Whether the currency symbol should precede negative monetary quantities. If this value is 1, the currency symbol should precede; if it is 0 it should follow.
    char p_sep_by_space;     // Whether a space should appear between the currency symbol and nonnegative (positive or zero) monetary quantities. If this value is 1, a space should appear; if it is 0 it should not.
    char n_sep_by_space;     // Whether a space should appear between the currency symbol and negative monetary quantities. If this value is 1, a space should appear; if it is 0 it should not.
                             // Position of the sign for nonnegative (positive or zero) monetary quantities:
                             // 0 : Currency symbol and quantity surrounded by parentheses.
                             // 1 : Sign before the quantity and currency symbol.
                             // 2 : Sign after the quantity and currency symbol.
                             // 3 : Sign right before currency symbol.
                             // 4 : Sign right after currency symbol.
    char p_sign_posn;        // CHAR_MAX : Unspecified.
    char n_sign_posn;        // Position of the sign for negative monetary quantities. See p_sign_posn above.
    char int_frac_digits;    // Same as frac_digits, but for the international format (instead of the local format).
    char int_p_cs_precedes;  // Same as p_cs_precedes, but for the international format.
    char int_n_cs_precedes;  // Same as n_cs_precedes, but for the international format.
    char int_p_sep_by_space; // Same as p_sep_by_space, but for the international format.
    char int_n_sep_by_space; // Same as n_sep_by_space, but for the international format.
    char int_p_sign_posn;    // Same as p_sign_posn, but for the international format.
    char int_n_sign_posn;    // Same as n_sign_posn, but for the international format.
};

// Portion of the locale affected. It is one of the following constant values defined as macros in <clocale>
#define LC_COLLATE  ((int)0x00000001) // Affects the behavior of strcoll and strxfrm.
#define LC_CTYPE    ((int)0x00000002) // Affects character handling functions (all functions of <cctype>, except isdigit and isxdigit), and the multibyte and wide character functions.
#define LC_MONETARY ((int)0x00000004) // Affects monetary formatting information returned by localeconv.
#define LC_NUMERIC  ((int)0x00000008) // Affects the decimal-point character in formatted input/output operations and string formatting functions, as well as non-monetary information returned by localeconv.
#define LC_TIME     ((int)0x00000010) // Affects the behavior of strftime.
#define LC_ALL      (LC_COLLATE | LC_CTYPE | LC_MONETARY | LC_NUMERIC | LC_TIME) // The entire locale.

// functions
char* setlocale(int category, const char* locale); // Set or retrieve locale (function)
struct lconv* localeconv(void); // Get locale formatting parameters for quantities (function)

#endif // LOCALE_H