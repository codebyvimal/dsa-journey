# Week 15 — Backtracking + Final LeetCode Revision Pass

> **Abdul Bari: §28 — Backtracking (N-Queens, Permutations, Rat in Maze, Sudoku)**  
> LeetCode target: **10 problems** (8 core + 2 stretch) + revision pass  
> **Final week. This is the finish line.**

---

## 🎯 Target for This Week

By end of Week 15, you should be able to:
- Implement Backtracking as "recursion + undo" — try a choice, recurse, undo if it fails
- Define a bounding function for N-Queens, Sudoku, and Rat-in-a-Maze
- Solve Backtracking problems on LeetCode without hints
- Revisit 3–4 problems from earlier weeks and solve them faster than you did originally

**If you reach this week having done everything above — you have an interview-ready DSA foundation.**

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §28 Backtracking

- [ ] **Backtracking Introduction** — watch ⭐ (the "try → recurse → undo" mental model)
- [ ] **N-Queens Problem** — watch + re-code ⭐⭐ (column + diagonal bounding function)
- [ ] **N-Queens — Let's Code** — re-code from memory
- [ ] **Rat in a Maze** — watch + re-code ⭐ (DFS with backtracking on a grid)
- [ ] **Sudoku Solver** — watch + re-code ⭐ (constraint pruning per row/col/box)
- [ ] **Graph Coloring** — watch (concept-level)
- [ ] **Hamiltonian Cycle** — watch (concept-level)
- [ ] **Sum of Subsets** — watch + re-code (inclusion/exclusion pattern)

---

## 📝 Backtracking Template

Write this in `notes/week15-backtracking-template.cpp`:

```cpp
void backtrack(/* state */) {
    if (/* base case — goal reached */) {
        // add result / return
        return;
    }
    for (/* each choice */) {
        if (/* bounding function — is this choice valid? */) {
            // make the choice
            backtrack(/* next state */);
            // undo the choice
        }
    }
}
```

Every backtracking problem in this week maps to this template. Fill in the blanks for each one.

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **784. Letter Case Permutation** | 🟢 Easy | Backtracking tree — permutation with bounding (§445–446) | 20 min | [LeetCode ↗](https://leetcode.com/problems/letter-case-permutation/) |
| - [ ] | **78. Subsets** | 🟡 Medium | Backtracking subset enumeration — include/exclude pattern (§441) | 25 min | [LeetCode ↗](https://leetcode.com/problems/subsets/) |
| - [ ] | **46. Permutations** | 🟡 Medium | Full permutation generation via backtracking (§445) | 30 min | [LeetCode ↗](https://leetcode.com/problems/permutations/) |
| - [ ] | **93. Restore IP Addresses** | 🟡 Medium | Backtracking with pruning on string segments (§441) | 35 min | [LeetCode ↗](https://leetcode.com/problems/restore-ip-addresses/) |
| - [ ] | **490. The Maze** | 🟡 Medium | Rat-in-a-maze DFS/backtracking on a grid (§447) | 35 min | [LeetCode ↗](https://leetcode.com/problems/the-maze/) |
| - [ ] | **37. Sudoku Solver** | 🔴 Hard | Backtracking with constraint pruning — Sudoku (§448) | 55 min | [LeetCode ↗](https://leetcode.com/problems/sudoku-solver/) |
| - [ ] | **51. N-Queens** | 🔴 Hard | N-Queens backtracking with column/diagonal bounding (§442–444) | 55 min | [LeetCode ↗](https://leetcode.com/problems/n-queens/) |
| - [ ] | **52. N-Queens II** | 🔴 Hard | N-Queens count variant — same backtracking with counter (§443–444) | 45 min | [LeetCode ↗](https://leetcode.com/problems/n-queens-ii/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **131. Palindrome Partitioning** | 🟡 Medium | Backtracking (Week 15) + string palindrome check (Week 3) | 40 min | [LeetCode ↗](https://leetcode.com/problems/palindrome-partitioning/) |
| - [ ] | **140. Word Break II** | 🔴 Hard | Backtracking (Week 15) + DP memoization (Week 14) | 60 min | [LeetCode ↗](https://leetcode.com/problems/word-break-ii/) |

---

## 📋 Final Revision Pass (Saturday)

Pick **4 problems from earlier weeks** that you found hard or shaky, and solve them fresh — no looking at your old code:

Suggested picks (adjust based on your own weak spots):
- [ ] **One recursion problem** from Week 1 (e.g. 779 K-th Symbol in Grammar)
- [ ] **One tree problem** from Week 8–9 (e.g. 105 Construct BT from Pre+Inorder)
- [ ] **One DP problem** from Week 14 (e.g. 322 Coin Change)
- [ ] **One graph problem** from Week 12 (e.g. 207 Course Schedule)

If you're faster than before and the solution is cleaner — you've genuinely learned it.  
If you're still stuck — note it as a topic to revisit post-semester.

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → trace on paper → re-code → then LeetCode

Mon:  §28 Backtracking intro + N-Queens — trace on paper first
      Re-code N-Queens → then LeetCode: 784 Letter Case (Easy) + 78 Subsets (Medium)

Tue:  §28 N-Queens re-code + Rat in a Maze
      Re-code → then LeetCode: 46 Permutations + 490 The Maze

Wed:  ← REST DAY — you’ve been at this for 15 weeks

Thu:  §28 Sudoku Solver + Sum of Subsets
      Re-code → then LeetCode: 37 Sudoku Solver (Hard) + 93 Restore IP Addresses

Fri:  LeetCode: 51 N-Queens (Hard) + 52 N-Queens II (Hard)

Sat:  Final revision pass — 4 problems from earlier weeks
      Stretch: 131 Palindrome Partitioning

Sun:  🎉 Final commit — update README with full progress table
      LinkedIn final wrap-up post
      Stretch (if energy): 140 Word Break II
```

---

## 🏗️ Folder Structure After Week 15 (final state)

```
dsa-journey/
├── README.md                        ← fully updated progress table
├── c-cpp/
│   ├── week0-bridge/
│   ├── week1-recursion/
│   ├── week2-arrays/
│   ├── week3-strings-matrices/
│   ├── week4-linked-list/
│   ├── week5-stack-queue/
│   ├── week6-sorting/
│   ├── week7-dnc/
│   ├── week8-binary-trees/
│   ├── week9-bst/
│   ├── week10-avl/
│   ├── week11-heap-hashing/
│   ├── week12-graphs/
│   ├── week13-greedy/
│   ├── week14-dp/
│   └── week15-backtracking/
│       ├── n_queens.cpp
│       ├── rat_in_maze.cpp
│       ├── sudoku_solver.cpp
│       └── backtracking_template.cpp
├── cs50x/
│   ├── week1-mario.c
│   ├── week2-readability.c
│   └── week4-filter-less/
├── leetcode/
│   ├── week1/ through week15/
└── notes/
    ├── week0-notes.md
    ├── ...
    ├── week15-notes.md
    ├── week6-sort-complexity.md
    ├── week7-complexity-review.md
    ├── week12-bfs-vs-dfs.md
    ├── week13-greedy-vs-dp.md
    ├── week14-dp-framework.md
    └── week15-backtracking-template.cpp
```

---

## 💾 Git Commit Examples

```
Day 106: [Backtracking] N-Queens — traced 4x4 board on paper first, then coded
Day 107: [Backtracking] Rat in Maze + Sudoku Solver
Day 106: [LC] 784 Letter Case (Easy) + 78 Subsets (Medium)
Day 107: [LC] 46 Permutations + 490 The Maze
Day 108: [LC] 37 Sudoku Solver (Hard) + 51 N-Queens (Hard)
Day 110: [REVISION] Solved 4 problems from Weeks 1-14 from memory — all faster than first time
Day 110: 🎉 Final commit — 15 weeks, ~118 LeetCode problems, complete DSA foundation
```

---

## ✅ Final Week Checklist

- [ ] §28 all Backtracking videos watched
- [ ] N-Queens, Rat in Maze, Sudoku re-coded from memory using the template
- [ ] All 8 core LeetCode problems done
- [ ] Final revision pass (4 problems from earlier weeks)
- [ ] At least 1 stretch problem done
- [ ] Everything pushed
- [ ] README progress table fully updated
- [ ] Final LinkedIn post written

---

## 🌬️ Breathing Room

You made it.

15 weeks ago you started with C arrays and basic recursion. You now have:
- ~118 LeetCode problems solved
- Complete implementations of every major data structure and algorithm
- A public GitHub repo documenting every step
- Complexity analysis for all major algorithms
- Interview-ready knowledge of Trees, Graphs, DP, and Backtracking

The dream (40–60 LPA product role) is not built in one week. But you've just built the foundation that makes it possible. The next step is mock interviews and contest practice — but that's a different plan.

**Take a full weekend off. You've earned it.**

---

## 📢 Final LinkedIn Post Template

> Week 15 — wrapping up 15 weeks of DSA 🧵
>
> What I built:
> - ~118 LeetCode problems solved (Easy → Hard)
> - Full implementations in C/C++: Arrays, LL, Stack, Queue, Trees, BST, AVL, Heap, Hash Tables, Graphs
> - Abdul Bari's Mastering DSA (Udemy) — complete
> - CS50X C sections done alongside
>
> The one that made me think the hardest this month: [your pick]
>
> What's next: Mock interviews + competitive programming.
>
> Public repo (every commit documented): [link]
>
> Thank you to everyone who followed along. See you in the next chapter.
>
> #DSA #100DaysOfCode #buildinpublic #CompetitiveProgramming

---

*← [Week 14](week-14.md) · [README — Master Index](README.md)*

---

> **You started because you wanted a 40–60 LPA product role.**  
> **The consistency you built here is what gets you there.**
