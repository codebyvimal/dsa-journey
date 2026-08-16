# Week 12 — Graphs

> **Abdul Bari: §22 — Graphs (BFS, DFS, Disjoint Sets, representations)**  
> LeetCode target: **10 problems** (8 core + 2 stretch)  
> Graphs are the most complex data structure. Take your time — this week is dense.

---

## 🎯 Target for This Week

By end of Week 12, you should be able to:
- Represent a graph with adjacency matrix and adjacency list
- Implement BFS and DFS from scratch
- Detect cycles in directed and undirected graphs
- Use Union-Find (Disjoint Set Union) for connected component problems
- Solve graph problems on LeetCode using BFS or DFS fluently

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §22 Graphs

- [ ] **Graph Introduction + Terminology** — watch
- [ ] **Representation — Adjacency Matrix** — watch + re-code
- [ ] **Representation — Adjacency List** — watch + re-code ⭐ (this is what you use in LeetCode)
- [ ] **BFS (Breadth First Search)** — watch + re-code ⭐⭐
- [ ] **DFS (Depth First Search)** — watch + re-code ⭐⭐
- [ ] **Disjoint Sets / Union-Find** — watch + re-code ⭐ (Union by rank + Path compression)
- [ ] Any additional §22 videos (spanning tree, etc.) — watch concept-level

---

## 📝 BFS vs DFS Quick Reference

Write this in `notes/week12-bfs-vs-dfs.md` as you code:

| | BFS | DFS |
|---|-----|-----|
| Data structure | Queue | Stack (or call stack) |
| Traversal style | Level by level | Branch by branch |
| Shortest path? | Yes (unweighted) | No |
| Cycle detection | Yes | Yes |
| Use cases | Shortest path, spreading, level-order | Connected components, topological sort, backtracking |
| Space | O(V) — wide graphs are expensive | O(V) — deep graphs are expensive |

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **733. Flood Fill** | 🟢 Easy | BFS/DFS on implicit grid graph (§376–380) | 20 min | [LeetCode ↗](https://leetcode.com/problems/flood-fill/) |
| - [ ] | **200. Number of Islands** | 🟡 Medium | DFS/BFS connected components (§376–380) | 30 min | [LeetCode ↗](https://leetcode.com/problems/number-of-islands/) |
| - [ ] | **994. Rotting Oranges** | 🟡 Medium | Multi-source BFS (§376–377) | 30 min | [LeetCode ↗](https://leetcode.com/problems/rotting-oranges/) |
| - [ ] | **547. Number of Provinces** | 🟡 Medium | Disjoint subsets / Union-Find on graph (§381) | 30 min | [LeetCode ↗](https://leetcode.com/problems/number-of-provinces/) |
| - [ ] | **207. Course Schedule** | 🟡 Medium | DFS cycle detection on directed graph (§378–379) | 35 min | [LeetCode ↗](https://leetcode.com/problems/course-schedule/) |
| - [ ] | **417. Pacific Atlantic Water Flow** | 🟡 Medium | Reverse BFS from borders (§374–375) | 40 min | [LeetCode ↗](https://leetcode.com/problems/pacific-atlantic-water-flow/) |
| - [ ] | **1091. Shortest Path in Binary Matrix** | 🟡 Medium | BFS shortest path on unweighted graph (§376–377) | 35 min | [LeetCode ↗](https://leetcode.com/problems/shortest-path-in-binary-matrix/) |
| - [ ] | **685. Redundant Connection II** | 🔴 Hard | Union-Find with directed graph (§381) | 55 min | [LeetCode ↗](https://leetcode.com/problems/redundant-connection-ii/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **133. Clone Graph** | 🟡 Medium | BFS/DFS (Week 12) + hash map (Week 11) for visited tracking | 35 min | [LeetCode ↗](https://leetcode.com/problems/clone-graph/) |
| - [ ] | **127. Word Ladder** | 🔴 Hard | BFS (Week 12) + hashing (Week 11) for neighbour lookup | 55 min | [LeetCode ↗](https://leetcode.com/problems/word-ladder/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §22 Intro + Adjacency Matrix + Adjacency List — re-code both representations
      Then LeetCode: 733 Flood Fill (Easy) + 200 Number of Islands (Medium)

Tue:  §22 BFS — watch + re-code ⭐
      BFS vs DFS table in notes
      Then LeetCode: 994 Rotting Oranges (Medium — multi-source BFS)

Wed:  ← REST DAY — graphs are dense, let BFS/DFS consolidate

Thu:  §22 DFS — watch + re-code ⭐
      Then LeetCode: 207 Course Schedule (Medium — DFS cycle detection)
      Then LeetCode: 547 Number of Provinces (Medium — Union-Find)

Fri:  §22 Disjoint Sets / Union-Find — watch + re-code ⭐
      Then LeetCode: 417 Pacific Atlantic + 1091 Shortest Path (Medium)

Sat:  LeetCode: 685 Redundant Connection II (Hard — 55 min cap)
      Stretch: 133 Clone Graph

Sun:  Stretch: 127 Word Ladder (hard and fun)
      Commit, LinkedIn post
      Preview Weeks 13–14 (Greedy + DP — this is where 40–60 LPA interviews live)
```

---

## 🏗️ Folder Structure After Week 12

```
dsa-journey/
├── c-cpp/
│   └── week12-graphs/
│       ├── graph_adj_matrix.cpp
│       ├── graph_adj_list.cpp
│       ├── bfs.cpp                  ← BFS with queue
│       ├── dfs.cpp                  ← DFS with stack + recursive
│       └── union_find.cpp           ← Union by rank + path compression
├── leetcode/
│   └── week12/
│       ├── 733_flood_fill.cpp
│       ├── 200_number_of_islands.cpp
│       ├── 994_rotting_oranges.cpp
│       ├── 547_number_of_provinces.cpp
│       ├── 207_course_schedule.cpp
│       ├── 417_pacific_atlantic.cpp
│       ├── 1091_shortest_path_matrix.cpp
│       └── 685_redundant_connection.cpp
└── notes/
    ├── week12-notes.md
    └── week12-bfs-vs-dfs.md
```

---

## 💾 Git Commit Examples

```
Day 85: [Graphs] BFS + DFS re-coded from scratch — adjacency list
Day 86: [Graphs] Union-Find with path compression + union by rank
Day 85: [LC] 733 Flood Fill (Easy) + 200 Number of Islands (Medium)
Day 86: [LC] 994 Rotting Oranges (Medium) — multi-source BFS from all rotten cells
Day 87: [LC] 207 Course Schedule (Medium) — DFS topological sort + cycle detection
Day 88: [LC] 685 Redundant Connection II (Hard) — Union-Find on directed graph
```

---

## ✅ Week 12 Success Checklist

- [ ] Adjacency matrix + adjacency list both re-coded
- [ ] BFS implemented from memory (using queue)
- [ ] DFS implemented from memory (recursive + iterative with stack)
- [ ] Union-Find with path compression + union by rank implemented
- [ ] All 8 core LeetCode problems attempted
- [ ] BFS vs DFS table written in notes
- [ ] At least 1 stretch problem done
- [ ] Everything pushed

---

## 🌬️ Breathing Room

Graphs are genuinely the hardest data structure conceptually. Two things will make this week manageable:

1. **Do BFS and DFS separately** — don't conflate them. BFS first (it's more intuitive), DFS second.
2. **Grid problems (Flood Fill, Islands, Rotting Oranges) are not graph problems at first glance** — they're the same algorithm applied to a 2D grid where each cell is a node and neighbors are edges. Once you see that, the problems become easy.

**207. Course Schedule** (topological sort / cycle detection) is a classic. If you solve it clean, you've understood DFS on directed graphs.

---

## 📢 LinkedIn Post Template

> Week 12 of my DSA journey 🧵
>
> This week: Graphs — BFS, DFS, Union-Find.
>
> The one that made me rethink: [207. Course Schedule]. It's not obviously a graph problem — it's a "can you take all courses given prerequisites?" problem. But once you model prerequisites as directed edges and check for cycles with DFS, it becomes clean.
>
> BFS vs DFS: when to use which → [link to notes or screenshot]
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 11](week-11.md) · [Week 13 — Greedy Algorithms →](week-13.md)*
