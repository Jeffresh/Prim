
#include<pair>;
#include<set>;
#include<iostream>;
#include<utility>;
#include<limits>;


typedef int Vertex;
typedef std::pair<int,int> Edge;

Vertex** P;
std::set<vertex> C;
std::set<Edge> S;

Vertex* select(const std::set<vertex>& C, const Vertex& d)
{
    int v = std::numeric_limits<int>::max(); // v equals to infinite
     for_each(C.begin(); C.end(),[d](Vertex const j&){ return j })
        {
            if(d[j]<v)
                v = d[j];
                k = j;
        } 
}



