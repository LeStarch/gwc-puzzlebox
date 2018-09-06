# Puzzle Box-3

Welcome to the third GWC puzzle box challenge. This challenge is
designed to teach you to put your ear to the digital ground and
see what information is there. Here you'll need to use deduction
to figure out what is useful information and what is not-so-useful.

## Program and Problem Space

This is a basic IP packet snooping game. Here you'll need to try and
determine what is useful and what is not within the space of the 
internet. Packets will fly by and you'll need to isolate the useful
information from the not-so-useful.

In this exercise, you are using the professional program used to snoop data.
You are isolated on a network with variouse computers talking about. Some of
those computers are not targets and others are. Try to track down the correct
computer, isolate the packet stream, and then view the data to extract secret
data. 

Remember:

- Explore the packets you can capture and the interfaces available.
- Patience. Hacking requires time.
- Try to use filters to reduce the data flow.
- Look for anything out-of-place and follow it.
- Think outside the box.
- Have no fear.

*Do NOT* be afraid to break the program, that is your job!

Good Luck!!

## A Note on the Real World

It would be inadvisable to run this program outside of a network you contol.
Although perfectly legal in this controlled environment, it is not legal to
snoop packets and data from others, especially on networks you do not control.
However, be aware that your data may always be snooped. Ensure you use HTTPS.

---
---

<div style="page-break-after: always;"></div>

## Hints and Tricks

There are several things to notice in order to solve this problem. First off
we need to understand the basics of our local internet. There are local and
non-local ip addresses. There are also different protocols to keep in mind.

*Local Addresses:* ip addresses consist of 4 numbers separated by "."'s. Local
addresses come in the form 192.168.X.X and 10.0.X.X and external addresses
come in a different forms. You should be looking for sources from a local
address and look for data going to a remote server. This is likely carrying
information you are interested in. Inbound data from an external source
to a local source may also be interesting.

*Protocols:* there are many different protocols in the internet space. The most
common for websites are "HTTP" and "TCP". You should safely ignore "UDP" and
"NTP" protocols.
