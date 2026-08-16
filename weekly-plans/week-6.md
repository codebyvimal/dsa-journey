# Week 6 — Sorting + Linear/Binary Search

> **Abdul Bari: §20 (Sorting) + §7 Search revisit**  
> LeetCode target: **9 problems** (7 core + 2 stretch)  
> **Lighter week after the Linked List block — use the breathing room**

---

## 🎯 Target for This Week

By end of Week 6, you should be able to:
- Implement bubble, insertion, selection, merge, quick, count, radix sort from memory
- Explain the time/space complexity of each sorting algorithm (this will be asked in interviews)
- Apply binary search cleanly including edge cases (lower/upper bound, rotated array)
- Understand when to use which sort (interviewer favorite question)

---

## 📋 What to Do

### 🎬 Abdul Bari Videos

#### §20 — Sorting

- [ ] **Bubble Sort** — watch + re-code · note best/worst/avg complexity
- [ ] **Insertion Sort** — watch + re-code
- [ ] **Selection Sort** — watch + re-code
- [ ] **Quick Sort** — watch + re-code ⭐ (partition is the key — understand it cold)
- [ ] **Merge Sort** — watch + re-code ⭐ (key for interviews)
- [ ] **Count Sort / Counting Sort** — watch + re-code
- [ ] **Radix Sort** — watch + re-code
- [ ] **Shell Sort** — watch (concept-level, lighter re-code)
- [ ] **Let's Code** videos for each — especially Quick Sort and Merge Sort

> Shell sort and Bucket sort are lower priority for interviews — understand the concept, don't spend extra time here.

#### §7 Search Revisit

- [ ] Re-read your Week 2 binary search re-code
- [ ] No new Abdul Bari videos needed here — §7 was already done in Week 2

---

## 📝 Sorting Cheat Sheet (fill this in as you watch)

Create `notes/week6-sort-complexity.md` with this table:

| Algorithm | Best | Average | Worst | Space | Stable? |
|-----------|------|---------|-------|-------|---------|
| Bubble | | | | | |
| Insertion | | | | | |
| Selection | | | | | |
| Merge | | | | | |
| Quick | | | | | |
| Count | | | | | |
| Radix | | | | | |
| Shell | | | | | |

Interviewers ask this. Know it.

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **35. Search Insert Position** | 🟢 Easy | Binary search — lower bound (§103–106) | 15 min | [LeetCode ↗](https://leetcode.com/problems/search-insert-position/) |
| - [ ] | **912. Sort an Array** | 🟡 Medium | Implement merge sort or quick sort from scratch (§354–358) | 30 min | [LeetCode ↗](https://leetcode.com/problems/sort-an-array/) |
| - [ ] | **75. Sort Colors** | 🟡 Medium | 3-way partition — Dutch National Flag (§349–353) | 25 min | [LeetCode ↗](https://leetcode.com/problems/sort-colors/) |
| - [ ] | **274. H-Index** | 🟡 Medium | Count sort / bin sort application (§359–361) | 30 min | [LeetCode ↗](https://leetcode.com/problems/h-index/) |
| - [ ] | **33. Search in Rotated Sorted Array** | 🟡 Medium | Binary search with partitioning (§103–106) | 35 min | [LeetCode ↗](https://leetcode.com/problems/search-in-rotated-sorted-array/) |
| - [ ] | **164. Maximum Gap** | 🔴 Hard | Radix sort / bucket sort for linear-time gap (§361–362) | 50 min | [LeetCode ↗](https://leetcode.com/problems/maximum-gap/) |
| - [ ] | **315. Count of Smaller Numbers After Self** | 🔴 Hard | Merge sort with index tracking (§354–358) | 55 min | [LeetCode ↗](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **56. Merge Intervals** | 🟡 Medium | Sort (Week 6) + array merge (Week 2) | 35 min | [LeetCode ↗](https://leetcode.com/problems/merge-intervals/) |
| - [ ] | **493. Reverse Pairs** | 🔴 Hard | Merge sort (Week 6) + recursion tracing (Week 1) | 55 min | [LeetCode ↗](https://leetcode.com/problems/reverse-pairs/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §20 Bubble + Insertion + Selection → re-code all three
      Then LeetCode: 35 Search Insert Position + 75 Sort Colors

Tue:  §20 Quick Sort ⭐ — watch twice if needed, re-code partition separately
      Then LeetCode: 912 Sort an Array (implement merge or quick sort)

Wed:  ← REST DAY — genuinely rest. You just finished the LL+Stack+Queue block.

Thu:  §20 Merge Sort ⭐ — watch + re-code
      Then LeetCode: 33 Search in Rotated Sorted Array + 274 H-Index

Fri:  §20 Count Sort + Radix Sort + Shell Sort
      Fill in sorting complexity cheat sheet
      Then LeetCode: 164 Maximum Gap

Sat:  LeetCode: 315 Count of Smaller Numbers (hard — commit to 55 min)
      Stretch: 56 Merge Intervals

Sun:  Stretch: 493 Reverse Pairs (if energy)
      Commit everything, LinkedIn post
      3rd-week-review rule check: re-solve 2 problems from Week 3 without looking
```

---

## 🏗️ Folder Structure After Week 6

```
dsa-journey/
├── c-cpp/
│   └── week6-sorting/
│       ├── bubble_sort.cpp
│       ├── insertion_sort.cpp
│       ├── selection_sort.cpp
│       ├── quick_sort.cpp      ← partition function separate
│       ├── merge_sort.cpp
│       ├── count_sort.cpp
│       └── radix_sort.cpp
├── leetcode/
│   └── week6/
│       ├── 35_search_insert.cpp
│       ├── 912_sort_array.cpp
│       ├── 75_sort_colors.cpp
│       ├── 274_h_index.cpp
│       ├── 33_rotated_search.cpp
│       ├── 164_maximum_gap.cpp
│       └── 315_count_smaller.cpp
└── notes/
    ├── week6-notes.md
    └── week6-sort-complexity.md   ← your cheat sheet
```

---

## 💾 Git Commit Examples

```
Day 43: [Sort] Bubble + Insertion + Selection re-coded
Day 44: [Sort] Quick sort — partition function took 2 attempts
Day 46: [Sort] Merge sort + count sort + radix sort
Day 43: [LC] 35 Search Insert (Easy) + 75 Sort Colors (Medium)
Day 45: [LC] 912 Sort an Array — implemented merge sort from scratch
Day 47: [LC] 315 Count Smaller Numbers (Hard) — merge sort with index trick
Day 48: Update sort complexity cheat sheet + progress tracker
```

---

## ✅ Week 6 Success Checklist

- [ ] All sorting algorithms re-coded from memory
- [ ] Sorting complexity cheat sheet filled in
- [ ] All 7 core LeetCode problems attempted
- [ ] At least 1 stretch problem done
- [ ] 3rd-weekend re-solve check done (if applicable)
- [ ] `notes/week6-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

This is genuinely the lightest week since Week 1. The §20 content is conceptually familiar — you've probably heard of bubble/merge sort before. Use this week to catch your breath after the Linked List + Stack + Queue grind.

**164. Maximum Gap** and **315. Count of Smaller Numbers** are harder than they look. If you hit 50 min and haven't cracked 315, look at the hint and keep going — don't spiral.

---

## 📢 LinkedIn Post Template

> Week 6 of my DSA journey 🧵
>
> This week: Sorting — coded all 7 from scratch, no `std::sort` allowed.
>
> The one that actually made me think: The quick sort partition. Getting the pivot placement right and handling duplicates correctly took longer than the sort itself.
>
> Sort complexity cheat sheet: [screenshot or table]
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 5](week-5.md) · [Week 7 — Recurrence + D&C →](week-7.md)*
