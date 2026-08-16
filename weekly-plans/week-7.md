# Week 7 — Recurrence Relations, Asymptotic Notation + Divide & Conquer

> **Abdul Bari: §23 (Recurrence), §24 (Asymptotic Notations), §25 (D&C)**  
> LeetCode: **9 problems** (7 core + 2 stretch)  
> This week ties complexity analysis to everything you’ve coded so far.

---

## 🎯 Target for This Week

By end of Week 7, you should be able to:
- Solve recurrence relations using substitution and Master Theorem
- State Big-O, Omega, Theta definitions and apply them to any algorithm you've coded
- Implement binary search, merge sort, and quickselect as explicit D&C algorithms
- Analyze why T(n) = 2T(n/2) + n gives O(n log n)

---

## 📋 What to Do

### 🎬 Abdul Bari Videos

#### §23 — Recurrence Relations

- [ ] **Recurrence Relation** — watch all videos in this section
  - Focus: substitution method, recurrence tree, Master Theorem
  - Re-write: solve the recurrences for bubble sort, merge sort, binary search, Tower of Hanoi on paper

#### §24 — Asymptotic Notations

- [ ] **Big-O, Omega, Theta** — watch all videos
  - Focus: formal definitions + comparing functions
  - Re-write: classify each algorithm from Weeks 1–6 by its complexity notation

#### §25 — Divide and Conquer

- [ ] **Binary Search (D&C framing)** — watch + re-code
- [ ] **Merge Sort (D&C analysis)** — watch (you already coded it — focus on the recurrence now)
- [ ] **Strassen's Matrix Multiplication** — watch (concept-level, no need to fully implement)
- [ ] Any other D&C videos in §25 — watch + take notes

---

## 📝 Complexity Review Exercise

Create `notes/week7-complexity-review.md` and fill in for **every algorithm from Weeks 1–6**:

| Algorithm | Recurrence | Best | Avg | Worst | Notes |
|-----------|-----------|------|-----|-------|-------|
| Fibonacci (naive) | T(n) = T(n-1)+T(n-2) | | | O(2^n) | |
| Binary Search | T(n) = T(n/2)+1 | | | O(log n) | |
| Merge Sort | T(n) = 2T(n/2)+n | | | O(n log n) | |
| Quick Sort | | | | | |
| Tower of Hanoi | | | | | |
| (add all others) | | | | | |

This exercise is worth more than 2 extra LeetCode problems.

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **374. Guess Number Higher or Lower** | 🟢 Easy | Binary search as D&C — T(n)=T(n/2)+1 (§387) | 15 min | [LeetCode ↗](https://leetcode.com/problems/guess-number-higher-or-lower/) |
| - [ ] | **240. Search a 2D Matrix II** | 🟡 Medium | D&C search — analyse recurrence (§401–402) | 30 min | [LeetCode ↗](https://leetcode.com/problems/search-a-2d-matrix-ii/) |
| - [ ] | **148. Sort List** | 🟡 Medium | Merge sort on linked list — T(n)=2T(n/2)+n (§390) | 40 min | [LeetCode ↗](https://leetcode.com/problems/sort-list/) |
| - [ ] | **215. Kth Largest Element in an Array** | 🟡 Medium | Quickselect — D&C partition (§349–353) | 35 min | [LeetCode ↗](https://leetcode.com/problems/kth-largest-element-in-an-array/) |
| - [ ] | **395. Longest Substring with At Least K Repeating** | 🟡 Medium | D&C split on invalid chars (§401) | 35 min | [LeetCode ↗](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/) |
| - [ ] | **932. Beautiful Array** | 🟡 Medium | D&C construction — applying D&C paradigm (§401) | 45 min | [LeetCode ↗](https://leetcode.com/problems/beautiful-array/) |
| - [ ] | **23. Merge k Sorted Lists** | 🔴 Hard | K-way merge — T(n)=2T(n/2)+kn (§404) | 55 min | [LeetCode ↗](https://leetcode.com/problems/merge-k-sorted-lists/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **4. Median of Two Sorted Arrays** | 🔴 Hard | D&C binary search (Week 7) + merge sorted arrays (Week 2) | 60 min | [LeetCode ↗](https://leetcode.com/problems/median-of-two-sorted-arrays/) |
| - [ ] | **327. Count of Range Sum** | 🔴 Hard | D&C merge sort (Week 7) + array prefix sums (Week 2) | 60 min | [LeetCode ↗](https://leetcode.com/problems/count-of-range-sum/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §23 Recurrence Relations — all videos + solve examples on paper
      Then LeetCode: 374 Guess Number + 240 Search 2D Matrix

Tue:  §24 Asymptotic Notations — all videos + complexity review exercise
      Then LeetCode: 215 Kth Largest + 148 Sort List (linked list merge sort)

Wed:  ← REST DAY

Thu:  §25 Divide and Conquer — binary search D&C framing + analysis
      Then LeetCode: 395 Longest Substring + 932 Beautiful Array

Fri:  §25 D&C remaining — Strassen’s concept
      Then LeetCode: 23 Merge k Sorted Lists (hard — 55 min cap)

Sat:  Complexity review exercise — fill the full table
      Stretch: 4 Median of Two Sorted Arrays (classic hard — take your time)

Sun:  Commit, LinkedIn post
```

---

## 🏗️ Folder Structure After Week 7

```
dsa-journey/
├── c-cpp/
│   └── week7-dnc/
│       ├── binary_search_dnc.cpp
│       └── recurrence_examples.md  ← handwritten scans or typed proofs
├── leetcode/
│   └── week7/
│       ├── 374_guess_number.cpp
│       ├── 240_search_2d_matrix.cpp
│       ├── 148_sort_list.cpp
│       ├── 215_kth_largest.cpp
│       ├── 395_longest_substring_k.cpp
│       ├── 932_beautiful_array.cpp
│       └── 23_merge_k_sorted.cpp
└── notes/
    ├── week7-notes.md
    └── week7-complexity-review.md   ← the big table
```

---

## 💾 Git Commit Examples

```
Day 50: [D&C] Recurrence relations examples — Master Theorem derivations
Day 51: [D&C] Binary search reframed as D&C + complexity proof
Day 50: [LC] 374 Guess Number (Easy) + 240 Search 2D Matrix (Medium)
Day 52: [LC] 215 Kth Largest (Medium) — quickselect partition
Day 53: [LC] 23 Merge k Sorted Lists (Hard) — divide the list in halves recursively
Day 55: Complexity review table — all Week 1–6 algorithms classified
```

---

## ✅ Week 7 Success Checklist

- [ ] §23, §24, §25 all watched
- [ ] Complexity review table filled for all Week 1–6 algorithms
- [ ] All 7 core LeetCode problems attempted
- [ ] At least 1 stretch problem attempted
- [ ] `notes/week7-complexity-review.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

The complexity review exercise feels like extra work but is one of the highest-ROI things you'll do all semester. Interviewers regularly ask "what's the complexity of your solution?" — having answered it for every algorithm you've coded makes the answer automatic.

**4. Median of Two Sorted Arrays** is a genuinely hard problem that trips even experienced programmers. The naive O(n+m) approach will pass — but the optimal O(log(min(m,n))) binary search approach is the one that impresses interviewers. Attempt the naive first, then try to optimize.

---

## 📢 LinkedIn Post Template

> Week 7 of my DSA journey 🧵
>
> This week: Recurrence Relations + Divide & Conquer — complexity analysis for everything I've coded so far.
>
> The biggest insight: T(n) = 2T(n/2) + n deriving to O(n log n) via the Master Theorem. Once you see *why* merge sort is faster than insertion sort at the math level, you stop second-guessing which to pick.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 6](week-6.md) · [Week 8 — Binary Trees →](week-8.md)*
