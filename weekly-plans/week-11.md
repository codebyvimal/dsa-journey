# Week 11 — Heap + Hashing

> **Abdul Bari: §19 (Heap), §21 (Hashing)**  
> LeetCode target: **10 problems** (8 core + 2 stretch)  
> Practical and fast — Heap and Hashing appear in nearly every interview.

---

## 🎯 Target for This Week

By end of Week 11, you should be able to:
- Implement max-heap / min-heap using an array (heapify, insert, extract-max)
- Implement heap sort
- Understand hash table with chaining and open addressing (linear probing, quadratic, double hashing)
- Recognize when to use a heap vs a hash map in a problem
- Use `priority_queue` and `unordered_map` in C++ fluently (these are in the STL)

---

## 📋 What to Do

### 🎬 Abdul Bari Videos — §19 Heap

- [ ] **Heap Introduction** — watch
- [ ] **Insert in a Heap** — watch + re-code ⭐
- [ ] **Delete from a Heap / Extract Max** — watch + re-code ⭐
- [ ] **Heapify** — watch + re-code ⭐ (this is the O(n) build-heap)
- [ ] **Heap Sort** — watch + re-code
- [ ] **Priority Queue** — watch (concept — C++ STL `priority_queue` implements this)
- [ ] **Let's Code** for each — re-code from memory

### 🎬 Abdul Bari Videos — §21 Hashing

- [ ] **Hashing Introduction** — watch
- [ ] **Chaining** — watch + re-code (basic hash table with linked list buckets)
- [ ] **Linear Probing** — watch + re-code ⭐
- [ ] **Quadratic Probing** — watch (concept-level, lighter re-code)
- [ ] **Double Hashing** — watch (concept-level)
- [ ] **Let's Code** for chaining + linear probing — re-code from memory

---

## 📝 C++ STL Practice

Alongside Abdul Bari, practice using these in your LeetCode solutions this week:

```cpp
// Max-heap (default)
priority_queue<int> maxHeap;
maxHeap.push(5);
maxHeap.top();    // max element
maxHeap.pop();

// Min-heap
priority_queue<int, vector<int>, greater<int>> minHeap;

// Hash map
unordered_map<int, int> freq;
freq[key]++;
freq.count(key);  // check existence

// Hash set
unordered_set<int> seen;
seen.insert(x);
seen.count(x);
```

Write this file: `c-cpp/week11-heap-hashing/stl_practice.cpp`

---

## 💻 LeetCode Problems

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **1046. Last Stone Weight** | 🟢 Easy | Max-heap / priority queue with insertion (§329–335) | 20 min | [LeetCode ↗](https://leetcode.com/problems/last-stone-weight/) |
| - [ ] | **1. Two Sum** | 🟢 Easy | Hash map with chaining / open addressing (§365–372) | 15 min | [LeetCode ↗](https://leetcode.com/problems/two-sum/) |
| - [ ] | **49. Group Anagrams** | 🟡 Medium | Hash map with chaining for grouping (§366–367) | 30 min | [LeetCode ↗](https://leetcode.com/problems/group-anagrams/) |
| - [ ] | **347. Top K Frequent Elements** | 🟡 Medium | Min-heap of size K for frequency (§329–335, §359) | 35 min | [LeetCode ↗](https://leetcode.com/problems/top-k-frequent-elements/) |
| - [ ] | **451. Sort Characters By Frequency** | 🟡 Medium | Heap + hash frequency table (§329–335 + §365–368) | 30 min | [LeetCode ↗](https://leetcode.com/problems/sort-characters-by-frequency/) |
| - [ ] | **128. Longest Consecutive Sequence** | 🟡 Medium | Hash set with linear probing logic (§368–369) | 35 min | [LeetCode ↗](https://leetcode.com/problems/longest-consecutive-sequence/) |
| - [ ] | **295. Find Median from Data Stream** | 🔴 Hard | Two heaps (max + min) as priority queue (§335) | 55 min | [LeetCode ↗](https://leetcode.com/problems/find-median-from-data-stream/) |
| - [ ] | **632. Smallest Range Covering K Lists** | 🔴 Hard | Min-heap priority queue across K lists (§335) | 60 min | [LeetCode ↗](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) |

### 🔗 Stretch Problems

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **23. Merge k Sorted Lists** | 🔴 Hard | Heap-based K-way merge (Week 11) + linked list (Week 4–5) | 55 min | [LeetCode ↗](https://leetcode.com/problems/merge-k-sorted-lists/) |
| - [ ] | **218. The Skyline Problem** | 🔴 Hard | Max-heap (Week 11) + sorting/sweep (Week 6) | 65 min | [LeetCode ↗](https://leetcode.com/problems/the-skyline-problem/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch video → close it → re-code from memory → then LeetCode

Mon:  §19 Heap — intro + insert + delete/extract + heapify
      Re-code → then LeetCode: 1046 Last Stone Weight (Easy) + 1 Two Sum (Easy)

Tue:  §19 Heap Sort + Priority Queue concept
      C++ STL practice file (priority_queue + unordered_map)
      Then LeetCode: 49 Group Anagrams + 347 Top K Frequent (both Medium)

Wed:  ← REST DAY

Thu:  §21 Hashing — chaining + linear probing + re-code
      Then LeetCode: 451 Sort by Frequency + 128 Longest Consecutive

Fri:  LeetCode: 295 Find Median from Data Stream (Hard — the two-heap trick) ⭐
      LeetCode: 632 Smallest Range (Hard — 60 min cap)

Sat:  Stretch: 23 Merge k Sorted Lists
      3rd-weekend rule: re-solve 2 problems from Weeks 8–9

Sun:  Commit, LinkedIn post
      Preview Week 12 (Graphs — the big one)
```

---

## 🏗️ Folder Structure After Week 11

```
dsa-journey/
├── c-cpp/
│   └── week11-heap-hashing/
│       ├── heap.cpp                  ← max-heap: insert, delete, heapify, heapsort
│       ├── hash_table_chaining.cpp   ← hash table with linked list buckets
│       ├── hash_table_probing.cpp    ← linear probing
│       └── stl_practice.cpp          ← priority_queue + unordered_map practice
├── leetcode/
│   └── week11/
│       ├── 1046_last_stone_weight.cpp
│       ├── 1_two_sum_hash.cpp
│       ├── 49_group_anagrams.cpp
│       ├── 347_top_k_frequent.cpp
│       ├── 451_sort_by_freq.cpp
│       ├── 128_longest_consecutive.cpp
│       ├── 295_find_median_stream.cpp
│       └── 632_smallest_range.cpp
└── notes/
    └── week11-notes.md
```

---

## 💾 Git Commit Examples

```
Day 78: [Heap] Max-heap — insert, delete, heapify, heap sort
Day 79: [Hashing] Hash table with chaining + linear probing
Day 78: [LC] 1046 Last Stone (Easy) + 1 Two Sum with hashmap (Easy)
Day 79: [LC] 49 Group Anagrams (Medium) + 347 Top K Frequent (Medium)
Day 81: [LC] 295 Find Median Stream (Hard) — two heaps, rebalancing logic
Day 81: [LC] 632 Smallest Range (Hard) — min-heap tracking all list heads
```

---

## ✅ Week 11 Success Checklist

- [ ] Max-heap (insert, delete, heapify, heap sort) re-coded from memory
- [ ] Hash table (chaining + linear probing) re-coded
- [ ] C++ STL `priority_queue` and `unordered_map` practiced in code
- [ ] All 8 core LeetCode problems attempted
- [ ] At least 1 stretch problem done
- [ ] 3rd-weekend re-solve check done
- [ ] `notes/week11-notes.md` written
- [ ] Everything pushed

---

## 🌬️ Breathing Room

**295. Find Median from Data Stream** is one of the most-asked hard problems in product-based company interviews. The two-heap approach (max-heap for the left half, min-heap for the right half) is a pattern you'll see again. Take the full time budget and make sure you really understand it.

**218. The Skyline Problem** is genuinely hard and somewhat niche — it's in the stretch section for a reason. Skip it if Week 12 (Graphs) preparation feels more urgent.

---

## 📢 LinkedIn Post Template

> Week 11 of my DSA journey 🧵
>
> This week: Heap + Hashing — the practical power duo.
>
> The one that actually made me think: [295. Find Median from Data Stream] — the idea of maintaining two heaps (one max, one min) balanced within ±1 size is elegant. Once you see it, you wonder why you'd ever sort for a median.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 10](week-10.md) · [Week 12 — Graphs →](week-12.md)*
