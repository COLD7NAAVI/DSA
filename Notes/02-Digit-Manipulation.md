# Digit Manipulation

## Definition

Digit manipulation is the process of extracting, removing, counting, or rebuilding the digits of an integer using mathematical operations.

---

# Core Operations

## 1. Extract Last Digit

```cpp
digit = n % 10;
```

Example:

```
12345 % 10 = 5
```

---

## 2. Remove Last Digit

```cpp
n = n / 10;
```

Example:

```
12345

↓

1234
```

> Integer division automatically removes the decimal part.

---

## 3. Build a Number

```cpp
newNumber = newNumber * 10 + digit;
```

Example:

```
Initially

newNumber = 0

digit = 5

↓

0 × 10 + 5

↓

5
```

Next digit:

```
5 × 10 + 4

↓

54
```

---

# Standard Digit Processing Pattern

```cpp
while(n > 0)
{
    int digit = n % 10;

    // Process digit

    n = n / 10;
}
```

---

# Common Applications

- Reverse Number
- Palindrome Number
- Count Digits
- Sum of Digits
- Product of Digits
- Armstrong Number
- Happy Number
- Digit DP (Advanced)

---

# Time Complexity

If a number has **d digits**, the loop executes **d** times.

Since

```
d = log10(n) + 1
```

Time Complexity:

```
O(log10 n)
```

---

# Space Complexity

Only a constant number of variables are used.

Space Complexity:

```
O(1)
```

---

# Important Rules

## Rule 1

To get the last digit:

```cpp
digit = n % 10;
```

---

## Rule 2

To remove the last digit:

```cpp
n = n / 10;
```

---

## Rule 3

To reverse a number:

```cpp
rev = rev * 10 + digit;
```

---

## Rule 4

When processing digits, use:

```cpp
while(n > 0)
```

instead of checking

```cpp
n % 10
```

---

# Data Type Limits

## int

Typical size:

```
4 bytes (32 bits)
```

Range:

```
-2,147,483,648

to

2,147,483,647
```

---

## long long

Typical size:

```
8 bytes (64 bits)
```

Range:

```
-9,223,372,036,854,775,808

to

9,223,372,036,854,775,807
```

---

# Interview Notes

- Avoid converting numbers to strings unless the problem allows or requires it.
- Prefer mathematical digit extraction using `%` and `/`.
- Do not modify the original input if it is needed later; store it in another variable.
- Always consider integer overflow for very large inputs.

---

# Summary

Digit manipulation is based on three fundamental operations:

- Extract (`% 10`)
- Remove (`/ 10`)
- Build (`rev = rev * 10 + digit`)

Mastering these patterns helps solve many number-based DSA problems efficiently.
