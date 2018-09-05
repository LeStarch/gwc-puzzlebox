# Puzzle Box-1

Welcome to the first GWC puzzle box challenge. This challenge is
designed to teach you the mindset of a Hacker. Observation and 
experimentation is the key.  Look for that which is out of the
ordinary, prod odd behavior in the program, and think outside the
box.  Then you'll achive success.

## Program and Problem Space

This is a basic password checking program. Enter the password and
retreive the secret message. The password must be 6 characters long
and may contain letters and numbers. All you have to do is enter
the password, get the code phrase, and move on with your life.

However, *you don't have the password*.

What is a hacker to do?

Your goal should be to see what inputs you can enter into the program 
to get it to leak information. Leaked information is the key, and it
can come in many forms. Try lots of different inputs and see if you
can see odd or strange behavior.


Remember:

- Experiment with the program. Odd behavior means you are on the right track.
- Patience. Hacking requires time.
- Try to think of things the programmer might have missed.
- Look for anything out-of-palce
- Think outside the box.

*Do NOT* be afraid to break the program, that is your job!

## Rerunning the Program

You may destory the program in your attempts to break it. This is 
*good*. To rerun it, press CTRL-C (control and 'c' at the same time)
and then enter "./puzzle-box" (type "./puzzle-box" and press ENTER).

```
CTRL-C
...
./puzzle-box
```

Good Luck!!

---

<div style="page-break-after: always;"></div>

## Hints and Tricks

There are several standard attacks that can be used against this
program in order to reveal information that the programer did not
intend to give out. Here is a run down of some of those attacks.

Attacks:

1. *Timing Analysis:* many times, programs are written to stop
checking a condition once a "failure" has been detected. If the
program is checking password, it might halt at the first "wrong"
character. Try one character at a time, if the program runs longer
then that character may be correct.

2. *Buffer Overflow:* the all-star of hacks is the buffer overflow.
Try inputs that are longer than expected, and if the program isn't 
well written, memory might be leaked. Crashes are good, memory leaks
are better.

3. *Brute Force:* try every password.  One is bound to be correct. A
special utility is provided to help you with this one. Ask a teacher
for help running it, but in short:

### Try All Passwords Made of "a", "b", or "c" and 2-3 Chars Long
```
./gen "abc" 2 3 | ./puzzle-box 
```

