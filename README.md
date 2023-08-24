# Fundamentals-Computer-and-Programming-P3
Third Project Computer and Programming Fundamentals

More info in pdf file Attached

جدول سودوکو

جدول سودوکو چیست؟
جدول سودوکو یک جدول ژاپنیست که به آن جدول اعداد متقاطع هم گفته میشود. این جدول یک جدول مربعی شکل است که از 9
سطر و 9 ستون تشکیل شده است. از طرفی به 9 مربع مساوی هم تقسیم شده بطوریکه مربعهای 3 در 3 داخلی در دل مربع اصلی قرار
دارند که به آنها بلوک گفته میشود.

  





http://mokhi.ir/ai/sudoku/code/sudoku.txt

http://dryicons.com/blog/2009/08/14/a-simple-algorithm-for-generating-sudoku-puzzles/

https://fa.wikipedia.org/wiki/%D8%B3%D9%88%D8%AF%D9%88%DA%A9%D9%88

https://en.wikipedia.org/wiki/Sudoku

https://www.websudoku.com/


# Sudoku Game
## Overview
This is a C++ implementation of a text-based Sudoku game. The program generates a partially filled 9x9 Sudoku board that the user tries to solve.

The rules of Sudoku apply - each row, column, and 3x3 box must contain the digits 1-9 without repeating.

The game provides guidance by analyzing open cells and identifying candidates with only one possible value. The user can also erase numbers, unless they are part of the original generated puzzle.

The game ends when the board is completely solved.

## Code Files
### Sudoku.cpp

+ Main game logic and flow

+ Game loop, input/output, win condition checks

### guidence()

+ Analyzes board to find cells with only one legal value
+ Provides next move hints to user

### **checkkol()**

+ Validates if final board is fully solved
+ Checks rows, columns and 3x3 boxes

## a[][]

+ 9x9 array representing Sudoku board
## k[][]

+ Copy of original board to track immutable cells
## Key Concepts
+ 2D arrays
+ Functions
+ Loops, conditionals
+ Console input/output
+ Random number generation
## Usage
+ Compile and run Sudoku.cpp
+ Follow console prompts to play game
## Potential Enhancements
+ Difficulty levels
+ Improved UI and graphics
+ Variable board sizes
+ Solve display
+ Scoring system
+ Custom starting boards
