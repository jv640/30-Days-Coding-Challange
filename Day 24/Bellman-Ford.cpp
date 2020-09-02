/*
  Dijkstra doesn’t work for Graphs with negative weight edges, Bellman-Ford works for such graphs. 
  Bellman-Ford is also simpler than Dijkstra and suites well for distributed systems. 
  But time complexity of Bellman-Ford is O(VE), which is more than Dijkstra.
*/
