#include<stdio.h>
#include <string.h>

void reverseString(char* s,int from, int to){
    while(from < to){
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

int main(){
    char chPtr[] = "I am a student.";
    int len = strlen(chPtr);
    reverseString(chPtr,0,len-1);
    printf("%s\n",chPtr);

    int start = 0, end = 0;
    while(chPtr[end] != '\0'){
        if(chPtr[end] == ' '){
            reverseString(chPtr,start,end-1);
            start = end + 1;
        }
        end++;
    }

    printf("%s\n",chPtr);
    return 0;
}
