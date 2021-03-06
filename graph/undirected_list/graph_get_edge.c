#include "graph.h"

bool graph_get_edge(t_graph *graph, unsigned int vertex1, unsigned int vertex2)
{
	if (!graph || vertex1 >= graph->size || vertex2 >= graph->size)
		return (false);
	return (find_list(graph->list[vertex1], vertex2));
}
