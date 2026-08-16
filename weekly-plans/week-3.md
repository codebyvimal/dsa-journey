# Week 3 — Strings, Matrices, Sparse Matrix & Polynomial

> **Abdul Bari: §8 (Strings), §9 (Matrices), §10 (Sparse Matrix & Polynomial)**  
> **CS50X: Week 2 pset (readability)** · LeetCode target: **10 problems** (8 core + 2 stretch)

---

## 🎯 Target for This Week

By end of Week 3, you should be able to:
- Manipulate C-strings manually (reverse, palindrome, anagram, permutations)
- Work with 2D matrix operations in C (rotate, spiral, transpose)
- Understand sparse matrix representation and polynomial addition
- String-process problems confidently on LeetCode
- Do the CS50X Week 2 pset (readability) — it's just string processing in C

---

## 📋 What to Do

### 🎬 Abdul Bari Videos

#### §8 — Strings

- [ ] **Strings section** — all videos from §8 (approximately Videos 130–141)
  - Focus areas: finding duplicates in a string, anagram check, string reversal, permutations of a string
  - Re-code: `c-cpp/week3-strings/strings.cpp`

#### §9 — Matrices

- [ ] **Matrices section** — all videos from §9 (approximately Videos 142–158)
  - Focus areas: diagonal matrix, triangular matrix, Toeplitz matrix, sparse matrix (array representation)
  - Re-code: `c-cpp/week3-matrices/matrices.cpp`

#### §10 — Sparse Matrix & Polynomial

- [ ] **Sparse Matrix & Polynomial** — all videos from §10 (approximately Videos 159–170)
  - Focus areas: sparse matrix coordinate list representation, polynomial representation, addition of polynomials
  - Re-code: `c-cpp/week3-poly/polynomial.cpp`

> These sections are lighter than §5–7. You should be able to get through all three in 5 days without pressure.

---

## 📚 CS50X Week 2 Problem Set

- [ ] **readability.c** — reads text and computes Coleman-Liau index
  - Link: [CS50X pset 2 — readability](https://cs50.harvard.edu/x/2024/psets/2/readability/)
  - This is a string processing drill in C — directly relevant to §8
  - File: `cs50x/week2-readability.c`
  - Skip `caesar` and `substitution` unless you want extra reps

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **242. Valid Anagram** | 🟢 Easy | Checking anagram using frequency array (§140) | 15 min | [LeetCode ↗](https://leetcode.com/problems/valid-anagram/) |
| - [ ] | **125. Valid Palindrome** | 🟢 Easy | String reversal + comparison (§136–137) | 20 min | [LeetCode ↗](https://leetcode.com/problems/valid-palindrome/) |
| - [ ] | **387. First Unique Character in a String** | 🟢 Easy | Finding duplicates in a string (§138–139) | 20 min | [LeetCode ↗](https://leetcode.com/problems/first-unique-character-in-a-string/) |
| - [ ] | **48. Rotate Image** | 🟡 Medium | In-place matrix transformation (§143–155) | 35 min | [LeetCode ↗](https://leetcode.com/problems/rotate-image/) |
| - [ ] | **54. Spiral Matrix** | 🟡 Medium | Row-major / column-major matrix traversal (§88–90) | 35 min | [LeetCode ↗](https://leetcode.com/problems/spiral-matrix/) |
| - [ ] | **73. Set Matrix Zeroes** | 🟡 Medium | In-place sparse-style matrix manipulation (§159–162) | 30 min | [LeetCode ↗](https://leetcode.com/problems/set-matrix-zeroes/) |
| - [ ] | **43. Multiply Strings** | 🟡 Medium | Polynomial multiplication via digit arrays (§167–170) | 40 min | [LeetCode ↗](https://leetcode.com/problems/multiply-strings/) |
| - [ ] | **76. Minimum Window Substring** | 🔴 Hard | Sliding window over character frequency (§131–141) | 55 min | [LeetCode ↗](https://leetcode.com/problems/minimum-window-substring/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **46. Permutations** | 🟡 Medium | String permutation (§141) + recursion/backtracking (Week 1) | 40 min | [LeetCode ↗](https://leetcode.com/problems/permutations/) |
| - [ ] | **240. Search a 2D Matrix II** | 🟡 Medium | Matrix traversal (Week 3) + binary search (Week 2) | 35 min | [LeetCode ↗](https://leetcode.com/problems/search-a-2d-matrix-ii/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §8 Strings — all videos + re-code
      Then LeetCode: 242 Valid Anagram + 125 Valid Palindrome + 387 First Unique Char

Tue:  §9 Matrices — all videos + re-code
      Then LeetCode: 48 Rotate Image + 54 Spiral Matrix

Wed:  ← REST DAY — no new material
      Optional: do readability CS50X pset (it’s light, only ~1 hr)

Thu:  §10 Sparse Matrix & Polynomial — all videos + re-code
      Then LeetCode: 73 Set Matrix Zeroes + 43 Multiply Strings

Fri:  LeetCode: 76 Minimum Window Substring ⭐ (hard — time-box at 55 min)
      CS50X readability pset (if not done Wednesday)

Sat:  Stretch problems (46 Permutations, 240 Search 2D Matrix)
      Re-code: one matrix operation + one string operation from memory

Sun:  Commit everything, LinkedIn post
      Preview Week 4 (CS50X Memory is next — heavy but important)
```


---

## 🏗️ Folder Structure After Week 3

```
dsa-journey/
├── c-cpp/
│   ├── week0-bridge/
│   ├── week1-recursion/
│   ├── week2-arrays/
│   └── week3-strings-matrices/
│       ├── strings.cpp
│       ├── matrices.cpp
│       └── polynomial.cpp
├── cs50x/
│   ├── week1-mario.c
│   └── week2-readability.c
├── leetcode/
│   ├── week1/
│   ├── week2/
│   └── week3/
│       ├── 242_valid_anagram.cpp
│       ├── 125_valid_palindrome.cpp
│       ├── 387_first_unique_char.cpp
│       ├── 48_rotate_image.cpp
│       ├── 54_spiral_matrix.cpp
│       ├── 73_set_matrix_zeroes.cpp
│       ├── 43_multiply_strings.cpp
│       └── 76_minimum_window.cpp
└── notes/
    └── week3-notes.md
```

---

## 💾 Git Commit Examples

```
Day 22: [Strings] §8 string operations re-coded — anagram, palindrome, permutation
Day 23: [Matrices] §9 diagonal + triangular matrix representation
Day 25: [Poly] §10 sparse matrix + polynomial addition
Day 22: [LC] 242 Valid Anagram + 125 Palindrome + 387 First Unique (Easy trio)
Day 24: [LC] 48 Rotate Image (Medium) + 54 Spiral Matrix (Medium)
Day 25: [LC] 43 Multiply Strings (Medium)
Day 26: [LC] 76 Minimum Window Substring (Hard) — needed to look at hint at 40 min
Day 28: [CS50X] Week 2 readability completed
```

---

## ✅ Week 3 Success Checklist

- [ ] §8, §9, §10 all watched and re-coded from memory
- [ ] CS50X Week 2 readability pset done
- [ ] All 8 core LeetCode problems attempted
- [ ] At least 1 stretch problem done
- [ ] `notes/week3-notes.md` written
- [ ] Everything pushed to GitHub

---

## 🌬️ Breathing Room

**76. Minimum Window Substring** is one of the classic hard sliding-window problems. Don't feel bad if you can't solve it clean on the first try — it's genuinely non-trivial. The goal is to understand the sliding window pattern, not to have a perfect solution.

Week 4 is heavier (Linked Lists), so end this week in a stable state — no carry-overs into Monday if possible.

---

## 📢 LinkedIn Post Template

> Week 3 of my DSA journey 🧵
>
> This week: Strings, Matrices, Sparse Matrix & Polynomial — 10 problems.
>
> The one that actually made me think: [76. Minimum Window Substring] — the sliding window idea only clicked when I drew the window expanding and contracting on paper. Video alone wasn't enough.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 2](week-2.md) · [Week 4 — CS50X Memory + Linked List →](week-4.md)*
