# C++ Programming Fundamentals

A complete archive of programs written during my **1st semester Programming Fundamentals course** (BSCS, IMSciences Peshawar). The course ran from September 2025 to January 2026 using **Dev-C++** as the IDE.

This repository covers the full progression from basic syntax all the way through pointers and 2D arrays, plus several mini-projects built along the way.

---

## Repository Structure

```
cpp-fundamentals/
├── 01_basics/                   → Variables, data types, operators, I/O
├── 02_control_flow/             → if/else, nested if, switch statements
├── 03_loops_and_patterns/       → while, for, do-while, star/number patterns
├── 04_functions/                → User-defined functions, recursion, math
├── 05_arrays_and_search_sort/   → 1D arrays, linear search, bubble & selection sort
├── 06_2d_arrays_and_matrices/   → 2D/3D arrays, matrix operations
├── 07_pointers/                 → Pointer basics, pointer arithmetic
└── 08_projects/                 → Complete mini-programs
```

---

## Contents

### 01 — Basics
| File | Description |
|---|---|
| `hello_world.cpp` | First C++ program |
| `user_input_and_sum.cpp` | Reading two integers and printing their sum |
| `data_types_bool.cpp` | Boolean data type |
| `data_types_char_ascii.cpp` | Char type and ASCII values |
| `data_types_string.cpp` | String declaration |
| `data_types_auto_keyword.cpp` | `auto` keyword for type inference |
| `data_types_cost_calculator.cpp` | Using int, float, double, char together |
| `arithmetic_operators.cpp` | +, -, *, /, %, ++, -- |
| `assignment_operators.cpp` | +=, -= and compound assignment |
| `cmath_functions.cpp` | round(), sqrt(), log() from `<cmath>` |
| `string_getline_input.cpp` | Reading full-line string with `getline` |
| `average_of_ten_numbers.cpp` | Computing average of 10 hardcoded numbers |
| `temperature_conversion_celsius_fahrenheit.cpp` | C↔F conversion formulas |
| `seconds_to_hours_minutes.cpp` | Converting seconds into hours and minutes |
| `extract_digits_of_number.cpp` | Extracting individual digits using % and / |
| `reverse_three_digit_number.cpp` | Reversing a 3-digit integer |
| `gallons_to_liters_conversion.cpp` | Unit conversion: gallons → litres |

### 02 — Control Flow
| File | Description |
|---|---|
| `grade_calculator_nested_if.cpp` | Grade system using nested if |
| `grade_calculator_if_else.cpp` | Grade system using if-else chain |
| `grade_with_switch.cpp` | Grade system using switch on marks/10 |
| `temperature_classifier.cpp` | Classifies temp as Freezing/Cold/Moderate/Hot |
| `leap_year_checker.cpp` | Checks divisibility by 400, 100, 4 |
| `odd_even_checker.cpp` | Determines if a number is odd or even |
| `decibel_loudness_classifier.cpp` | Classifies sound level in decibels |
| `cartesian_quadrant_finder.cpp` | Identifies quadrant from (x, y) coordinates |
| `eligibility_checker.cpp` | Checks eligibility based on gender, age, marital status |
| `age_category_and_voting_eligibility.cpp` | Child/Teenager/Adult + voting eligibility |
| `membership_discount_system.cpp` | Discount tiers based on membership and purchase amount |
| `compare_two_subject_marks.cpp` | Prints which subject had higher marks |
| `switch_char_input.cpp` | Basic switch on character input A/B/C |
| `switch_tv_model_features.cpp` | Fall-through switch for TV model features |
| `vowel_or_consonant_checker.cpp` | Identifies vowels vs consonants via switch |
| `subject_marks_display_switch.cpp` | Switch-based subject marks menu |

### 03 — Loops and Patterns
| File | Description |
|---|---|
| `while_loop_basic.cpp` | Counting loop with while |
| `while_loop_thermostat.cpp` | Real-world while loop: temperature monitor |
| `for_loop_with_break.cpp` | For loop with break statement |
| `do_while_average_scores.cpp` | Repeatable average calculator using do-while |
| `multiplication_table_single.cpp` | Prints table for any entered number |
| `multiplication_table_full_1_to_10.cpp` | Full 10×10 multiplication table |
| `print_odd_numbers.cpp` | Prints odd numbers up to 30 |
| `divisible_by_3.cpp` | Numbers divisible by 3 up to 30 |
| `divisible_by_3_skip_5.cpp` | Divisible by 3, skipping multiples of 5 |
| `squares_of_odd_numbers.cpp` | Squares of odd numbers up to N |
| `sum_of_squares.cpp` | Cumulative sum of squares |
| `prime_checker_loop.cpp` | Checks if a number is prime |
| `prime_numbers_up_to_n.cpp` | Lists all primes up to N |
| `star_rectangle_pattern.cpp` | 4×5 star rectangle |
| `star_right_triangle_pattern.cpp` | Right-angled star triangle |
| `star_odd_pyramid_pattern.cpp` | Stars in odd-number rows |
| `star_rectangle_hollow_pattern.cpp` | Hollow 5×5 star rectangle |
| `number_inverted_triangle_pattern.cpp` | Number inverted triangle |
| `number_staircase_pattern.cpp` | Staircase number pattern with spacing |
| `fibonacci_series.cpp` | First N terms of Fibonacci sequence |
| `factorial_calculator.cpp` | Interactive factorial with repeat option |
| `digit_sum_of_number.cpp` | Sums all digits of an integer |

### 04 — Functions
| File | Description |
|---|---|
| `arithmetic_functions.cpp` | Separate functions for +, -, *, / |
| `factorial_function.cpp` | Factorial via a separate function |
| `average_using_functions.cpp` | Average computed through function calls |
| `binomial_coefficient.cpp` | nCr = n! / (r! × (n-r)!) |

### 05 — Arrays, Searching & Sorting
| File | Description |
|---|---|
| `quiz_scores_average.cpp` | Reads 10 quiz scores and calculates average |
| `element_wise_array_multiplication.cpp` | Multiplies two arrays element by element |
| `find_smallest_in_array.cpp` | Finds smallest element and its index |
| `reverse_array.cpp` | Reverses an array in-place |
| `linear_search.cpp` | Linear search returning index |
| `bubble_sort.cpp` | Bubble sort implementation |
| `selection_sort.cpp` | Selection sort implementation |
| `array_stats_positive_negative_min.cpp` | Sum/avg of positives, count negatives, min value |
| `shift_max_to_left.cpp` | Moves the maximum element to index 0 |
| `longest_consecutive_sequence.cpp` | Finds longest consecutively increasing subsequence |
| `number_guess_with_array.cpp` | Checks if guessed number exists in a preset array |
| `swap_max_and_min.cpp` | Swaps maximum and minimum elements |
| `array_intersection.cpp` | Finds common elements between two arrays |

### 06 — 2D Arrays & Matrices
| File | Description |
|---|---|
| `2d_array_input_display.cpp` | 6×6 2D array input and formatted display |
| `char_array_search_count.cpp` | Counts occurrences of a character in a char array |
| `student_quiz_best_worst.cpp` | 5 students × 10 quizzes; finds best and worst |
| `2d_array_binary_toggle.cpp` | Toggles 0↔1 in a 3×3 binary matrix |
| `3d_array_binary_toggle.cpp` | Toggles 0↔1 in a 3×3×3 binary array |
| `matrix_multiplication.cpp` | Multiplies two 3×3 matrices |
| `yearly_budget_array_declaration.cpp` | 15×12 float array for monthly budget tracking |

### 07 — Pointers
| File | Description |
|---|---|
| `pointer_basics.cpp` | Declaring a pointer, dereferencing, modifying value |
| `pointer_array_traversal.cpp` | Traversing an array forwards and backwards using a pointer |

### 08 — Projects
| File | Description |
|---|---|
| `atm_machine.cpp` | ATM simulator: check balance, deposit, withdraw |
| `calculator_switch.cpp` | Calculator using switch and character choice |
| `calculator_while_loop.cpp` | Repeatable calculator using while loop |
| `number_guessing_game.cpp` | Guess a number 1–30 with high/low hints |
| `geometry_area_perimeter_menu.cpp` | Menu-driven area/perimeter for square, rectangle, circle |
| `vending_machine.cpp` | Two-level nested switch vending machine |
| `restaurant_bill_calculator.cpp` | Calculates meal cost with tax and tip |
| `electricity_bill_calculator.cpp` | Electricity bill with unpaid balance and meter readings |

---

## Skills Covered

- Variables, data types, type conversion
- Arithmetic, relational, logical, and bitwise operators  
- Conditional statements (if / else if / else / nested if / switch)
- Loops (while, do-while, for) and loop control (break, continue)
- Nested loops and star/number pattern printing
- Functions (void, return types, function prototypes)
- Arrays (1D): declaration, traversal, searching, sorting
- Arrays (2D/3D): input, display, matrix operations
- Pointers: declaration, dereferencing, pointer arithmetic

---

## Tools Used

- **Language:** C++ (C++11/14)
- **IDE:** Dev-C++ 5.x
- **Platform:** Windows
