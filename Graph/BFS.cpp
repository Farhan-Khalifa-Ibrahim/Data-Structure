#include "Graph.h"
#include "queue.h"

using namespace std;

void bfsTraversal_helper(Graph g, int source, bool *visited, string &result)
{

    //Create Queue(Implemented in previous chapters) for Breadth First Traversal and enqueue source in it
    myQueue queue(g.getVertices());

    queue.enqueue(source);
    visited[source] = true;
    int current_node;
    //Traverse while queue is not empty
    while (!queue.isEmpty())
    {

        //Dequeue a vertex/node from queue and add it to result
        current_node = queue.dequeue();

        result += to_string(current_node);

        //Get adjacent vertices to the current_node from the array,
        //and if they are not already visited then enqueue them in the Queue
        Node *temp = (g.getArray())[current_node].getHead();

        while (temp != NULL)
        {

            if (!visited[temp->data])
            {
                queue.enqueue(temp->data);
                visited[temp->data] = true; //Visit the current Node
            }
            temp = temp->nextElement;
        }
    } //end of while
}

string bfsTraversal(Graph g)
{
    string result = "";

    //Bool Array to hold the history of visited nodes
    //Make a node visited whenever you push it into stack
    bool *visited = new bool[g.getVertices()];
    for (int i = 0; i < g.getVertices(); i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < g.getVertices(); i++)
    {
        if (!visited[i])
            bfsTraversal_helper(g, i, visited, result);
    }

    delete visited;
    visited = NULL;

    return result;
}