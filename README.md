# File Line Numbers with Paging (Chapter 12)

A C++ console application that reads a text file specified by the user and displays its contents line by line with line numbers. The program pauses after every 24 lines, allowing the user to continue reading at their own pace. This exercise reinforces file I/O operations and stream control in C++.

## Overview
- Prompts the user to enter a filename.
- Attempts to open the file using an `ifstream`.
- Displays each line of text prefixed with a line number.
- After 24 lines, pauses and waits for the user to press Enter before continuing.
- Detects and handles empty files.
- Closes the file stream at the end of execution.

## Core Logic
- Uses a counter variable to track and print line numbers sequentially.
- Reads file contents using `getline()` for accurate line handling.
- After every 24 lines, invokes a pause prompt (`Press Enter to continue...`).
- Checks `ifstream.fail()` to handle invalid or missing file paths gracefully.
- Prints a message if the file is empty or cannot be opened.

## Input Validation
- Verifies that the filename entered exists and can be opened.
- Ensures the program continues only when the stream state is valid.
- Uses a loop to safely handle user input for filenames containing spaces.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o FileLineNumbers nazarioCPP212.cpp
  ./FileLineNumbers
