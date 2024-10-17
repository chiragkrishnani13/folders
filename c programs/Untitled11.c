
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int charArray[10] = {0};
    char ch[1000];
    gets(ch);
    int n = strlen(ch);
    for(int i = 0;i<n;i++)
    {
        switch (ch[i]) {
        case '0':charArray[0]++;break;
        case '1':charArray[1]++;break;
        case '2':charArray[2]++;break;
        case '3':charArray[3]++;break;
        case '4':charArray[4]++;break;
        case '5':charArray[5]++;break;
        case '6':charArray[6]++;break;
        case '7':charArray[7]++;break;
        case '8':charArray[8]++;break;
        case '9':charArray[9]++;break;


        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",charArray[i]);
    }


    return 0;
}
