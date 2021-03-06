#include "Graph.h"
#include "stack.h"

using namespace std;
void dfs_helper(Graph g, int source, bool *visited, string &result)
{

    //Create Stack(Implemented in previous chapters) for Depth First Traversal and Push source in it
    myStack stack(g.getVertices());

    stack.push(source);
    visited[source] = true;
    int current_node;
    Node *temp;
    //Traverse while stack is not empty
    while (!stack.isEmpty())
    {

        //Pop a vertex/node from stack and add it to the result
        current_node = stack.pop();
        result += to_string(current_node);

        //Get adjacent vertices to the current_node from the array,
        //and if they are not already visited then push them in the stack
        temp = (g.getArray())[current_node].getHead();

        while (temp != NULL)
        {

            if (!visited[temp->data])
            {
                stack.push(temp->data);
                //Visit the node
                visited[temp->data] = true;
            }
            temp = temp->nextElement;
        }
    } //end of while
    //return result;
}

string dfsTraversal(Graph g)
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
            dfs_helper(g, i, visited, result);
    }
    return result;
}
