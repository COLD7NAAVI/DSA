# Time Complexity & Big-O

## Definition

Big-O notation describes how the running time of an algorithm grows as the input size (`n`) becomes very large.

> Big-O focuses on the **growth pattern**, not the exact running time.

---

# Important Rules

- Running time grows proportionally with `n`.
- Ignore constants.
- Focus on growth as `n → ∞`.
- Time Complexity ≠ Actual Running Time.

---
    
# Common Time Complexities
----------------------------------------------
| Pattern                       | Complexity |
|-------------------------------|------------|
| Single operation              | O(1)       |
| One loop                      | O(n)       |
| Two consecutive loops         | O(n)       |
| Nested loops                  | O(n²)      |
| Double / Half every iteration | O(log n)   |
| Loop + inner halving loop     | O(n log n) |
----------------------------------------------


# Recognition Rules

## O(1)

- Single statement
- Direct access

---

## O(n)

- One loop
- Increment/decrement by 1

Example:

```cpp
for(int i=0;i<n;i++)
```

---

## O(log n)

- Value doubles each iteration

```cpp
i *= 2
```

or

```cpp
i /= 2
```

Example:

```
1
2
4
8
16
32
...
```

---

## O(n²)

Nested loops.

```cpp
for(...)
{
    for(...)
    {

    }
}
```

---

## O(n log n)

One linear loop.

Inside it:

A logarithmic loop.

---

# Golden Rules

- Ignore constants.

Example:

```
2n

↓

O(n)
```

- Nested loops multiply.

```
O(n)

×

O(n)

=

O(n²)
```

- Consecutive loops add.

```
O(n)

+

O(n)

=

O(2n)

↓

O(n)
```

---

# Time Complexity vs Running Time

Two algorithms can both be O(n).

One may be slightly faster.

Big-O measures **how running time grows**, not milliseconds.

---

# Interview Tips

When you see:

```
i *= 2
```

or

```
i /= 2
```

Immediately think:

```
O(log n)
```

When you see nested loops:

Think:

```
Multiply
```

When you see consecutive loops:

Think:

```
Add

↓

Ignore constants
```

---

# Summary

- O(1)
- O(log n)
- O(n)
- O(n log n)
- O(n²)

These are the most common complexities in beginner DSA.