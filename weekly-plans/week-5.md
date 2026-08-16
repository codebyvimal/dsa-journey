# Week 5 — Stack + Queue (+ Linked List catch-up)

> **Abdul Bari: §13 (Stack), §14 (Queue)**  
> LeetCode: finish remaining Week 4–5 problems + this week’s problems  
> This week finishes the Week 4–5 LeetCode block

---

## 🎯 Target for This Week

By end of Week 5, you should be able to:
- Implement Stack using arrays and linked list, and understand infix-to-postfix conversion
- Implement Queue (circular, deque, priority queue concept) using arrays and linked list
- Solve stack/queue LeetCode problems confidently
- Have all Week 4–5 LeetCode problems ticked off

---

## 📋 What to Do

### 🎬 Abdul Bari Videos

#### §13 — Stack

- [ ] **Introduction to Stack** — watch
- [ ] **Stack using Array** — watch + re-code
- [ ] **Stack using Linked List** — watch + re-code
- [ ] **Infix to Postfix Conversion using Stack** — watch + re-code ⭐
- [ ] **Evaluation of Postfix Expression** — watch + re-code ⭐
- [ ] **Let's Code** videos for each — re-code from memory

#### §14 — Queue

- [ ] **Introduction to Queue** — watch
- [ ] **Queue using Array** — watch + re-code
- [ ] **Queue using Linked List** — watch + re-code
- [ ] **Circular Queue** — watch + re-code ⭐
- [ ] **DEQue (Double Ended Queue)** — watch + re-code
- [ ] **Priority Queue** — watch (concept-level, no need to fully implement)
- [ ] **Let's Code** videos for each

#### CS50X Week 5 (reference only)

- [ ] Skim **CS50X Week 5 lecture** (Data Structures section) — 20–30 min, it overlaps with §13–14 and §15–16 preview
  - Link: [CS50X Week 5](https://cs50.harvard.edu/x/2024/weeks/5/)
  - **Skip the pset** (Week 5 CS50X pset duplicates what Abdul Bari covers better)

---

## 💻 LeetCode Problems (finish Week 4–5 block)

> If you finished all of these in Week 4, use this week to do the stretch problems and re-solve 2–3 from memory.

### Core Problems (carry-over from Week 4 if any remain)

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **21. Merge Two Sorted Lists** | 🟢 Easy | Merging two sorted linked lists | 20 min | [LeetCode ↗](https://leetcode.com/problems/merge-two-sorted-lists/) |
| - [ ] | **141. Linked List Cycle** | 🟢 Easy | Floyd's loop detection | 25 min | [LeetCode ↗](https://leetcode.com/problems/linked-list-cycle/) |
| - [ ] | **20. Valid Parentheses** | 🟢 Easy | Stack-based parenthesis matching (§239–242) | 20 min | [LeetCode ↗](https://leetcode.com/problems/valid-parentheses/) |
| - [ ] | **232. Implement Queue using Stacks** | 🟢 Easy | Queue using two stacks (§266) | 25 min | [LeetCode ↗](https://leetcode.com/problems/implement-queue-using-stacks/) |
| - [ ] | **92. Reverse Linked List II** | 🟡 Medium | Reversing sub-portion of linked list | 35 min | [LeetCode ↗](https://leetcode.com/problems/reverse-linked-list-ii/) |
| - [ ] | **150. Evaluate Reverse Polish Notation** | 🟡 Medium | Postfix expression evaluation (§250–252) | 30 min | [LeetCode ↗](https://leetcode.com/problems/evaluate-reverse-polish-notation/) |
| - [ ] | **239. Sliding Window Maximum** | 🔴 Hard | Deque sliding window (§264) | 50 min | [LeetCode ↗](https://leetcode.com/problems/sliding-window-maximum/) |
| - [ ] | **25. Reverse Nodes in k-Group** | 🔴 Hard | Recursive reversal of linked list segments | 55 min | [LeetCode ↗](https://leetcode.com/problems/reverse-nodes-in-k-group/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **2. Add Two Numbers** | 🟡 Medium | Linked list traversal + polynomial addition (Week 3) | 35 min | [LeetCode ↗](https://leetcode.com/problems/add-two-numbers/) |
| - [ ] | **84. Largest Rectangle in Histogram** | 🔴 Hard | Monotonic stack + array operations (Week 2) | 55 min | [LeetCode ↗](https://leetcode.com/problems/largest-rectangle-in-histogram/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §13 Stack — all videos + re-code (array + LL implementations)
      Then LeetCode: 232 Implement Queue using Stacks + 150 Evaluate RPN

Tue:  §13 Stack — Infix to Postfix + Postfix Evaluation ⭐
      Re-code → then LeetCode: 239 Sliding Window Maximum (hard — time-box 50 min)

Wed:  ← REST DAY
      If behind: review Stack infix→postfix on paper only

Thu:  §14 Queue — intro + array + LL + circular queue
      Re-code → then LeetCode: 25 Reverse Nodes in k-Group (hard — 55 min cap)

Fri:  §14 Queue — DEQue + Priority Queue
      Finish any carry-over problems from Week 4
      CS50X Week 5 skim (20–30 min)

Sat:  Stretch problems (2 Add Two Numbers, 84 Histogram)
      Every 3rd weekend rule: if this is Week 5 and you want to apply it — re-solve 2 problems from Week 2 from memory

Sun:  Commit everything, notes
      LinkedIn post
      Preview Week 6 (Sorting — lighter week, some relief)
```

---

## 🏗️ Folder Structure After Week 5

```
dsa-journey/
├── c-cpp/
│   ├── week0–4/               ← already done
│   └── week5-stack-queue/
│       ├── stack_array.cpp
│       ├── stack_ll.cpp
│       ├── infix_to_postfix.cpp
│       ├── postfix_eval.cpp
│       ├── queue_array.cpp
│       ├── queue_ll.cpp
│       └── circular_queue.cpp
├── leetcode/
│   └── week4-5/
│       ├── 20_valid_parentheses.cpp
│       ├── 232_queue_using_stacks.cpp
│       ├── 150_evaluate_rpn.cpp
│       ├── 239_sliding_window_max.cpp
│       └── 25_reverse_k_group.cpp
└── notes/
    └── week5-notes.md
```

---

## 💾 Git Commit Examples

```
Day 36: [Stack] Stack using array + LL — infix to postfix re-coded
Day 37: [Stack] Postfix evaluation — understood the order of operations trap
Day 39: [Queue] Circular queue — front/rear wrap-around logic
Day 36: [LC] 232 Queue using Stacks (Easy) + 150 Evaluate RPN (Medium)
Day 38: [LC] 239 Sliding Window Max (Hard) — deque pattern finally clicked
Day 40: [LC] 25 Reverse k-Group (Hard) — genuinely hard, revisiting tomorrow
```

---

## ✅ Week 5 Success Checklist

- [ ] §13 Stack fully re-coded (array + LL + infix-postfix + postfix eval)
- [ ] §14 Queue fully re-coded (array + LL + circular + deque)
- [ ] All 8 core LeetCode problems (Week 4–5 block) done
- [ ] At least 1 stretch problem done
- [ ] `notes/week5-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

You're now 5 weeks in. Week 6 (Sorting) is lighter than what you just did — it's a palette cleanser. If this week runs a bit long, carry the stretch problems into Week 6's buffer day. The hard problems (239, 25) can wait — don't let them eat your rest day.

**239. Sliding Window Maximum** and **84. Largest Rectangle in Histogram** are genuinely hard for this stage. Understand the approach, implement it, and move on. You'll see similar patterns again in Week 11 (Heap) and Week 13–14 (DP).

---

## 📢 LinkedIn Post Template

> Week 5 of my DSA journey 🧵
>
> This week: Stack + Queue — infix-to-postfix, circular queues, sliding window.
>
> The one that actually made me think: [239. Sliding Window Maximum] — using a deque to maintain a decreasing monotonic window was not intuitive. Drew the deque state at each step, and it finally clicked.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 4](week-4.md) · [Week 6 — Sorting + Search →](week-6.md)*
