// Q139: Show that enums store integers by printing assigned values.

#include<stdio.h>
int main(){
    enum status{
        SUCCESS,
        FAILURE,
        TIMEOUT
    };
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}