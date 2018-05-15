#include<stdio.h>

struct rect_tag{
    float left;
    float bottom;
    float top;
    float right;
};
typedef struct rect_tag rect_t;

float mininum(float f1, float f2){
    if(f1 < f2){
        return f1;
    }else{
        return f2;
    }
}

float maximum(float f1, float f2){
    if(f1 > f2){
        return f1;
    }else{
        return f2;
    }
}

rect_t intersection(rect_t r1, rect_t r2){
    rect_t ans;
    ans.left   = maximum(r1.left, r2.left);
    ans.bottom = maximum(r1.bottom, r2.bottom);
    ans.right  = mininum(r1.right, r2.right);
    ans.top    = mininum(r1.top, r2.top);
    return ans;
}

int main(){
    printf("test\n");
    return 0;
}
