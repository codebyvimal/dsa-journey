# Week 4 — CS50X Memory + Linked List (Part 1)

> **Do CS50X Week 4 FIRST (half day), then start Abdul Bari §11–12 (Linked List)**  
> LeetCode problems span Weeks 4–5 combined · This is a **heavier week** — plan for it.

---

## 🎯 Target for This Week

By end of Week 4, you should be able to:
- Confidently use `malloc`, `free`, pointers-to-pointers in C (CS50X Week 4)
- Implement a singly linked list from scratch: insert (front/middle/end), delete, search, reverse
- Implement a doubly linked list and a circular linked list
- Understand why linked lists exist vs arrays (not just what they are)

---

## 📋 What to Do

### 📚 CS50X Week 4 — Memory (FIRST, Monday half-day)

> **Do this before starting Abdul Bari's Linked List** — CS50's pointer explanation will save you serious pain.

- [ ] Watch **CS50X Week 4 lecture** — focus on: pointers, hex addressing, `malloc/free`, deep vs shallow copy
  - Link: [CS50X Week 4](https://cs50.harvard.edu/x/2024/weeks/4/)
  - Estimated time: ~2 hrs (watch at 1.25×)
- [ ] Do **CS50X Week 4 pset: `filter-less`** (2D arrays + pointers — the best pointer drill in the whole course)
  - Link: [CS50X pset 4 — filter-less](https://cs50.harvard.edu/x/2024/psets/4/filter/less/)
  - File: `cs50x/week4-filter-less/`
  - This is the most valuable CS50 pset for DSA prep. Do not skip it.

---

### 🎬 Abdul Bari Videos

#### §11 — Linked Lists (Singly + Doubly + Circular)

- [ ] **Introduction to Linked List** — watch
- [ ] **Display, Count, Sum, Max in Linked List** — watch + re-code
- [ ] **Searching in Linked List** — watch + re-code
- [ ] **Insert in Linked List** (before first, after last, in position) — watch + re-code ⭐
- [ ] **Delete from Linked List** — watch + re-code ⭐
- [ ] **Reverse a Linked List** — watch + re-code ⭐
- [ ] **Circular Linked List** — watch + re-code
- [ ] **Doubly Linked List** (insert, delete, reverse) — watch + re-code ⭐

#### §12 — (continued in Week 5 if needed)

> If §11 runs long, it's fine to carry the last 2–3 videos into Week 5's first day. Don't rush insert/delete — they're the hardest part.

---

## 💻 LeetCode Problems (Week 4–5 combined)

> These problems span both Week 4 and Week 5. Start them during Week 4, finish stragglers in Week 5.

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **21. Merge Two Sorted Lists** | 🟢 Easy | Merging two sorted linked lists (§203–204) | 20 min | [LeetCode ↗](https://leetcode.com/problems/merge-two-sorted-lists/) |
| - [ ] | **141. Linked List Cycle** | 🟢 Easy | Floyd's loop detection (§205–206) | 25 min | [LeetCode ↗](https://leetcode.com/problems/linked-list-cycle/) |
| - [ ] | **20. Valid Parentheses** | 🟢 Easy | Stack-based parenthesis matching (§239–242) | 20 min | [LeetCode ↗](https://leetcode.com/problems/valid-parentheses/) |
| - [ ] | **232. Implement Queue using Stacks** | 🟢 Easy | Queue using two stacks (§266) | 25 min | [LeetCode ↗](https://leetcode.com/problems/implement-queue-using-stacks/) |
| - [ ] | **92. Reverse Linked List II** | 🟡 Medium | Reversing a sub-portion of a linked list (§198–201) | 35 min | [LeetCode ↗](https://leetcode.com/problems/reverse-linked-list-ii/) |
| - [ ] | **150. Evaluate Reverse Polish Notation** | 🟡 Medium | Postfix expression evaluation using stack (§250–252) | 30 min | [LeetCode ↗](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |
| - [ ] | **239. Sliding Window Maximum** | 🔴 Hard | Deque (double-ended queue) sliding window (§264) | 50 min | [LeetCode ↗](https://leetcode.com/problems/sliding-window-maximum/) |
| - [ ] | **25. Reverse Nodes in k-Group** | 🔴 Hard | Recursive reversal of linked list segments (§200–201) | 55 min | [LeetCode ↗](https://leetcode.com/problems/reverse-nodes-in-k-group/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **2. Add Two Numbers** | 🟡 Medium | Linked list traversal (Week 4) + polynomial addition (Week 3) | 35 min | [LeetCode ↗](https://leetcode.com/problems/add-two-numbers/) |
| - [ ] | **84. Largest Rectangle in Histogram** | 🔴 Hard | Monotonic stack (Weeks 4–5) + array operations (Week 2) | 55 min | [LeetCode ↗](https://leetcode.com/problems/largest-rectangle-in-histogram/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon (half day):  CS50X Week 4 lecture + filter-less pset
                 Pointer reinforcement before Linked Lists

Mon (afternoon): Abdul Bari — Linked List intro + display/count/sum
                 Then LeetCode: 21 Merge Two Sorted Lists + 141 Linked List Cycle

Tue:  Abdul Bari — Searching + Insert in Linked List ⭐ (take your time)
      Re-code → then LeetCode: 92 Reverse Linked List II

Wed:  ← REST DAY
      If behind: lightly review insert/delete on paper — don’t code

Thu:  Abdul Bari — Delete from Linked List + Reverse ⭐
      Re-code → then LeetCode: 20 Valid Parentheses

Fri:  Abdul Bari — Circular + Doubly Linked List
      Re-code → catch-up on any missed problems

Sat:  Re-code any §11 implementations missed
      LeetCode: 150 Evaluate Reverse Polish Notation

Sun:  Commit everything + notes
      LinkedIn post
      Preview Week 5 (Stack + Queue)
```

---

## 🏗️ Folder Structure After Week 4

```
dsa-journey/
├── c-cpp/
│   ├── week0–3/               ← already done
│   └── week4-linked-list/
│       ├── singly_ll.cpp      ← full singly linked list ADT
│       ├── doubly_ll.cpp
│       └── circular_ll.cpp
├── cs50x/
│   ├── week1-mario.c
│   ├── week2-readability.c
│   └── week4-filter-less/     ← CS50X pset 4
│       ├── filter.c
│       └── helpers.c
├── leetcode/
│   └── week4/
│       ├── 21_merge_two_sorted_lists.cpp
│       ├── 141_linked_list_cycle.cpp
│       ├── 92_reverse_linked_list_ii.cpp
│       └── 20_valid_parentheses.cpp
└── notes/
    └── week4-notes.md
```

---

## 💾 Git Commit Examples

```
Day 29: [CS50X] Week 4 filter-less pset — grayscale + sepia done
Day 29: [LL] Singly linked list — insert front/mid/end + delete re-coded
Day 31: [LL] Linked list reverse — took 2 attempts to get pointer reversal right
Day 32: [LL] Doubly linked list complete
Day 30: [LC] 21 Merge Two Sorted Lists (Easy) + 141 Cycle Detection (Easy)
Day 32: [LC] 92 Reverse Linked List II (Medium) — drew the pointer swap on paper first
```

---

## ✅ Week 4 Success Checklist

- [ ] CS50X Week 4 lecture watched
- [ ] CS50X filter-less pset done
- [ ] §11 Singly Linked List fully re-coded (insert/delete/reverse/search)
- [ ] §11 Doubly + Circular Linked List re-coded
- [ ] 21, 141, 92, 20 LeetCode problems done
- [ ] `notes/week4-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

Linked List insert and delete with correct pointer manipulation is where most people trip for the first time. Drawing the before/after pointer diagram on paper *before* you touch the keyboard is not optional — it's the technique. Budget extra time for this. It's okay if you carry one video into Week 5's first day.

---

## 📢 LinkedIn Post Template

> Week 4 of my DSA journey 🧵
>
> This week: Linked Lists — singly, doubly, circular.
>
> The one that actually made me think: [92. Reverse Linked List II] — getting the pointer rewiring right in the partial reverse took me drawing the diagram 3 times. But once you see it, you really see it.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 3](week-3.md) · [Week 5 — Stack + Queue →](week-5.md)*
