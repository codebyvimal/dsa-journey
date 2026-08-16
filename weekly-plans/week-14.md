# Week 14 — Dynamic Programming

> **Abdul Bari: §27 — DP (0/1 Knapsack, Matrix Chain, LCS, Kadane's, Optimal BST)**  
> LeetCode target: remaining Week 13–14 block (5 DP problems) + stretch  
> **This is the hardest week of the entire plan. Budget more time. Don't rush it.**

---

## 🎯 Target for This Week

By end of Week 14, you should be able to:
- Identify DP problems by recognizing "optimal substructure + overlapping subproblems"
- Solve DP problems using both top-down (memoization) and bottom-up (tabulation) approaches
- Implement 0/1 Knapsack, LCS, Matrix Chain Multiplication, Kadane's from scratch
- Know the DP state transition for a problem before writing code

---

## ⚠️ DP Takes Longer Than Any Other Week

> Expect problems to take the **full time budget or more**. That's not a sign you're behind — that's DP.  
> Cap your struggle at 25 min, look at the approach (not code), then implement.  
> Never look at the full solution before a genuine attempt.

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §27 Dynamic Programming

- [ ] **DP Introduction** — watch ⭐ (this is the key: what makes a problem DP?)
- [ ] **Multistage Graph** — watch
- [ ] **0/1 Knapsack** — watch + re-code ⭐⭐ (the canonical DP problem — know it cold)
- [ ] **Memory Function (Memoization)** — watch + re-code
- [ ] **Optimal BST** — watch (concept-level)
- [ ] **Matrix Chain Multiplication** — watch + re-code ⭐ (interval DP — classic)
- [ ] **Longest Common Subsequence (LCS)** — watch + re-code ⭐⭐
- [ ] **Kadane's Algorithm (Max Subarray)** — watch + re-code ⭐
- [ ] **Single Source Shortest Path (Bellman-Ford)** — watch (concept, no full re-code needed)
- [ ] **All Let's Code videos** — re-code from memory

---

## 📝 DP Problem Framework

For every DP problem, write these 4 things *before* coding:

```
1. STATE: What does dp[i] (or dp[i][j]) represent?
2. TRANSITION: How does dp[i] depend on previous states?
3. BASE CASE: What is dp[0] or dp[0][0]?
4. ANSWER: Where is the final answer in the dp table?
```

Practice this on the 5 LeetCode problems this week. It will feel slow at first — it becomes fast by Week 15.

---

## 💻 LeetCode Problems (Week 13–14 block, DP half)

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **53. Maximum Subarray** | 🟡 Medium | Kadane's algorithm — max subarray sum (§435–438) | 25 min | [LeetCode ↗](https://leetcode.com/problems/maximum-subarray/) |
| - [ ] | **1143. Longest Common Subsequence** | 🟡 Medium | LCS — recursion → memoization → tabulation (§431–434) | 40 min | [LeetCode ↗](https://leetcode.com/problems/longest-common-subsequence/) |
| - [ ] | **322. Coin Change** | 🟡 Medium | 0/1-style DP tabulation (§422–426) | 35 min | [LeetCode ↗](https://leetcode.com/problems/coin-change/) |
| - [ ] | **416. Partition Equal Subset Sum** | 🟡 Medium | 0/1 Knapsack DP tabulation (§422–426) | 40 min | [LeetCode ↗](https://leetcode.com/problems/partition-equal-subset-sum/) |
| - [ ] | **312. Burst Balloons** | 🔴 Hard | Matrix-chain-multiplication style interval DP (§427–430) | 60 min | [LeetCode ↗](https://leetcode.com/problems/burst-balloons/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **787. Cheapest Flights Within K Stops** | 🟡 Medium | Dijkstra/DP (Week 13–14) + graph BFS (Week 12) | 50 min | [LeetCode ↗](https://leetcode.com/problems/cheapest-flights-within-k-stops/) |
| - [ ] | **1547. Minimum Cost to Cut a Stick** | 🔴 Hard | Matrix-chain interval DP (Week 14) + D&C recursion (Week 7) | 60 min | [LeetCode ↗](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → apply 4-step framework → then LeetCode

Mon:  §27 DP Intro + 0/1 Knapsack — watch, then re-code both top-down and bottom-up
      Apply the 4-step DP framework on paper first
      Then LeetCode: 53 Maximum Subarray (Medium — Kadane’s, warm-up)

Tue:  §27 LCS — watch + re-code ⭐
      Then LeetCode: 1143 LCS (Medium) + 322 Coin Change (Medium)

Wed:  ← REST DAY — DP needs sleep to consolidate more than any other topic

Thu:  §27 Matrix Chain Multiplication — watch + re-code ⭐
      Then LeetCode: 416 Partition Equal Subset Sum (Medium — 0/1 knapsack mapping)

Fri:  §27 Memoization vs Tabulation — compare both implementations
      Then LeetCode: 312 Burst Balloons (Hard — 60 min max, then read approach) ⭐

Sat:  Stretch: 787 Cheapest Flights (Medium — Bellman-Ford / DP)
      Re-code: 0/1 Knapsack from memory + LCS from memory — no notes

Sun:  Commit everything, LinkedIn post
      Preview Week 15 (Backtracking — you’re almost at the finish line)
```

---

## 🏗️ Folder Structure After Week 14

```
dsa-journey/
├── c-cpp/
│   └── week14-dp/
│       ├── knapsack_01.cpp          ← 0/1 knapsack, top-down + bottom-up
│       ├── lcs.cpp                  ← LCS tabulation
│       ├── matrix_chain.cpp         ← MCM interval DP
│       └── kadane.cpp               ← max subarray sum
├── leetcode/
│   └── week14/
│       ├── 53_max_subarray.cpp
│       ├── 1143_lcs.cpp
│       ├── 322_coin_change.cpp
│       ├── 416_partition_subset.cpp
│       └── 312_burst_balloons.cpp
└── notes/
    ├── week14-notes.md
    └── week14-dp-framework.md       ← 4-step framework applied to each problem
```

---

## 💾 Git Commit Examples

```
Day 99:  [DP] 0/1 Knapsack — top-down memoization + bottom-up tabulation
Day 100: [DP] LCS — 2D table filled manually for a small example first
Day 101: [DP] Matrix Chain Multiplication — interval DP re-coded
Day 99:  [LC] 53 Max Subarray (Medium) — Kadane's in 10 min
Day 100: [LC] 1143 LCS (Medium) + 322 Coin Change (Medium)
Day 101: [LC] 416 Partition Subset (Medium) — knapsack mapping clicked halfway through
Day 102: [LC] 312 Burst Balloons (Hard) — needed approach hint at 45 min, reimplemented
```

---

## ✅ Week 14 Success Checklist

- [ ] §27 all DP videos watched
- [ ] 0/1 Knapsack (top-down + bottom-up) re-coded from memory
- [ ] LCS re-coded from memory
- [ ] Matrix Chain Multiplication re-coded
- [ ] Kadane's re-coded
- [ ] All 5 core LeetCode problems done (attempted — not necessarily perfect)
- [ ] 4-step DP framework applied to every problem in notes
- [ ] At least 1 stretch problem attempted
- [ ] Everything pushed

---

## 🌬️ Breathing Room

This is the hardest week. Genuinely.

DP problems fail in two specific ways:
1. You don't know what the state represents → go back to Step 1 of the framework
2. You figure out the state but the transition is wrong → draw the table for a small input by hand

**312. Burst Balloons** is one of the hardest standard DP problems on LeetCode. If you spend 60 min and can't crack it, look at the approach (the key insight: think about which balloon you burst *last* in a range, not first), then implement it. That's completely acceptable.

You're 14 weeks in. Take the rest day. Seriously.

---

## 📢 LinkedIn Post Template

> Week 14 of my DSA journey 🧵
>
> This week: Dynamic Programming — the one that breaks and rebuilds your brain.
>
> The "aha" moment: [322. Coin Change]. The recursive tree is exponential. Add a memo table → exponential becomes polynomial. Same logic, different data structure. That's DP.
>
> My 4-step DP framework: State → Transition → Base Case → Answer. I wrote it before every problem. It slowed me down on problem 1 and sped me up on problems 2–5.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 13](week-13.md) · [Week 15 — Backtracking + Final Revision →](week-15.md)*
