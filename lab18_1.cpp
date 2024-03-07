#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap( Rect R1, Rect R2 ){
    double A = 0.0;
    double B = 0.0;
    if(R1.x+R1.w >= R2.x){
        
            if(R2.x+R2.w <= R1.x+R1.w){
                A = R2.w;
            }else{
                A = R1.x+R1.w-R2.x;
            }
            
        
    }
    if(R1.y+R1.h >= R2.y){
        
            if(R2.y+R2.h <= R1.y+R1.h){
                B = R2.h;
            }else{
                B = R1.y+R1.h-R2.y;
            }
    
    }
    
    
    return A*B;
}