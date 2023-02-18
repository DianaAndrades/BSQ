# BSQ

## AUTHORIZED FUNCTIONS

The only system calls allowed are the following ones:
* open
* read
* write
* close
* malloc
* free
* stat

## THE PROJECT

You must find the largest possible square on a board while avoiding obstacles. The board is represented by a file passed as the program’s argument. The file is valid if it is respecting those constraints:

* its first line contains the number of lines on the board (and only that)
* “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for theother lines
* all of the lines are of the same length (except the first one)
* it contains at least one line
* each line is terminated by ‘\n’.You program must print the board, with some “.” replaced by “x” to represent the largest square you found

> If ever there are several solutions, you have to represent only the highest square. If they are still several solutions, choose the square to the left.

### MAP FORMAT

* There are exemples in ```examples_maps``` directory.
* The number of the first line is the number of lines in the map.
* The map is only made of ```.``` (empty) and ```o``` (obstacles) symbols.
* All lines have the same size.
* The last line must be an empty line.


### USAGE

Compilation

```
>> make
```
Execution

```
>> ./bsq examples_maps/[PATH_MAP]
```

### EXAMPLE

```
>> cat -e examples_maps/[PATH_MAP]
4$
. . . o o .$
o o . . . .$
. o . . o o$
o o . o . o$

>> ./bsq examples_maps/[PATH_MAP]
. . . o o .
o o x x . .
. o x x o o
o o . o . o
```

## GENERATING OWN MAP

The second way to obtain a board is to generate one based on given parameters. The parameters will be
a number, representing the width and height of the board, and a pattern that will be repeated line by line along the board.
You will print the solved board.

### MAP FORMAT

* The first parameter: a number that represents the width and height of the board.
* The second parameter: pattern that will be repeated line by line along the board.

### EXAMPLE

```
>> ./bsq 10 "...ooo..."
...oooxxx.
..ooo.xxx.
.ooo..xxx.
ooo......o
oo......oo
o......ooo
......ooo.
.....ooo..
....ooo...
...ooo....
```