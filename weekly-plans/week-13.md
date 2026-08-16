# Week 13 — Greedy Algorithms

> **Abdul Bari: §26 — Greedy (Fractional Knapsack, Kruskal's, Prim's, Dijkstra, Optimal Merge)**  
> LeetCode: first half of Week 13–14 block · **Bonus — not in college syllabus, but critical for interviews**  
> This week is about building the Greedy intuition — *why* does locally optimal work here?

---

## 🎯 Target for This Week

By end of Week 13, you should be able to:
- Apply the Greedy paradigm: prove that a greedy choice is always locally optimal
- Implement Dijkstra's shortest path algorithm from scratch
- Implement Kruskal's and Prim's MST algorithms
- Solve Greedy LeetCode problems and know why Greedy works for them (not just that it does)

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §26 Greedy

- [ ] **Greedy Introduction** — watch
- [ ] **Fractional Knapsack** — watch + re-code ⭐ (sort by value/weight ratio)
- [ ] **Optimal Merge Pattern** — watch + re-code (heap-based greedy)
- [ ] **Huffman Coding** — watch (concept-level, no full implementation needed)
- [ ] **Kruskal's Algorithm (MST)** — watch + re-code ⭐ (uses Union-Find from Week 12)
- [ ] **Prim's Algorithm (MST)** — watch + re-code (uses min-heap from Week 11)
- [ ] **Dijkstra's Shortest Path** — watch + re-code ⭐⭐ (modified BFS with priority queue)
- [ ] **All Let's Code videos for the above** — re-code from memory

---

## 📝 Greedy vs DP Decision Cheat Sheet

Write this in `notes/week13-greedy-vs-dp.md`:

> "Use Greedy when the locally optimal choice doesn't affect future choices negatively.
> Use DP when the optimal substructure exists but greedy fails (you need to try multiple paths)."

Examples:
- ✅ Greedy works: Fractional Knapsack, Dijkstra (non-negative weights), MST
- ❌ Greedy fails, use DP: 0/1 Knapsack, Coin Change, LCS

Filling this in will pay off during Week 14 DP week.

---

## 💻 LeetCode Problems (Week 13–14 block, Greedy half)

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **455. Assign Cookies** | 🟢 Easy | Greedy — fractional selection / locally optimal choice (§409–411) | 15 min | [LeetCode ↗](https://leetcode.com/problems/assign-cookies/) |
| - [ ] | **743. Network Delay Time** | 🟡 Medium | Dijkstra's single-source shortest path (§417–418) | 40 min | [LeetCode ↗](https://leetcode.com/problems/network-delay-time/) |
| - [ ] | **1584. Min Cost to Connect All Points** | 🟡 Medium | Prim's / Kruskal's MST on complete graph (§413–416) | 45 min | [LeetCode ↗](https://leetcode.com/problems/min-cost-to-connect-all-points/) |

> The other 5 problems in the Week 13–14 block are DP (done in Week 14). These 3 are the Greedy ones.

### Extra Greedy Problems (good for pattern building)

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **435. Non-overlapping Intervals** | 🟡 Medium | Interval scheduling — sort by end time, greedy pick | 30 min | [LeetCode ↗](https://leetcode.com/problems/non-overlapping-intervals/) |
| - [ ] | **763. Partition Labels** | 🟡 Medium | Greedy partitioning on last occurrence | 30 min | [LeetCode ↗](https://leetcode.com/problems/partition-labels/) |
| - [ ] | **134. Gas Station** | 🟡 Medium | Greedy circular scan — classic | 35 min | [LeetCode ↗](https://leetcode.com/problems/gas-station/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §26 Greedy intro + Fractional Knapsack → re-code
      Then LeetCode: 455 Assign Cookies (Easy — warm-up)
      Extra: 435 Non-overlapping Intervals (Medium — interval greedy)

Tue:  §26 Kruskal’s + Prim’s (uses Union-Find + min-heap — review Week 12 UF)
      Re-code → then LeetCode: 1584 Min Cost to Connect All Points (Medium — MST)

Wed:  ← REST DAY

Thu:  §26 Dijkstra’s Shortest Path ⭐⭐ → re-code
      Then LeetCode: 743 Network Delay Time (Medium — Dijkstra)

Fri:  §26 Optimal Merge + Huffman Coding
      Extra: 763 Partition Labels + 134 Gas Station

Sat:  Greedy vs DP cheat sheet — write it out
      Re-code: Dijkstra’s from memory without notes

Sun:  Commit, LinkedIn post
      Mental prep for Week 14 (DP — hardest week of the plan)
```

---

## 🏗️ Folder Structure After Week 13

```
dsa-journey/
├── c-cpp/
│   └── week13-greedy/
│       ├── fractional_knapsack.cpp
│       ├── kruskal.cpp              ← uses Union-Find from week12
│       ├── prim.cpp                 ← uses min-heap from week11
│       └── dijkstra.cpp             ← modified BFS with priority queue
├── leetcode/
│   └── week13/
│       ├── 455_assign_cookies.cpp
│       ├── 743_network_delay.cpp
│       ├── 1584_min_cost_connect.cpp
│       ├── 435_non_overlapping.cpp
│       ├── 763_partition_labels.cpp
│       └── 134_gas_station.cpp
└── notes/
    ├── week13-notes.md
    └── week13-greedy-vs-dp.md
```

---

## 💾 Git Commit Examples

```
Day 92: [Greedy] Fractional Knapsack + Kruskal's MST re-coded
Day 93: [Greedy] Dijkstra's — priority queue approach from scratch
Day 92: [LC] 455 Assign Cookies (Easy) + 435 Non-overlapping Intervals (Medium)
Day 93: [LC] 1584 Min Cost to Connect (Medium) — Prim's with adjacency list
Day 94: [LC] 743 Network Delay (Medium) — Dijkstra implemented
Day 95: Greedy vs DP cheat sheet written — 10 examples categorized
```

---

## ✅ Week 13 Success Checklist

- [ ] §26 all Greedy videos watched
- [ ] Fractional Knapsack, Kruskal's, Prim's, Dijkstra's re-coded
- [ ] All 3 core + 3 extra LeetCode problems done
- [ ] Greedy vs DP decision cheat sheet written
- [ ] Dijkstra's re-coded from memory (Saturday drill)
- [ ] `notes/week13-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

Dijkstra's algorithm is one of the most-asked algorithms in interviews. The mental model is simple: "always expand the cheapest unvisited node." The implementation using a `priority_queue` is the important part — get comfortable with it.

The Greedy vs DP cheat sheet is important for Week 14. Don't skip it — it saves you 30 minutes per DP problem of "should I use greedy here?"

---

## 📢 LinkedIn Post Template

> Week 13 of my DSA journey 🧵
>
> This week: Greedy Algorithms — Dijkstra's, Kruskal's, Prim's.
>
> The key insight with Greedy: you need to *prove* that the locally optimal choice doesn't hurt you globally. For Dijkstra's with non-negative weights, that proof is "a shorter path can't come later through a more expensive intermediate node."
>
> Greedy vs DP decision sheet: [screenshot]
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 12](week-12.md) · [Week 14 — Dynamic Programming →](week-14.md)*
