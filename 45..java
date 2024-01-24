import java.util.LinkedList;
import java.util.Queue;

public class BFSExample {

    public void bfs(int[][] graph, int start) {
        int vertices = graph.length;
        boolean[] visited = new boolean[vertices];
        
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        visited[start] = true;

        while (!queue.isEmpty()) {
            int currentVertex = queue.poll();
            System.out.print(currentVertex + " ");

            for (int i = 0; i < vertices; i++) {
                if (graph[currentVertex][i] == 1 && !visited[i]) {
                    queue.add(i);
                    visited[i] = true;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[][] graph = {
            {0, 1, 1, 0, 0},
            {1, 0, 0, 1, 1},
            {1, 0, 0, 0, 1},
            {0, 1, 0, 0, 0},
            {0, 1, 1, 0, 0}
        };

        BFSExample bfsExample = new BFSExample();
        System.out.print("BFS Traversal: ");
        bfsExample.bfs(graph, 0);
    }
}
