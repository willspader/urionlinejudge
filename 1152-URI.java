import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    static class Edge {
        int source;
        int destination;
        int weight;

        public Edge(int source, int destination, int weight) {
            this.source = source;
            this.destination = destination;
            this.weight = weight;
        }
    }

    static class Graph {
        int V;
        LinkedList<Edge> adjListArray[];

        Graph (int v) {
            this.V = v;
            adjListArray = new LinkedList[V]; 

            for(int i = 0; i < V ; i++){ 
                adjListArray[i] = new LinkedList<>(); 
            }
        }

        public void addEgde(int source, int destination, int weight) {
            Edge edge = new Edge(source, destination, weight);
            adjListArray[source].addFirst(edge);
        }
    }

    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String line = in.readLine();
        String[] strs = line.trim().split("\\s+");
        int m = Integer.parseInt(strs[0]);
        int n = Integer.parseInt(strs[1]);

        for (int i = 0; i < n; i++) {
            line = in.readLine();
            strs = line.trim().split("\\s+");
        }
    }
    
}