
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c,d,e,f,i,j=1;
    string s;
    cin>>c;
    cin.ignore();
    while(c--)
    {
       getline(cin,s);
        a=0,b=0;
        b=s.size();
        for(i=0;i<b;i++)
        {
            if(s[i]==' '||s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w')
            {
                a+=1;
            }
             if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
            {
                a+=2;
            }
             if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
            {
                a+=3;
            }
             if(s[i]=='s'||s[i]=='z')
            {
                a+=4;
            }
        }
    cout<<"Case #"<<j++<<": "<<a<<endl;
 }
    return 0;
}
