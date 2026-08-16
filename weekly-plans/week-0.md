# Week 0 — C/C++ Bridge + CS50X Week 1

> **Duration:** ~5–6 days · This is your runway. Don't rush it, it saves you pain for all 15 weeks ahead.

---

## 🎯 Target for This Week

By end of Week 0, you should be able to:
- Write and compile C code without confusion (not mastery — *comfort*)
- Understand pointers at a basic level (they'll deepen in Week 4)
- Use structs, pass by reference, and write basic functions in C
- Know how to convert a C program into a C++ class
- Have your dev environment ready (repo, folder structure, first commit)

---

## 📋 What to Do (in order)

### Day 1 — Environment + Abdul Bari §2 start

- [x] Set up your code editor (VSCode recommended) with C/C++ extensions
- [x] Create your `dsa-journey/` repo on GitHub — push first commit today
- [x] Watch **Abdul Bari §2: Arrays Basics** (Video 3, 6 min) + **Practice** (Video 4, 14 min)
  - Close the video. Re-code it from memory. File: `c-cpp/week0-bridge/arrays_basics.c`
- [x] Watch **Structures** (Video 5, 18 min) + **Practice** (Video 6, 11 min)
  - Close the video. Re-code it. File: `c-cpp/week0-bridge/structures.c`
- [x] **CS50X Week 1** lecture (watch selectively — compilation, data types, operators, overflow sections)
  - Link: [CS50X Week 1](https://cs50.harvard.edu/x/2024/weeks/1/)

### Day 2 — Pointers (this is the big one)

- [x] Watch **Pointers** (Video 7, 11 min) + **Practice** (Video 8, 15 min)
  - Re-code it. File: `c-cpp/week0-bridge/pointers.c`
- [x] Watch **Reference in C++** (Video 9, 4 min) + **Practice** (Video 10, 5 min)
  - Re-code it. File: `c-cpp/week0-bridge/references.cpp`
- [x] Watch **Pointer to Structure** (Video 11, 6 min) + **Practice** (Video 12, 7 min)
  - Re-code it. File: `c-cpp/week0-bridge/pointer_to_struct.c`

### Day 3 — Functions + Parameter Passing

- [x] Watch **Functions** (Video 13, 12 min) + **Practice** (Video 14, 6 min)
- [x] Watch **Parameter Passing Methods** (Video 15, 14 min) + **Practice** (Video 16, 11 min)
- [x] Watch **Array as Parameter** (Video 17, 7 min) + **Practice** (Video 18, 14 min)
- [x] Watch **Structure as Parameter** (Video 19, 11 min) + **Practice** (Video 20, 11 min)
  - Re-code all of these into: `c-cpp/week0-bridge/functions_and_params.c`

### Day 4 — C → C++ Conversion + OOP Basics

- [x] Watch **Structures and Functions** (Video 21, 5 min) — must watch
- [x] Watch **Converting a C program to a C++ class** (Video 22, 9 min) — must watch
- [x] Watch Practice Videos 23–26 (monolithic → modular → OOP progression)
- [x] Watch **C++ Class and Constructor** (Video 27, 10 min) + **Practice** (Video 28, 6 min)
- [x] Watch **Template classes** (Video 29, 11 min) + **Practice** (Video 30, 10 min)
  - Re-code: `c-cpp/week0-bridge/cpp_class.cpp`

### Day 5 — CS50X Problem + Setup Check

- [x] **CS50X Week 1 Problem**: Do either `mario` (loops/conditionals) or `credit` (Luhn's)
  - Link: [CS50X Problem Set 1](https://cs50.harvard.edu/x/2024/psets/1/)
  - File: `cs50x/week1-mario.c` (or `week1-credit.c`)
- [x] Commit everything from this week with proper format

### Day 6 (buffer / rest) — Choose one:

- [x] **Option A (Rest):** Take the day off. You earned it. Come back sharp.
- [ ] **Option B (Review):** Re-read your notes, fix any concepts that felt shaky
- [ ] Skim **Abdul Bari §4 Introduction** (Videos 39–45, ~1h 25min) lightly — this is context for the whole course, not deep-study

---

## ⚙️ How Things Run This Week

```
DAY 1-4: Abdul Bari §2 videos → close → re-code → commit  (parallel: CS50X W1 lecture)
DAY 5:   CS50X pset problem → commit
DAY 6:   Buffer or rest
```

**Nothing runs in parallel on the same day.** Abdul Bari §2 is your main thread this week. CS50X Week 1 is a supplement — watch it once, lightly. No LeetCode this week — intentional.

---

## 🏗️ Folder Structure After Week 0

```
dsa-journey/
├── README.md
├── c-cpp/
│   └── week0-bridge/
│       ├── arrays_basics.c
│       ├── structures.c
│       ├── pointers.c
│       ├── references.cpp
│       ├── pointer_to_struct.c
│       ├── functions_and_params.c
│       └── cpp_class.cpp
├── cs50x/
│   └── week1-mario.c
└── notes/
    └── week0-notes.md  Yet to do      ← 2–3 lines per concept that confused you
```

---

## 💾 Git Commit Examples This Week

```
Day 1: [Bridge] Arrays + Structures re-coded (Abdul Bari §2)
Day 2: [Bridge] Pointers + References from memory
Day 3: [Bridge] Parameter passing — all 4 methods
Day 4: [Bridge] C→C++ class conversion + templates
Day 5: [CS50X] Week 1 pset — mario completed
```

---

## ✅ Week 0 Success Checklist

- [x] All `c-cpp/week0-bridge/` files committed and pushed
- [ ] CS50X Week 1 pset done
- [ ] `notes/week0-notes.md` has at least 5 entries (one per thing that confused you)
- [x] Repo is live on GitHub with a proper README

---

## 🌬️ Breathing Room

This week has no LeetCode. On purpose. Getting your C/C++ footing solid *before* adding algorithm pressure is how you avoid the week-3 crash where everything feels like it's piling up. Take the buffer day seriously.

*Next: [Week 1 — Recursion →](week-1.md)*
