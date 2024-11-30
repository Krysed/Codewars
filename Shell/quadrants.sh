#!/bin/bash

# Task
# Given a point in a Euclidean plane (x and y), return the quadrant the point exists in: 1, 2, 3 or 4 (integer). x and y are non-zero integers, therefore the given point never lies on the axes.
# Examples

# (1, 2)     => 1
# (3, 5)     => 1
# (-10, 100) => 2
# (-1, -9)   => 3
# (19, -56)  => 4

: '
Parameters:
$1 - X coordinate
$2 - Y Coordinate
'
if [ $1 -gt 0 ];then
    if [ $2 -gt 0 ];then
        echo "1"
    else
        echo "4"
    fi
else
    if [ $2 -gt 0 ];then
        echo "2"
    else
        echo "3"
    fi
fi
