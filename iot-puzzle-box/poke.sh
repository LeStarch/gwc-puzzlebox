#!/bin/sh
IP="http://192.168.4.1"
while [ 0 ]
do
    # Turn on
    for team in 1 2 3
    do
         curl "${IP}/team${team}/on" > /dev/null 2> /dev/null
         sleep 1
    done
    sleep 1
    # Turn off
    for team in 1 2 3
    do
         curl "${IP}/team${team}/off" > /dev/null 2> /dev/null
         sleep 1
    done
    # Wait
    sleep 20
done
