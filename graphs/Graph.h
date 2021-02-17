#pragma once
#include <queue>

// This file contains the definition of class     // GraphType that represents the Graph ADT.
template<class VertexType>
// Assumption: VertexType is a type for which the // "=", "==", and "<<" operators are defined
class GraphType
{
public:
    GraphType();                                   	// constructor, default of 50 vertices.
    GraphType(int maxV);                         	// parameterized constructor, maxV <= 50.
    ~GraphType();              				// destructor    
    void MakeEmpty();
    // Function: Initialize graph to the empty state.
    // Post: Graph is empty.

    bool IsEmpty() const;
    // Function: Determines if the graph is empty.
    // Post: Function value = (graph is empty)

    bool IsFull() const;
    // Function: Determines if the graph is full.
    // Post: Function value = (graph is full). 
    void AddVertex(VertexType);
    // Function: Adds vertex to the graph.
    // Pre:  Graph is not full.
    // Post: vertex is in V(graph)

    void AddEdge(VertexType, VertexType, int);
    // Function: Adds an edge with the specified
    // weight from fromVertex to toVertex.
// Pre:  fromVertex and toVertex are in V(graph)
    // Post: (fromVertex, toVertex) is in E(graph)
    // with the specified weight.
    int WeightIs(VertexType, VertexType);
    // Function: Determines the weight of the edge
    // from fromVertex to toVertex.
    // Pre:  fromVertex and toVertex are in V(graph)
    // Post: Function value = weight of 			//				(fromVertex, toVertex).
    void GetToVertices(VertexType, std::queue<VertexType>&);
    // Function: Returns a queue of the vertices
    // that are adjacent from vertex.
    // Pre:  vertex is in V(graph).
    // Post: vertexQ contains the names of all
    // the vertices that are heads of edges for 	// which vertex is the tail.    
    void ClearMarks();
    // Function: Sets marks for all vertices to 	// false.
    // Post:  All makrs have been set to false.
    void MarkVertex(VertexType);
    // Function: Sets mark for vertex to true.
    // Pre:  vertex is in V(graph).
    // Post: IsMarked(vertex) is true.
    bool IsMarked(VertexType) const;
    // Function: Determines if vertex has been 	// marked.
    // Pre:  vertex is in V(graph).
    // Post: Function value = (vertex is marked 	// true)
private:
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int edges[50][50];
    bool* marks;
    // marks[i] is mark for vertices[i].
};

#include "Graph.cpp"

