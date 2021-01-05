#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char s1[22], s2[22], s[22];

    cin>>n;
    cin>>s1;
    cin>>s2;
    if(strlen(s1) < strlen(s2)) swap(s1, s2);
    n -= 2;
    while(n)
        {
            cin>>s;
            if(strlen(s) > strlen(s1))
                {
                    strcpy(s2, s1);
                    strcpy(s1, s);
                }
            else if(strlen(s) > strlen(s2))
                {
                    strcpy(s2, s);
                }
            n--;
        }
    cout<<"Cel mai mare cuvant compus: "<<s1<<s2<<" sau "<<s2<<s1;
}
