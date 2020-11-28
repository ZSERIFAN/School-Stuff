#include <iostream>
#include <cstring>
using namespace std;

char s[256];

bool lit(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int lmax()
{
    int i = 0;
    int cnt = 0 , cntmax=0;
    bool ok = false , okk=true;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            if(cnt > cntmax && ok)
                cntmax=cnt;
            cnt = 0 , ok = 0;
        }
        else
        {
            cnt++;
            if(lit(s[i]))
                ok=true;
        }
        i++;
        if(s[i]=='\0' && okk)
            s[i]=' ' , s[i+1]='\0' , okk=false;
    }
    return cntmax;
}

void afisare()
{
    int i = 0;
    int cnt = 0 , cntmax = lmax();
    bool ok = false , okk = true;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            if(cnt == cntmax && ok)
            {
                for(int j = i - 1 ; j >= i - cnt ; --j)
                    cout << s[j];
                cout << ' ';
            }
            else
            {
                for(int j = i - cnt ; j <= i ; ++j)
                    cout << s[j];
                //cout << ' ';
            }
            cnt = 0 , ok = 0;
        }
        else
        {
            cnt++;
            if(lit(s[i]))
                ok=true;
        }
        i++;
        if(s[i]=='\0' && okk)
            s[i]=' ' , s[i+1]='\0' , okk=false;
    }
}

int main()
{
    cin.getline(s , 256);
    afisare();
    return 0;
}