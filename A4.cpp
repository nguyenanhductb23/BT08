#include <iostream>

using namespace std;

int main()  {
    char *ss = NULL;
    char **s = &ss;
    char foo[] = "Hello World";
    ss = foo;
    printf("s is %s\n",s);
    ss[0] = *foo;
    printf("s[0] is %s\n",s[0]);
    return(0);
}
