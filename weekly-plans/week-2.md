# Week 2 — Array Representations + Array ADT

> **Abdul Bari: §6 (Videos 79–95) + §7 (Videos 96–135)** · **CS50X: Week 2 lecture (reference)**  
> LeetCode target: **10 problems** (8 core + 2 stretch)

---

## 🎯 Target for This Week

By end of Week 2, you should be able to:
- Explain row-major vs column-major storage and why it matters
- Implement an Array ADT class in C++ (insert, delete, search, reverse, shift, merge)
- Apply binary search cleanly from memory
- Solve Easy array problems in under 20 min, Medium in under 35 min

---

## 📋 What to Do

### 🎬 Abdul Bari Videos

#### §6 — Array Representations (1 hr 54 min)

- [ ] **79. Introduction to Array** — 4 min
- [ ] **80. Declarations of Array** — 6 min
- [ ] **81. Demo — Array Declaration** — 5 min
- [ ] **82. Static vs Dynamic Array** — 9 min
- [ ] **83. How to increase size of Array** — 4 min
- [ ] **84. 2D Array** — 7 min
- [ ] **85. Array Representation by Compiler** — 11 min
- [ ] **86. Row Major Formula for 2D Arrays** — 9 min
- [ ] **87. Column Major Formula for 2D Arrays** — 9 min
- [ ] **88. Formulas for nD Arrays** — 14 min (go lightly, concept-level)
- [ ] **89. Array representation in C++** — 14 min (important)

#### §7 — Array ADT (varies)

- [ ] **96–103. Array ADT: Insert, Delete, Linear Search, Binary Search** — watch all
- [ ] **Let's Code** videos paired with each operation — re-code each one
- [ ] **110–111. Reverse + Shift** — watch + re-code
- [ ] **114–116. Merge sorted arrays + Set operations** — watch + re-code
- [ ] **121–126. Finding missing/duplicate elements** — watch + re-code (these directly map to LeetCode)

> §6 is mostly theory (~1 hr). §7 is where the coding happens — spend more time here.

---

## 📚 CS50X Week 2 (reference only)

- [ ] Skim **CS50X Week 2 lecture** (Arrays section) — focus on: byte arrays, strings as `char[]`, NUL terminator
  - Link: [CS50X Week 2](https://cs50.harvard.edu/x/2024/weeks/2/)
  - **Don't do the pset yet** — Week 2 pset (readability) comes in Week 3
  - Estimated: 20–30 min skim

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **1. Two Sum** | 🟢 Easy | Linear search / hashing to find pair (§127) | 15 min | [LeetCode ↗](https://leetcode.com/problems/two-sum/) |
| - [ ] | **26. Remove Duplicates from Sorted Array** | 🟢 Easy | In-place delete maintaining sorted order (§98–99) | 20 min | [LeetCode ↗](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |
| - [ ] | **88. Merge Sorted Array** | 🟢 Easy | Merging two sorted arrays in-place (§114–115) | 25 min | [LeetCode ↗](https://leetcode.com/problems/merge-sorted-array/) |
| - [ ] | **349. Intersection of Two Arrays** | 🟢 Easy | Set intersection on arrays (§116) | 20 min | [LeetCode ↗](https://leetcode.com/problems/intersection-of-two-arrays/) |
| - [ ] | **704. Binary Search** | 🟢 Easy | Binary search on sorted array (§103–106) | 15 min | [LeetCode ↗](https://leetcode.com/problems/binary-search/) |
| - [ ] | **189. Rotate Array** | 🟡 Medium | Array shift / reverse operations (§110–111) | 25 min | [LeetCode ↗](https://leetcode.com/problems/rotate-array/) |
| - [ ] | **287. Find the Duplicate Number** | 🟡 Medium | Finding duplicates in array — hashing method (§124–126) | 35 min | [LeetCode ↗](https://leetcode.com/problems/find-the-duplicate-number/) |
| - [ ] | **41. First Missing Positive** | 🔴 Hard | Finding missing element(s) in array (§121–123) | 50 min | [LeetCode ↗](https://leetcode.com/problems/first-missing-positive/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **169. Majority Element** | 🟢 Easy | Array ADT max/scan + divide-and-conquer thinking (Week 1) | 25 min | [LeetCode ↗](https://leetcode.com/problems/majority-element/) |
| - [ ] | **153. Find Minimum in Rotated Sorted Array** | 🟡 Medium | Binary search (Week 2) + recursive D&C (Week 1) | 35 min | [LeetCode ↗](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §6 Videos 79-89 (Array representations — theory heavy, get it done)
      Re-code → then LeetCode: 704 Binary Search + 26 Remove Duplicates

Tue:  §7 Videos — ADT insert/delete/search + Let’s Code
      Re-code → then LeetCode: 1 Two Sum + 88 Merge Sorted Array

Wed:  ← REST DAY — no new material

Thu:  §7 Videos — reverse, shift, merge, set operations
      Re-code → then LeetCode: 349 Intersection + 189 Rotate Array
      CS50X Week 2 lecture skim (20–30 min)

Fri:  §7 Videos — missing/duplicate elements (§121–126) ⭐
      Re-code → then LeetCode: 287 Find Duplicate + 41 First Missing Positive

Sat:  Stretch problems (169, 153)
      Re-code 2 of this week’s video implementations from memory

Sun:  Catch-up / review
      Commit everything, LinkedIn post
```

---

## 🏗️ Folder Structure After Week 2

```
dsa-journey/
├── c-cpp/
│   ├── week0-bridge/
│   ├── week1-recursion/
│   └── week2-arrays/
│       ├── array_adt.cpp      ← full ADT class from §7
│       └── array_repr.c       ← 2D array row/col major
├── cs50x/
│   └── week1-mario.c
├── leetcode/
│   ├── week1/
│   └── week2/
│       ├── 1_two_sum.cpp
│       ├── 26_remove_duplicates.cpp
│       ├── 88_merge_sorted.cpp
│       ├── 349_intersection.cpp
│       ├── 704_binary_search.cpp
│       ├── 189_rotate_array.cpp
│       ├── 287_find_duplicate.cpp
│       └── 41_first_missing_positive.cpp
└── notes/
    └── week2-notes.md
```

---

## 💾 Git Commit Examples

```
Day 15: [Arrays] §6 array representation re-coded — row major formula
Day 16: [Arrays] Array ADT class — insert/delete/search
Day 18: [Arrays] Merge + set operations from Abdul Bari §7
Day 15: [LC] 704 Binary Search (Easy) + 26 Remove Duplicates (Easy)
Day 17: [LC] 1 Two Sum (Easy) + 88 Merge Sorted Array (Easy)
Day 19: [LC] 287 Find Duplicate (Medium) + 41 First Missing Positive (Hard)
Day 21: Update progress tracker
```

---

## ✅ Week 2 Success Checklist

- [ ] §6 array representation theory done — can explain row vs column major
- [ ] §7 Array ADT fully re-coded from memory as a C++ class
- [ ] All 8 core LeetCode problems attempted
- [ ] At least 1 stretch problem done
- [ ] `notes/week2-notes.md` written
- [ ] Everything pushed to GitHub

---

## 🌬️ Breathing Room

**41. First Missing Positive** is genuinely hard for this stage. If you spend the full 50 min and still can't get it — that's okay. Look at the approach, understand it, and re-implement it tomorrow before moving on. This is not a sign you're falling behind.

Wednesday is still your rest day. Guard it.

---

## 📢 LinkedIn Post Template

> Week 2 of my DSA journey 🧵
>
> This week: Array Representations + Array ADT — 10 problems solved.
>
> The one that actually made me think: [41. First Missing Positive] — the constraint "in O(n) time and O(1) space" forces a really clever use of the array itself as a hash table. Took me the full 50 minutes.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 1](week-1.md) · [Week 3 — Strings & Matrices →](week-3.md)*
