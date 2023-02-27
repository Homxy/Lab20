#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
    double p1=max(r1->x, r2->x);
    double p2=min(r1->x+r1->w, r2->x+r2->w);
    double p3=max(r1->y-r1->h, r2->y-r2->h);
    double p4=min(r1->y, r2->y);
    
    double area = (p2-p1)*(p4-p3);
    
    if(area>0){
        return area;
    }
    else{
        return 0;
    }
}
