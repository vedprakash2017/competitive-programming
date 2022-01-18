#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main()
{
    int i,j,temp;
    // char str[100]={"This is a pattern matching"};
    // char substr[20]={"pattern"};
    string str ,substr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>str;
 	int st = 0, en = 0;
    for(i=0; i < str.size();i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
        	if(j == 0)
        		st = i;

            temp=i+1;
            
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }
 
            if(substr[j] == 'Z')
            {
            	en = i;
                cout<<"The substring is present in given string at position "<<temp<<"\n";
             	break;
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }
 
    if(temp==0)
        cout<<"The substring is not present in given string\n";
 
 	cout<<en-st;
    return 0;
}