# Week 9 — Binary Search Trees (BST)

> **Abdul Bari: §16 — Binary Search Trees**  
> LeetCode: finish Week 8–9 block remaining problems + stretch  
> BST is the most-asked tree topic in interviews.

---

## 🎯 Target for This Week

By end of Week 9, you should be able to:
- Implement BST from scratch: insert, search, delete (all 3 cases), find min/max
- Generate a BST from preorder traversal
- Explain why BST delete is the hardest operation and what the 3 cases are
- Solve BST problems on LeetCode without looking at hints

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §16 BST

- [ ] **BST Introduction** — watch
- [ ] **BST Insert** — watch + re-code ⭐
- [ ] **BST Search** — watch + re-code
- [ ] **BST Delete — Case 1 (leaf node)** — watch + re-code
- [ ] **BST Delete — Case 2 (one child)** — watch + re-code
- [ ] **BST Delete — Case 3 (two children)** — watch + re-code ⭐ (hardest case)
- [ ] **Generating BST from Preorder** — watch + re-code ⭐
- [ ] **Height and Count in BST** — watch (you already know this from Week 8)
- [ ] All **Let's Code** videos — re-code from memory, not side-by-side

---

## 💻 LeetCode Problems (Week 8–9 block, second half)

### Core Problems (carry-over from Week 8)

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **98. Validate Binary Search Tree** | 🟡 Medium | BST property check — search/insert logic (§300–305) | 35 min | [LeetCode ↗](https://leetcode.com/problems/validate-binary-search-tree/) |
| - [ ] | **450. Delete Node in a BST** | 🟡 Medium | BST deletion with three cases (§306–307) | 40 min | [LeetCode ↗](https://leetcode.com/problems/delete-node-in-a-bst/) |
| - [ ] | **1008. Construct BST from Preorder Traversal** | 🟡 Medium | Generate BST from preorder (§308–309) | 35 min | [LeetCode ↗](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **230. Kth Smallest Element in a BST** | 🟡 Medium | BST inorder (Week 8–9) + sorting/search (Week 6) | 30 min | [LeetCode ↗](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) |
| - [ ] | **114. Flatten Binary Tree to Linked List** | 🟡 Medium | Binary tree traversal (Week 8) + linked list (Week 4) | 40 min | [LeetCode ↗](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §16 BST Introduction + Insert + Search — re-code
      Then LeetCode: 98 Validate BST (Medium) — do right after watching Insert/Search

Tue:  §16 BST Delete — all 3 cases ⭐ (spend time here)
      Re-code → then LeetCode: 450 Delete Node in BST (Medium)

Wed:  ← REST DAY
      Optional: trace a BST delete on paper for a node with 2 children — practice the inorder successor logic

Thu:  §16 Generating BST from Preorder + Height/Count
      Re-code → then LeetCode: 1008 Construct BST from Preorder (Medium)

Fri:  Week 8–9 LeetCode review pass — re-solve any you found hard
      Stretch: 230 Kth Smallest in BST

Sat:  Stretch: 114 Flatten Binary Tree to Linked List
      3rd-weekend rule: re-solve 2 problems from Weeks 6–7 without your old code

Sun:  Commit everything, LinkedIn post
      Preview Week 10 (AVL Trees — prepare mentally, it’s heavier)
```

---

## 🏗️ Folder Structure After Week 9

```
dsa-journey/
├── c-cpp/
│   ├── week8-binary-trees/
│   └── week9-bst/
│       ├── bst.cpp                  ← full BST with insert/search/delete
│       └── bst_from_preorder.cpp
├── leetcode/
│   └── week9/
│       ├── 98_validate_bst.cpp
│       ├── 450_delete_bst_node.cpp
│       └── 1008_construct_bst_preorder.cpp
└── notes/
    └── week9-notes.md
```

---

## 💾 Git Commit Examples

```
Day 64: [BST] Insert + search + delete (all 3 cases) — delete case 3 took most time
Day 65: [BST] Generate BST from preorder traversal
Day 63: [LC] 98 Validate BST (Medium) — min/max bound propagation approach
Day 64: [LC] 450 Delete BST Node (Medium) — implement all 3 cases cleanly
Day 65: [LC] 1008 Construct BST from Preorder (Medium)
Day 67: [LC] Stretch — 230 Kth Smallest + 114 Flatten to LL
```

---

## ✅ Week 9 Success Checklist

- [ ] §16 all BST videos watched and re-coded
- [ ] BST delete — all 3 cases clean from memory
- [ ] All 3 carry-over LeetCode problems done
- [ ] At least 1 stretch problem done
- [ ] 3rd-weekend re-solve check done
- [ ] `notes/week9-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

BST deletion case 3 (node with two children — inorder successor replacement) is genuinely the hardest pointer operation you've done so far. It's okay to spend most of Tuesday on it. Draw the before/after state of the tree for a concrete example.

Week 10 (AVL Trees) is the bonus section — it's not in your college syllabus, but it's extremely common in interviews. Come into it rested.

---

## 📢 LinkedIn Post Template

> Week 9 of my DSA journey 🧵
>
> This week: Binary Search Trees — insert, search, and the infamous delete.
>
> The one that actually made me think: BST delete Case 3. Finding the inorder successor, copying its value, then deleting that successor — doing it cleanly without corrupting the tree took me 3 attempts and a full diagram.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 8](week-8.md) · [Week 10 — AVL + Red-Black Trees →](week-10.md)*
