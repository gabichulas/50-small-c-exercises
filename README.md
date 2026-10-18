# 50 Small C Exercises

This is my personal fork of the 50 small C exercises repository.

Full credit for the original structure, exercise concepts, and testing suite goes to the [original author](https://github.com/LilTaiga/50-small-c-exercises).

## Requirements

- A C Compiler
- Make
- Linux or Mac

## How to work with this repo

Exercises are located in [`./exercises/`](./exercises/). Each exercise is accompanied by an `.md` file, which explains the problem in detail and provides test cases. The goal is to implement the corresponding function in each `.c` file. 
Each `.c` file also contains a `main` function that you can use to play around and test your code before running the actual test suite.

> [!TIP]
> If you're feeling bold, try doing each exercise without reading the `.md` first.

Here are the commands you need:

```bash
make run N=1        # Run your main function in exercise 1
make test N=1       # Run the tests for exercise 1
