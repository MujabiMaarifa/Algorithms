#implementing bfs in python

graph = {
        'A' : ['B', 'C'],
        'B' : ['D', 'E', 'F'],
        'C' : ['G'],
        'D' : [],
        'E' : [],
        'F' : ['H'],
        'G' : ['I'],
        'H' : [],
        'I' : []
        }

def bfs(graph, node):
    visited = []
    queue = []

    #for the root node we mark it as visited and add it to the queue
    visited.append(node)
    queue.append(node)

    while queue:
        s = queue.pop(0)
        print(s, end= " ")

        for n in graph[s]:
            if n not in visited:
                visited.append(n)
                queue.append(n)

if __name__== "__main__":
    bfs(graph, 'A')
