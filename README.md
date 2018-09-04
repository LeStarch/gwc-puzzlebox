Puzzle Box
==========

This repository contains code for GWC 2015-2016. This is the source code for a puzzle program designed to allow the GWC class to explore different ways to hack software.

**Note:** This software is designed with bugs in it.  That is the point. The class must exploit these bugs.  DO NOT run it in a production environment, and DO NOT emulate its quality.

This repository contains several different puzzles:

## puzzle-1: linux program exploitation

The puzzle box consists of a linux program that has several vulnerabilities. It is a simple passworded secret. Type the password, get the secret.

Files:

1. puzzle-box: a program riddled with bugs for the class to exploit. If the correct password is typed, it will print a hidden message. However, it can be exploited to reveal this secret without the password.

2. gen: a basic brute-force password generator

## puzzle-2: social engineering simulator

This puzzle consists of a basic login webpage. It does not have a series of faults like the puzzle-1, however; it does have weakly chosen passwords. To crack this puzzle, students should get-to-know their mentors and teachers in order to deduce the password.

## puzzle-3: web-page attack

This puzzle consists of basic HTML, and JS injection into a webpage in order to get it to reveal something it should not (aka side step the login).
