# Week 8 — Binary Trees

> **Abdul Bari: §15 — Binary Trees**  
> LeetCode target: first half of the Week 8–9 block (5–6 problems this week)  
> Trees are the most interview-dense data structure — take your time here.

---

## 🎯 Target for This Week

By end of Week 8, you should be able to:
- Implement a binary tree from scratch: create, insert, all 4 traversals
- Compute height, count nodes, count leaf nodes recursively
- Implement level-order traversal using a queue
- Reconstruct a tree from preorder + inorder traversal
- Solve Easy tree problems in under 20 min on LeetCode

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §15 Binary Trees

- [ ] **Introduction to Binary Trees** — watch
- [ ] **Tree Terminology** — watch
- [ ] **Number of Binary Trees using N nodes** — watch (theory, useful for interviews)
- [ ] **Representation of Binary Trees** — watch
- [ ] **Linked Representation of Binary Trees** — watch + re-code skeleton
- [ ] **Creating a Binary Tree** — watch + re-code ⭐
- [ ] **Preorder Traversal** — watch + re-code
- [ ] **Inorder Traversal** — watch + re-code
- [ ] **Postorder Traversal** — watch + re-code
- [ ] **Level Order Traversal** — watch + re-code ⭐ (uses queue — relevant to BFS)
- [ ] **Height of a Binary Tree** — watch + re-code ⭐
- [ ] **Count Nodes** — watch + re-code
- [ ] **Count Leaf Nodes** — watch + re-code
- [ ] **Generating BT from Traversals** — watch + re-code ⭐ (preorder+inorder → tree)
- [ ] All **Let's Code** videos for the above — re-implement from memory

---

## 💻 LeetCode Problems (Week 8–9 block, first half)

> Full block is 10 problems across 2 weeks. Do 5–6 this week, finish in Week 9.

### Core Problems (do these this week)

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **144. Binary Tree Preorder Traversal** | 🟢 Easy | Preorder traversal — recursive and iterative (§288–292) | 20 min | [LeetCode ↗](https://leetcode.com/problems/binary-tree-preorder-traversal/) |
| - [ ] | **104. Maximum Depth of Binary Tree** | 🟢 Easy | Height of binary tree using recursion (§297–298) | 20 min | [LeetCode ↗](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |
| - [ ] | **102. Binary Tree Level Order Traversal** | 🟡 Medium | Level order traversal using queue (§293–294) | 30 min | [LeetCode ↗](https://leetcode.com/problems/binary-tree-level-order-traversal/) |
| - [ ] | **105. Construct Binary Tree from Preorder and Inorder** | 🟡 Medium | Generate tree from traversals (§295–296) | 40 min | [LeetCode ↗](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) |
| - [ ] | **124. Binary Tree Maximum Path Sum** | 🔴 Hard | Height + count + recursive return value design (§297–299) | 55 min | [LeetCode ↗](https://leetcode.com/problems/binary-tree-maximum-path-sum/) |

### Core Problems (carry into Week 9)

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **98. Validate Binary Search Tree** | 🟡 Medium | BST property check (§300–305) | 35 min | [LeetCode ↗](https://leetcode.com/problems/validate-binary-search-tree/) |
| - [ ] | **450. Delete Node in a BST** | 🟡 Medium | BST deletion — 3 cases (§306–307) | 40 min | [LeetCode ↗](https://leetcode.com/problems/delete-node-in-a-bst/) |
| - [ ] | **1008. Construct BST from Preorder Traversal** | 🟡 Medium | Generate BST from preorder (§308–309) | 35 min | [LeetCode ↗](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) |

### 🔗 Stretch Problems (attempt in Week 9 weekend)

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **230. Kth Smallest Element in a BST** | 🟡 Medium | BST inorder (Week 8–9) + sorting/search (Week 6) | 30 min | [LeetCode ↗](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) |
| - [ ] | **114. Flatten Binary Tree to Linked List** | 🟡 Medium | Binary tree traversal (Week 8) + linked list (Week 4) | 40 min | [LeetCode ↗](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §15 Intro + Representation + Creating a BT
      Re-code → then LeetCode: 144 Preorder Traversal (Easy) + 104 Max Depth (Easy)

Tue:  §15 Preorder + Inorder + Postorder traversals (all 3 — re-code each)
      Then LeetCode: 102 Level Order Traversal (Medium)

Wed:  ← REST DAY
      Optional light: draw a binary tree and trace all 4 traversals on paper

Thu:  §15 Level Order + Height + Count + Leaf Count
      Re-code → then LeetCode: 105 Construct BT from Pre+Inorder (Medium) ⭐

Fri:  §15 Generating BT from Traversals
      Re-code → then LeetCode: 124 Binary Tree Max Path Sum (Hard — commit 55 min)

Sat:  Re-solve 144 + 104 from memory (no looking at old code)
      Start on Week 9 carry-overs: 98 Validate BST

Sun:  Commit everything, notes, LinkedIn post
      3rd-weekend rule: re-solve 2 problems from Week 5 from memory
```

---

## 🏗️ Folder Structure After Week 8

```
dsa-journey/
├── c-cpp/
│   └── week8-binary-trees/
│       ├── binary_tree.cpp          ← full tree with all traversals
│       ├── height_count.cpp         ← height, count, leaf count
│       └── tree_from_traversal.cpp  ← preorder+inorder → tree
├── leetcode/
│   └── week8/
│       ├── 144_preorder_traversal.cpp
│       ├── 104_max_depth.cpp
│       ├── 102_level_order.cpp
│       ├── 105_construct_from_pre_in.cpp
│       └── 124_max_path_sum.cpp
└── notes/
    └── week8-notes.md
```

---

## 💾 Git Commit Examples

```
Day 57: [Trees] Binary tree + all traversals re-coded from memory
Day 58: [Trees] Level order traversal — using queue for BFS
Day 59: [Trees] Generating BT from pre+inorder — recursive split
Day 57: [LC] 144 Preorder (Easy) + 104 Max Depth (Easy)
Day 58: [LC] 102 Level Order (Medium) — BFS with queue, straightforward
Day 59: [LC] 105 Construct BT (Medium) — finding root in inorder by index
Day 60: [LC] 124 Max Path Sum (Hard) — return value trick was not obvious
```

---

## ✅ Week 8 Success Checklist

- [ ] §15 all videos watched and re-coded
- [ ] All 4 traversals (pre/in/post/level) implemented from memory without looking
- [ ] Tree height, count, leaf count implemented
- [ ] Preorder+inorder → tree reconstruction done
- [ ] 5 core LeetCode problems (Week 8 batch) done
- [ ] `notes/week8-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

Trees are where recursion becomes real. If Week 1 (Recursion) felt abstract, this week makes it concrete — every tree operation is just recursion applied to a structured data type.

**124. Binary Tree Maximum Path Sum** is deceptively hard. The trick (returning max single-branch height vs using both branches for the global max) is a classic recursive return-value design pattern. If you need 2 days to fully understand it, that's completely fine.

Take the rest day.

---

## 📢 LinkedIn Post Template

> Week 8 of my DSA journey 🧵
>
> This week: Binary Trees — all traversals, tree construction, height/count.
>
> The one that actually made me think: [105. Construct Binary Tree from Preorder and Inorder] — I had to trace 4 small examples on paper before the recursive logic became obvious. The key: root is always preorder[0], and its position in inorder tells you the left/right split.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 7](week-7.md) · [Week 9 — BST →](week-9.md)*
