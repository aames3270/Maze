# Maze Generator

## Description

This program generates a random maze using a recursive backtracking algorithm. The maze consists of walls (`#`) and open paths (` `), with designated start (`S`) and end (`E`) points.

## Features

- Generates a random 21x21 maze.
- Uses recursive backtracking for maze generation.
- Ensures a valid path from the start (`S`) to the end (`E`).
- Prints the generated maze to the console.

## Compilation and Execution

### Requirements
- C++ compiler (G++ or Clang)
- C++11 or newer standard

### Compile

```sh
g++ -o maze main.cpp
```

### Running the Program

```sh
./maze
```

## Code Overview

- maze[][]: 2D vector representing the maze.
- carveMaze(x, y): Recursive function to create paths.
- generateMaze(): Initializes the maze and places start and end points.
- printMaze(): Prints the maze to the console.

## Way it works

1. initialize the grid with walls (#).
2. Use recursive backtracking to carve out paths.
3. Mark the start (S) and end (E) positions.
4. Print the maze.

## Example Output

```shell
#####################
#S  # #       #     #
### # # ##### # # ###
# # #   #   #   #   #
# # ### # # ##### # #
# #   #   # #   # # #
# ### ####### # ### #
#   #         #   # #
### ############# # #
#     #         #   #
# ##### # # ####### #
# #   # # # #       #
# # # # # ### #######
#   # # #     #     #
# ### # ########### #
# #   #     #     # #
# # # ##### # ### # #
# # # #     # # #   #
# # ### ##### # ### #
# #           #    E#
#####################
```

