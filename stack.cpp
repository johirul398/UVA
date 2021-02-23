#include<bits/stdc++.h>
using namespace std;
//#define max 130
//char s[max];
//int top=-1;
//int pop(char s[]);
//int peek(char s[]);
int main()
{
    int i,j,k,l,m,n,b,top=-1;
    char s[130];
    char ch[130];
    //string ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ch;
       // k=sizeof(ch);
       // cout<<k<<endl;
        for(j=0;j<k;j++)
        {
            if(ch[j]=='('||ch[j]=='[')
            {
                top++;
                s[top]=ch[j];
                cout<<s[top]<<endl;
            }
            else
            {
                if(s[top]=='\0')
                {
                    //cout<<"no";
                    break;
                }
                if(ch[j]==')'&&s[top]!='(')
                {
                   // cout<<"no";
                    break;
                }
                 if(ch[j]=='['&&s[top]!=']')
                {
                   // cout<<"no";
                    break;
                }

                else
                {
                    ch[j]=s[top];
                    top--;
                }

            }

        }
         if(s[top]=='\0')
                {
                cout<<"yes";
                }
        else
                {
                    cout<<"no";
                }

    }
   /* def checkBalance(s):
	mystack=Stack(len(s))
	if s=="":
		return True
	for c in s:
		if c=="(" or c=="{":
			mystack.push(c) #push the opening bracket
		else:
			if mystack.is_empty():
				return False
			if c=="{" and mystack.peek()!="}": #the brackets dont match
				return False
			if c=="(" and mystack.peek()!=")": #the brackets dont matchs
				return False
			mystack.pop() #pop matching brackets

	if mystack.is_empty(): #stack must be empty at the end
		return True
	return False



print checkBalance("(){}")
print checkBalance("()(((")
print checkBalance("()(}")*/
    return 0;
}
