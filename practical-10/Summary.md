**Problem Faced:**

**Issues Faced While Solving Problem - 1:**

The main issue was handling collisions when a slot was already occupied. Linear probing checks the next slot and wraps around, while a limit of 10 attempts prevents an endless loop when the table is full.

```cpp
while (table[slot] != -1 && tries < 10) {
    slot = (slot + 1) % 10;
    tries++;
}
```

**Issues Faced While Solving Problem - 2:**

Multiple book codes can map to the same shelf, so each shelf stores a list of codes using a vector.

```cpp
shelf[code % 10].push_back(code);
```

**Issues Faced While Solving Problem - 3:**

Double hashing uses a second hash function to decide the jump size after a collision. The loop checks at most 10 slots so it cannot run indefinitely.

```cpp
int h1 = id % 10;
int h2 = 7 - (id % 7);
int slot = (h1 + j * h2) % 10;
```
