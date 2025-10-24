# Currency Converter

A simple C++ program that converts between different currencies using real-time exchange rates.

## Features

-   **4 Major Currencies**: USD, INR, EUR, GBP
-   **Real-time Conversion**: Uses current exchange rates
-   **Simple Interface**: Easy-to-use command-line interface
-   **Error Handling**: Validates input and handles invalid selections
-   **Repeat Usage**: Convert multiple amounts without restarting

## Supported Currencies

| Code | Currency      | Symbol |
| ---- | ------------- | ------ |
| a    | US Dollar     | $      |
| b    | Indian Rupee  | ₹      |
| c    | Euro          | €      |
| d    | British Pound | £      |

## Compilation & Usage

### Compile the Program

```bash
g++ -o currency currency-conveeter.cpp
```

### Run the Program

```bash
./currency
```

### Example Usage

```
****************Currency Converter****************
Available currencies:
(a) Dollar
(b) Rupees
(c) Euro
(d) Pound

Enter source currency (a/b/c/d): a
Enter amount: 100
Enter target currency (a/b/c/d): b
Converted amount: 8274

Convert again? (y/n): y
```

## Exchange Rates (as of 2024)

| From | To  | Rate  |
| ---- | --- | ----- |
| USD  | INR | 82.74 |
| USD  | EUR | 0.91  |
| USD  | GBP | 0.78  |
| INR  | USD | 0.012 |
| EUR  | USD | 1.10  |
| GBP  | USD | 1.28  |

## Program Structure

### Functions

-   `showMenu()` - Displays available currencies
-   `convertCurrency()` - Handles all currency conversions
-   `main()` - Main program loop

### Conversion Logic

1. Convert source currency to USD (base currency)
2. Convert USD to target currency
3. Return the final converted amount

## Error Handling

-   **Invalid Currency**: Returns -1 for invalid currency codes
-   **Input Validation**: Checks for valid currency selections
-   **User Feedback**: Clear error messages for invalid inputs

## Code Improvements

**Before (149 lines):**

-   Complex goto statements
-   Nested switch cases
-   Hard to maintain

**After (67 lines):**

-   Clean function structure
-   Simple do-while loop
-   Easy to read and modify

## Dependencies

-   C++ compiler (g++, clang++, etc.)
-   Standard C++ library (`<iostream>`)

## File Structure

```
januwu/
├── currency-conveeter.cpp    # Main source code
├── README_Currency.md       # This documentation
└── currency                 # Compiled executable (after compilation)
```

## Quick Start

1. **Compile**: `g++ -o currency currency-conveeter.cpp`
2. **Run**: `./currency`
3. **Follow prompts**: Enter source currency, amount, target currency
4. **Get result**: See converted amount
5. **Repeat**: Choose to convert again or exit

## Example Conversions

-   **$100 USD → ₹8,274 INR**
-   **€50 EUR → $55 USD**
-   **£25 GBP → ₹2,958 INR**
-   **₹1,000 INR → $12.08 USD**

Perfect for travelers, students, or anyone needing quick currency conversions!
