#include <stdio.h>
#include <stdlib.h>

int hoge;

int main(int argc, char* argv[]) {
    char buf[256];
    printf("&hoge...%p\n",(void*)&hoge);

    printf("input initial value.\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf,"%d",&hoge);

    for(;;){
        printf("hoge..%d\n",hoge);
        getchar();
        hoge++;
    }
    return EXIT_SUCCESS;
}
