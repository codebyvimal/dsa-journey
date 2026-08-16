# Week 1 — Recursion

> **Abdul Bari: §5 (Videos 46–78)** · **CS50X: none this week**  
> LeetCode target: **10 problems** (8 core + 2 stretch)

---

## 🎯 Target for This Week

By end of Week 1, you should be able to:
- Trace any recursive function on paper before running it
- Distinguish tail / head / tree / indirect / nested recursion by inspection
- Re-implement Tower of Hanoi and Fibonacci memoization from memory
- Solve Easy recursion problems in under 20 min on LeetCode
- Have your first real LeetCode commits in the repo

---

## 📋 What to Do

### 🎬 Abdul Bari Videos (watch → close → re-code)

- [ ] **46. How Recursion Works (Tracing)** — 19 min
- [ ] **47. Generalising Recursion** — 2 min
- [ ] **48. How Recursion uses Stack** — 11 min
- [ ] **49. Recurrence Relation — Time Complexity** — 11 min
- [ ] **50. Let's Code Recursion** — 12 min
- [ ] **51. Static and Global Variables in Recursion** — 8 min
- [ ] **52. Let's Code Static and Global** — 7 min
- [ ] **53. Tail Recursion** — 7 min
- [ ] **54. Head Recursion** — 5 min
- [ ] **55. Tree Recursion** — 17 min
- [ ] **56. Let's Code Tree Recursion** — 6 min
- [ ] **57. Indirect Recursion** — 5 min
- [ ] **58. Let's Code Indirect Recursion** — 3 min
- [ ] **59. Nested Recursion** — 7 min
- [ ] **60. Let's Code Nested Recursion** — 2 min
- [ ] **61. Sum of Natural Numbers using Recursion** — 10 min
- [ ] **62. Let's Code Sum of N** — 4 min
- [ ] **63. Factorial using Recursion** — 5 min
- [ ] **64. Let's Code Factorial** — 5 min
- [ ] **65. Power using Recursion** — 14 min
- [ ] **66. Let's Code Power Recursion** — 3 min
- [ ] **67. Taylor Series using Recursion** — 14 min
- [ ] **68. Let's Code Taylor Series** — 4 min
- [ ] **72. Fibonacci Series — Memoization** — 20 min ⭐ important
- [ ] **73. Let's Code Fibonacci** — 13 min
- [ ] **74. nCr using Recursion** — 9 min
- [ ] **75. Let's Code nCr** — 5 min
- [ ] **76. Tower of Hanoi Problem** — 26 min ⭐ important
- [ ] **77. Let's Code Tower of Hanoi** — 4 min
- [ ] **78. Quiz 1 Solutions** — 31 min (watch lightly, check your answers)

> Videos 67–71 (Taylor Series / Horner's Rule) are optional if time is tight — skip them and come back.

---

## 💻 LeetCode Problems

> **Order matters** — do Easy first, build confidence before Medium.  
> Time box: 20 min genuine attempt → hint (approach only) → implement → move on.

### Core Problems

| # | Problem | Difficulty | What it tests | Time Budget | Link |
|---|---------|-----------|---------------|-------------|------|
| - [ ] | **509. Fibonacci Number** | 🟢 Easy | Direct recursion + memoization (§72) | 15 min | [LeetCode ↗](https://leetcode.com/problems/fibonacci-number/) |
| - [ ] | **326. Power of Three** | 🟢 Easy | Tail recursion — divisibility recursively (§53) | 15 min | [LeetCode ↗](https://leetcode.com/problems/power-of-three/) |
| - [ ] | **344. Reverse String** | 🟢 Easy | Head recursion with two-pointer unwinding | 15 min | [LeetCode ↗](https://leetcode.com/problems/reverse-string/) |
| - [ ] | **70. Climbing Stairs** | 🟢 Easy | Tree recursion → memoization (Fibonacci variant, §72) | 20 min | [LeetCode ↗](https://leetcode.com/problems/climbing-stairs/) |
| - [ ] | **50. Pow(x, n)** | 🟡 Medium | Recursive fast-exponentiation (§65) | 25 min | [LeetCode ↗](https://leetcode.com/problems/powx-n/) |
| - [ ] | **779. K-th Symbol in Grammar** | 🟡 Medium | Tree recursion — build call tree and trace (§55) | 30 min | [LeetCode ↗](https://leetcode.com/problems/k-th-symbol-in-grammar/) |
| - [ ] | **1823. Find the Winner of the Circular Game** | 🟡 Medium | Indirect/nested recursion — Josephus (§57, §59) | 35 min | [LeetCode ↗](https://leetcode.com/problems/find-the-winner-of-the-circular-game/) |
| - [ ] | **91. Decode Ways** | 🟡 Medium | Tree recursion → memoization (§72 Fibonacci-style) | 40 min | [LeetCode ↗](https://leetcode.com/problems/decode-ways/) |

### 🔗 Stretch Problems (attempt after all core are done)

| # | Problem | Difficulty | Combines | Time Budget | Link |
|---|---------|-----------|----------|-------------|------|
| - [ ] | **241. Different Ways to Add Parentheses** | 🟡 Medium | Tree recursion + nCr style split (§74) | 40 min | [LeetCode ↗](https://leetcode.com/problems/different-ways-to-add-parentheses/) |
| - [ ] | **62. Unique Paths** | 🟡 Medium | Tree recursion → memoization grid (§72 + §74) | 30 min | [LeetCode ↗](https://leetcode.com/problems/unique-paths/) |

---

## ⚙️ How Things Run This Week

```
Workflow: Watch Abdul Bari video → close it → re-code from memory → then do LeetCode

Mon:  Videos 46–56 (How recursion works, tail/head/tree recursion)
      Re-code each → then LeetCode: 509 Fibonacci + 326 Power of Three

Tue:  Videos 57–66 (Indirect/Nested/Sum/Factorial/Power)
      Re-code → then LeetCode: 344 Reverse String + 70 Climbing Stairs

Wed:  ← REST DAY — no new material
      You can skim your notes from Mon/Tue

Thu:  Videos 72–75 (Fibonacci memoization + nCr) ⭐
      Re-code → then LeetCode: 50 Pow(x,n) + 779 K-th Symbol

Fri:  Videos 76–78 (Tower of Hanoi + Quiz) ⭐
      Re-code → then LeetCode: 1823 Circular Game + 91 Decode Ways

Sat:  Stretch problems (241, 62)
      Catch up on any missed videos

Sun:  Re-code 2 problems from memory (no looking at your old code)
      Commit everything, write LinkedIn post
      Set up next week’s plan
```

**CS50X:** None this week. You already did Week 1 in Week 0.

---

## 🏗️ Folder Structure After Week 1

```
dsa-journey/
├── c-cpp/
│   ├── week0-bridge/          ← already done
│   └── week1-recursion/
│       ├── tracing.cpp        ← from videos 46-52
│       ├── types.cpp          ← tail/head/tree/indirect/nested
│       ├── applications.cpp   ← factorial, fibonacci, power, nCr
│       └── tower_of_hanoi.cpp
├── cs50x/
│   └── week1-mario.c          ← already done
├── leetcode/
│   └── week1/
│       ├── 509_fibonacci.cpp
│       ├── 326_power_of_three.cpp
│       ├── 344_reverse_string.cpp
│       ├── 70_climbing_stairs.cpp
│       ├── 50_powx_n.cpp
│       ├── 779_kth_symbol.cpp
│       ├── 1823_circular_game.cpp
│       └── 91_decode_ways.cpp
└── notes/
    └── week1-notes.md
```

---

## 💾 Git Commit Examples

```
Day 8:  [Recursion] Tracing + tail/head/tree types re-coded
Day 9:  [Recursion] Fibonacci memoization from memory
Day 10: [Recursion] Tower of Hanoi — needed 3 attempts to get it right
Day 10: [LC] 509 Fibonacci (Easy) + 326 Power of Three (Easy)
Day 12: [LC] 50 Pow(x,n) (Medium) + 779 K-th Symbol (Medium)
Day 14: [LC] Week 1 stretch — 241 + 62
Day 14: Update progress tracker
```

---

## ✅ Week 1 Success Checklist

- [ ] All Abdul Bari §5 videos watched (skip Taylor Series if needed)
- [ ] Every video's "Let's Code" re-implemented from memory (not copied)
- [ ] All 8 core LeetCode problems attempted (not necessarily solved — attempted)
- [ ] At least 1 stretch problem done
- [ ] `notes/week1-notes.md` written — especially what tripped you on Tower of Hanoi
- [ ] Everything committed and pushed
- [ ] LinkedIn post drafted (even if you don't publish yet)

---

## 🌬️ Breathing Room

Wednesday is your rest day. Take it. Recursion is the kind of topic that your brain processes better when you give it a night to consolidate. If you feel behind on Friday, do the stretch problems next weekend — don't skip the rest day to catch up.

Tower of Hanoi taking 2–3 attempts to code from memory is completely normal. It means you're actually learning, not just transcribing.

---

## 📢 LinkedIn Post Template (Sunday/Monday)

> Week 1 of my DSA journey 🧵
>
> This week: Recursion — 8 problems solved, all of §5 re-coded from scratch.
>
> The one that actually made me think: [779. K-th Symbol in Grammar] — building the call tree on paper first was the only way I could trace what was happening. Reading code wasn't enough.
>
> Repo: [link]
>
> #DSA #100DaysOfCode #buildinpublic

---

*← [Week 0](week-0.md) · [Week 2 — Arrays →](week-2.md)*
