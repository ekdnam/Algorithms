Now to understand how A* works, first we need to understand a few terminologies:
Node (also called State) — All potential position or stops with a unique identification
Transition — The act of moving between states or nodes.
Starting Node — Whereto start searching
Goal Node — The target to stop searching.
Search Space — A collection of nodes, like all board positions of a board game
Cost — Numerical value (say distance, time, or financial expense) for the path from a node to another node.
g(n) — this represents the exact cost of the path from the starting node to any node n
h(n) — this represents the heuristic estimated cost from node n to the goal node.
f(n) — lowest cost in the neighboring node n
Each time A* enters a node, it calculates the cost, f(n)(n being the neighboring node), to travel to all of the neighboring nodes, and then enters the node with the lowest value of f(n).
These values we calculate using the following formula:
f(n) = g(n) + h(n)