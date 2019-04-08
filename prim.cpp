#include "structures.hpp";


std::set<edge> Prim(vertex** p,std:size_t num_vertices)
{
    vertex c[num_vertices] ;
    vertex d[num_vertices] ; 

    C = new set<vertex>();

    for(vertex j = 1; j < num_vertices; j++)
    {
        C.insert(j);
        c[j] = 0;
        d[j] =p[0,j];
    } 

    S = new set<Edge>();


    while(!C.empty())
    {
        Vertex k;
        k = select(C,d);
        C.erase(k)
        S.insert(std::make_pair(c[k],k));
        for_each(C.begin(); C.end(),[p,k,C,d](Vertex const j&){ return j })
        {
            if(p[k,j]<d[j])
                c[j] = k;
                d[j] = p[k,j];
        }
    }
}