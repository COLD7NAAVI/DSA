# Number Theory

Number Theory is the branch of mathematics that deals with the properties and relationships of integers.

It forms the mathematical foundation for many DSA problems involving:

- Prime Numbers
- Factors & Multiples
- GCD / HCF
- LCM
- Divisors
- Modular Arithmetic
- Sieve of Eratosthenes
- Fast Exponentiation

---

# Least Common Multiple (LCM)

## Definition

The Least Common Multiple (LCM) of two integers is the smallest positive integer that is divisible by both numbers.

Example:

LCM(4, 6) = 12

because

12 ÷ 4 = 3

12 ÷ 6 = 2

and there is no smaller positive common multiple.

---

## Method 1 : Using Prime Factorization

Prime factorize both numbers.

Example:

4 = 2²

6 = 2 × 3

Choose every prime factor with its **highest power** appearing in either number.

LCM = 2² × 3

= 4 × 3

= 12

---

## Method 2 : Using Multiples

List the multiples.

Multiples of 4:

4, 8, 12, 16, 20, ...

Multiples of 6:

6, 12, 18, 24, ...

The first common multiple is

12

Therefore,

LCM(4,6) = 12

---

## Properties

LCM(a, b) ≥ max(a, b)

LCM(a, b) = LCM(b, a)

LCM(a, a) = a

LCM(a, 1) = a

LCM(a, 0) = 0

---

## Relationship with GCD

One of the most important identities in Number Theory is

LCM(a, b) × GCD(a, b) = a × b

Therefore,

LCM(a, b) = (a × b) / GCD(a, b)

This is the most efficient way to compute LCM after finding the GCD using Euclid's Algorithm.

---

## Time Complexity

Using prime factorization:
Depends on factorization algorithm.

Using Euclidean Algorithm:

O(log(min(a, b)))

---

## Space Complexity

O(1)