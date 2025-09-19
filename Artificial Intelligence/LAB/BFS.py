from collections import deque

graph = {
    'A': ['B', 'C', 'E'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F', 'G'],
    'D': ['B', 'E'],
    'E': ['A', 'B', 'D'],
    'F': ['C'],
    'G': ['C']
}
def bfs(graph, start, goal):
    visited = set()          
    parent = {}              
    queue = deque([start])   

    visited.add(start)
    parent[start] = None     
    traversal_order = []     
    while queue:
        node = queue.popleft()
        traversal_order.append(node)
        if node == goal:
            break
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                parent[neighbor] = node
                queue.append(neighbor)
    path = []
    if goal in parent:        
        cur = goal
        while cur is not None:
            path.append(cur)
            cur = parent[cur]
        path.reverse()
    return traversal_order, path
if __name__ == "__main__":
    start_node = 'A'
    goal_node = 'D'
    order, path = bfs(graph, start_node, goal_node)
    print("BFS Traversal Order:", order)
    print(f"Shortest path from {start_node} to {goal_node}:", path)
    order, path = bfs(graph,"A", "F")
    print("BFS Traversal Order:", order)
    print(f"Shortest path from {"A"} to {"F"}:", path)










































from collections import deque
map = {
    'Arad': ['Zerind', 'Timisoara', 'Sibiu'],
    'Zerind': ['Arad', 'Oradea'],
    'Oradea': ['Zerind', 'Sibiu'],
    'Sibiu': ['Arad', 'Oradea', 'Fagaras', 'Rimnicu Vilcea'],
    'Timisoara': ['Arad', 'Lugoj'],
    'Lugoj': ['Timisoara', 'Mehadia'],
    'Mehadia': ['Lugoj', 'Drobeta'],
    'Drobeta': ['Mehadia', 'Craiova'],
    'Craiova': ['Drobeta', 'Rimnicu Vilcea', 'Pitesti'],
    'Rimnicu Vilcea': ['Sibiu', 'Craiova', 'Pitesti'],
    'Fagaras': ['Sibiu', 'Bucharest'],
    'Pitesti': ['Rimnicu Vilcea', 'Craiova', 'Bucharest'],
    'Bucharest': ['Fagaras', 'Pitesti', 'Giurgiu', 'Urziceni'],
    'Giurgiu': ['Bucharest'],
    'Urziceni': ['Bucharest', 'Hirsova', 'Vaslui'],
    'Hirsova': ['Urziceni', 'Eforie'],
    'Eforie': ['Hirsova'],
    'Vaslui': ['Urziceni', 'Iasi'],
    'Iasi': ['Vaslui', 'Neamt'],
    'Neamt': ['Iasi']
}

def bfs(graph, start, goal):
    visited = set()
    parent = {}
    queue = deque([start])
    visited.add(start)
    parent[start] = None
    traversal_order = []
    while queue:
        node = queue.popleft()
        traversal_order.append(node)
        if node == goal:
            break
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                parent[neighbor] = node
                queue.append(neighbor)
    path = []
    if goal in parent:
        cur = goal
        while cur is not None:
            path.append(cur)
            cur = parent[cur]
        path.reverse()
    return traversal_order, path
if __name__ == "__main__":
    start_city = "Arad"
    goal_city = "Bucharest"
    order, path = bfs(map, start_city, goal_city)
    print("BFS Traversal Order:", order)
    print(f"Path from {start_city} to {goal_city}:", path)

























from collections import deque

def solve_maze_bfs():
    maze = [
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 1, 0, 0],
        [0, 1, 0, 0, 0, 1, 0, 0],
        [0, 1, 1, 1, 0, 1, 1, 0],
        [0, 0, 0, 1, 0, 0, 1, 0],
        [0, 1, 1, 1, 0, 1, 1, 0],
        [0, 1, 0, 0, 0, 1, 0, 0],
        [0, 1, 1, 1, 1, 1, 0, 0]
    ]
    start = (3, 3)
    goal = (1, 5)
    queue = deque([start])
    visited = {start: None}
    movements = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path_found = False
    while queue:
        current_node = queue.popleft()

        if current_node == goal:
            path_found = True
            break
        for move_row, move_col in movements:
            next_row, next_col = current_node[0] + move_row, current_node[1] + move_col
            if 0 <= next_row < len(maze) and 0 <= next_col < len(maze[0]):
                # Check if it's a path and hasn't been visited yet
                if maze[next_row][next_col] == 1 and (next_row, next_col) not in visited:
                    next_node = (next_row, next_col)
                    queue.append(next_node)
                    visited[next_node] = current_node 
    if path_found:
        path = []
        node = goal
        while node is not None:
            path.append(node)
            node = visited.get(node)
        path.reverse()
        print("Path found from start to goal:")
        print(path)
    else:
        print("No path found.")
solve_maze_bfs()



