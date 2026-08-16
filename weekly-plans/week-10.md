# Week 10 — AVL Trees + 2-3/2-3-4/Red-Black Trees

> **Abdul Bari: §17 (AVL Trees), §18 (Search Trees)** · **Bonus week — not in college syllabus**  
> LeetCode target: **10 problems** (8 core + 2 stretch)  
> This week is a differentiator — most students skip it. You won’t.

---

## 🎯 Target for This Week

By end of Week 10, you should be able to:
- Explain AVL tree balance factor and perform rotations (LL, LR, RL, RR) on paper
- Understand why AVL trees guarantee O(log n) operations
- Explain 2-3 trees and Red-Black tree properties at a conceptual level
- Solve "balanced BST" style problems on LeetCode

> **Note:** LeetCode has no direct AVL/RB-tree implementation problems. This week's LeetCode problems exercise the *properties* and *balancing invariants* these trees enforce — that's intentional.

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §17 AVL Trees

- [ ] **AVL Tree Introduction** — watch
- [ ] **AVL Tree Rotations — LL Rotation** — watch + trace on paper ⭐
- [ ] **AVL Tree Rotations — LR Rotation** — watch + trace on paper ⭐
- [ ] **AVL Tree Rotations — RR Rotation** — watch + trace on paper
- [ ] **AVL Tree Rotations — RL Rotation** — watch + trace on paper
- [ ] **AVL Tree Insert** — watch + re-code ⭐ (implementing rotations is the hard part)
- [ ] **AVL Tree Delete** — watch (concept-level — implementing fully is optional bonus)
- [ ] **Let's Code AVL Tree** — re-code insert with rotations from memory

### 🎬 Abdul Bari Videos — §18 Search Trees

- [ ] **2-3 Trees** — watch (concept-level, no re-code needed)
- [ ] **2-3-4 Trees** — watch (concept-level)
- [ ] **Red-Black Trees** — watch all videos ⭐ (properties + insertion concept)

> For §18, focus on understanding the *why* and the *properties* — full RB-tree implementation is not expected at this stage. Interviewers ask about properties, not full code.

---

## 📝 AVL Rotation Drill

Before writing code, trace these by hand in `notes/week10-avl-rotations.md`:

1. Insert 10, 20, 30 → triggers RR rotation → draw before/after
2. Insert 30, 20, 10 → triggers LL rotation → draw before/after
3. Insert 10, 30, 20 → triggers RL rotation → draw before/after
4. Insert 30, 10, 20 → triggers LR rotation → draw before/after

If you can do all 4 on paper, the code will follow.

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **110. Balanced Binary Tree** | 🟢 Easy | AVL balance-factor check — height difference ≤ 1 (§311) | 20 min | [LeetCode ↗](https://leetcode.com/problems/balanced-binary-tree/) |
| - [ ] | **108. Convert Sorted Array to BST** | 🟢 Easy | Height-balanced BST construction — AVL-like balance (§316) | 25 min | [LeetCode ↗](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) |
| - [ ] | **671. Second Minimum Node in a Binary Tree** | 🟢 Easy | Property-based tree traversal — analogous to 2-3 tree key access (§319) | 20 min | [LeetCode ↗](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/) |
| - [ ] | **1382. Balance a Binary Search Tree** | 🟡 Medium | Rebalancing BST — AVL restructuring concept (§317) | 35 min | [LeetCode ↗](https://leetcode.com/problems/balance-a-binary-search-tree/) |
| - [ ] | **96. Unique Binary Search Trees** | 🟡 Medium | Count unique BST structures — relates to 2-3 tree node splits (§319) | 30 min | [LeetCode ↗](https://leetcode.com/problems/unique-binary-search-trees/) |
| - [ ] | **235. Lowest Common Ancestor of a BST** | 🟡 Medium | BST structural navigation — rotation awareness (§312–316) | 30 min | [LeetCode ↗](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) |
| - [ ] | **236. Lowest Common Ancestor of a Binary Tree** | 🟡 Medium | General tree LCA — path tracking under rotations (§317) | 35 min | [LeetCode ↗](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) |
| - [ ] | **99. Recover Binary Search Tree** | 🔴 Hard | Restore BST invariant — analogous to AVL/RB rebalancing (§317–318) | 55 min | [LeetCode ↗](https://leetcode.com/problems/recover-binary-search-tree/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **95. Unique Binary Search Trees II** | 🟡 Medium | AVL-balanced BST shapes (Week 10) + recursion (Week 1) | 45 min | [LeetCode ↗](https://leetcode.com/problems/unique-binary-search-trees-ii/) |
| - [ ] | **315. Count of Smaller Numbers After Self** | 🔴 Hard | BST/AVL insertion to count inversions (Week 10) + sorting (Week 6) | 60 min | [LeetCode ↗](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → trace on paper → then code → then LeetCode

Mon:  §17 AVL Intro + 4 rotations — trace all 4 cases on paper FIRST
      Then LeetCode: 110 Balanced BT (Easy) + 108 Convert Sorted to BST (Easy)

Tue:  §17 AVL Insert — re-code with rotations ⭐
      Then LeetCode: 1382 Balance a BST (Medium) + 235 LCA of BST (Medium)

Wed:  ← REST DAY — rotations need overnight to consolidate

Thu:  §18 2-3 Trees + Red-Black Trees — concept watch, take notes
      Then LeetCode: 96 Unique BSTs (Medium) + 236 LCA of BT (Medium)

Fri:  LeetCode: 99 Recover BST (Hard — 55 min cap)
      671 Second Minimum Node (Easy — quick one)

Sat:  Stretch: 95 Unique BSTs II
      AVL rotation drill — all 4 from memory without notes

Sun:  Commit, LinkedIn post
      Preview Week 11 (Heap + Hashing — practical and fast)
```

---

## 🏗️ Folder Structure After Week 10

```
dsa-journey/
├── c-cpp/
│   └── week10-avl/
│       ├── avl_tree.cpp             ← insert with rotations
│       └── rb_tree_notes.md         ← properties + pseudocode (no full impl needed)
├── leetcode/
│   └── week10/
│       ├── 110_balanced_bt.cpp
│       ├── 108_sorted_arr_to_bst.cpp
│       ├── 1382_balance_bst.cpp
│       ├── 96_unique_bsts.cpp
│       ├── 235_lca_bst.cpp
│       ├── 236_lca_bt.cpp
│       └── 99_recover_bst.cpp
└── notes/
    ├── week10-notes.md
    └── week10-avl-rotations.md      ← your 4-case drill
```

---

## 💾 Git Commit Examples

```
Day 71: [AVL] 4 rotation types traced on paper + re-coded insert
Day 72: [AVL] AVL insert with all rotations — RL case was the tricky one
Day 71: [LC] 110 Balanced BT (Easy) + 108 Sorted to BST (Easy)
Day 72: [LC] 1382 Balance a BST (Medium) + 235 LCA of BST (Medium)
Day 74: [LC] 96 Unique BSTs + 236 LCA BT (Medium)
Day 75: [LC] 99 Recover BST (Hard) — Morris traversal approach is elegant
```

---

## ✅ Week 10 Success Checklist

- [ ] All 4 AVL rotations traced on paper and understood
- [ ] AVL insert with rotations re-coded
- [ ] 2-3 and Red-Black trees understood conceptually (can explain properties)
- [ ] All 8 core LeetCode problems attempted
- [ ] `notes/week10-avl-rotations.md` filled (4-case drill)
- [ ] Everything pushed

---

## 🌬️ Breathing Room

AVL rotations on paper before code is non-negotiable here. The code will not make sense if the visual understanding isn't there first. This is the one week where the "watch then code" order matters more than usual.

**99. Recover BST** is a hard problem but has a beautiful O(1)-space Morris traversal solution. Don't worry about finding the optimal approach — even the O(n) space approach with inorder traversal is completely acceptable.

---

## 📢 LinkedIn Post Template

> Week 10 of my DSA journey 🧵
>
> This week: AVL Trees + Red-Black Trees — the "why balance matters" week.
>
> One rotation diagram is worth a thousand lines of code. I traced all 4 rotation types on paper before touching the keyboard, and the implementation took half the time I expected.
>
> RB-trees: I understand the 5 properties and can explain insertions conceptually. Fully implementing it is a future project.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 9](week-9.md) · [Week 11 — Heap + Hashing →](week-11.md)*
