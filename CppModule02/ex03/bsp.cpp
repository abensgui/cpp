#include "Point.hpp"
float ft_abs(float x)
{
   if(x < 0)
      return(-x);
   return(x);
}

float ft_edge(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return  ft_abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) ;
}

float ft_area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return ft_abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
   if(!ft_edge(a.getX(), a.getY(), b.getX(), b.getY(), p.getX(), p.getY()))
      return (0);
   if(!ft_edge(a.getX(), a.getY(), p.getX(), p.getY(), c.getX(), c.getY()))
      return (0);
   if(!ft_edge(c.getX(), c.getY(), p.getX(), p.getY(), b.getX(), b.getY()))
      return (0);
   float abc = ft_area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
   float pbc = ft_area(p.getX(), p.getY(), b.getX(), b.getY(), c.getX(), c.getY());
   float apc = ft_area(a.getX(), a.getY(), p.getX(), p.getY(), c.getX(), c.getY());
   float abp = ft_area(a.getX(), a.getY(), b.getX(), b.getY(), p.getX(), p.getY());
   return(abc == pbc + apc + abp);
}