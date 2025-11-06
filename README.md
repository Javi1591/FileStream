# FileStream

A C++ console application project designed to demonstrate working with file input/output using file streams. Built using Visual Studio (or another C++ development environment) as part of a classroom assignment.

---

## Project Overview

This project covers these core concepts:

- Opening, reading from, and writing to files using `std::ifstream` and `std::ofstream`.  
- Working with `std::fstream` for combined input/output if needed.  
- Handling data files (text or binary) and processing their content (for example: reading numbers, strings, or records).  
- Validating file operations (checking if file opened successfully, handling end-of-file, closing streams).  
- Formatting output and/or appending data to files.  
- Organizing code into functions and using clear comments and error-checking.

---

## Features

- Prompt the user for a filename to read.  
- Read and display contents of the file (line by line or record by record).  
- Prompt the user for a filename (or the same file) to write/app end data.  
- Write user input (or generated data) into a file in a structured format.  
- Close the files properly and handle error cases (file not found, access denied).  
- Display summary information (e.g., number of lines read, total records processed) to the console.

---

## Technologies Used

- Language: C++ (compatible with C++11 or later)  
- IDE: Visual Studio 2019/2022 (or any compiler environment that supports C++)  
- Version Control: Git & GitHub  

---

## Getting Started

### Prerequisites

You will need a machine with a C++ compiler (Windows/Visual Studio preferred) and familiarity with basic C++ (variables, loops, functions, file IO).

### Clone the repository

```bash
git clone https://github.com/Javi1591/FileStream.git
cd FileStream
