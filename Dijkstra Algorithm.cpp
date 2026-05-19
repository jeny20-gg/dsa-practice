PROBLEM : Dijkstra Algorithm
PLATFORM : GeeksforGeeks
DIFFICULTY : Medium



class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>> adj(V);
        for(auto e:edges) {
            int u=e[0];
            int v=e[1];
            int w=e[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<int> dist(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty()) {
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(dis>dist[node]) continue;
            for(auto neigh:adj[node]) {
                int adjnode=neigh.first;
                int edgewt=neigh.second;
                if(dis+edgewt<dist[adjnode]) {
                    dist[adjnode]=dis+edgewt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};